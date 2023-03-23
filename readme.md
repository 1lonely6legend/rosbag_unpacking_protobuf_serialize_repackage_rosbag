# rosbag_unpacking_protobuf_serialize_repackage_rosbag

将rosbag包解包，将其中的数据使用protobuf序列化之后，按照原来的时间戳二次打包为rosbag。

Unpack the ROSBAG package, serialize the data in it using protobuf, and then repackage it as ROSBAG according to the original timestamp.

## 1. 依赖
- protobuf
- ros
- python3

## 2.运行流程

首先将rosbag包转化为csv文件，然后读取csv文件，将其中的数据使用protobuf序列化之后，按照原来的时间戳二次打包为rosbag。
最后的rosbag结构为一个时间戳加上一个protobuf序列化的二进制数据，以std/string的形式存储。

> 需要人工查看proto文件，找到对应数据在csv文件中找到对应的列。

## 3.使用方法
 
1. 打开终端启动roscore
    ```bash
    roscore
    ```
2. 将原始的rosbag包放在`src/csv2rosbag/raw_rosbag`目录下，运行
    ```bash
    rostopic echo -b <BAGFILE> -p <TOPIC> > <output>.csv
    ```
   将会在`src/csv2rosbag/raw_rosbag`目录下生成对应的csv文件。其中rosbag中存在的topic可以使用下面的命令查看
    ```bash
    rosbag info <BAGFILE>
    ```
   如需要转换多条topic，需要多次运行上述命令。
3. 将需要转为的proto文件放在`src/csv2rosbag/proto`目录下，运行
    ```bash
    protoc -I=. ./FILEname.proto --python_out=../../include
    ```
   将会在`src/csv2rosbag/include`目录下生成对应的py文件。
4. 人工查看proto文件，找到对应数据在csv文件中找到对应的列。
5. 更改`src/csv2rosbag/scritps/trans.py`中的import语句，将对应的proto文件导入
6. 更改`src/csv2rosbag/scritps/trans.py`中的相应数据结构与行号
7. 运行`src/csv2rosbag/scritps/trans.py`，将会在`src/csv2rosbag/repackage_rosbag`目录下生成储存序列化proto数据的rosbag文件。



