from include import Location_pb2
import pickle


#读取保存的二进制文件
with open('../binary_data.pkl', 'rb') as f:
    binary_data_list = []
    while True:
        try:
            binary_data = pickle.load(f)
            binary_data_list.append(binary_data)
        except EOFError:
            break
#对提取出的binary_data_list进行遍历
for binary_data in binary_data_list:
    Location = Location_pb2.Location()
    Location.ParseFromString(binary_data)
    print(Location.position.longitude)
    print(Location.position.latitude)
    print(Location.position.height)
    print(Location.pitch)
    print(Location.roll)
    print(Location.heading)