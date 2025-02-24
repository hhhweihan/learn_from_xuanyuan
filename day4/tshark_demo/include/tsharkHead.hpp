#ifndef tsharkHead_hpp
#define tsharkHead_hpp

#include<string>

struct Packet {
    int frame_number;			// 数据包编号
    std::string time;			// 数据包的时间戳
    std::string src_ip;			// 源IP地址
    std::string src_addr;
    std::string dst_ip;			// 目的IP地址
    std::string dst_addr;
    std::string protocol;		// 协议
    std::string info;			// 数据包的概要信息
    uint32_t cap_len;
    std::string src_port;
    std::string dst_port;
    uint32_t file_offset;
};

// PCAP全局文件头
struct PcapHeader {
    uint32_t magic_number;
    uint16_t version_major;
    uint16_t version_minor;
    int32_t thiszone;
    uint32_t sigfigs;
    uint32_t snaplen;
    uint32_t network;
};

// 每一个数据报文前面的头
struct PacketHeader {
    uint32_t ts_sec;
    uint32_t ts_usec;
    uint32_t caplen;
    uint32_t len;
};


#endif