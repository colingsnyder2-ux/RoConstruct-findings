// from server: 45% by colin
// roc 2007-08 004bfbb0  unit: RakPeer  size: 324 bytes
// library rbxgs-raknet/ReliabilityLayer.cpp

struct RakPeer;

struct ReliabilityLayer {
    bool AreAcksWaiting();
};

struct RakPeer {
    void SendBufferedPacket(const char* data, unsigned int length, unsigned int priority, unsigned int reliability, unsigned int orderingChannel, bool broadcast, unsigned int receipt);
    void SendBufferedPacket2(const char* data, unsigned int length, unsigned int priority, unsigned int reliability, unsigned int orderingChannel, bool broadcast, unsigned int receipt);
    bool IsActive();
    void Send(const char* data, unsigned int length, unsigned int priority, unsigned int reliability, unsigned int orderingChannel, bool broadcast, unsigned int receipt);
};

struct BitStream {
    BitStream();
    ~BitStream();
    void Write(unsigned char value);
    void WriteBits(const unsigned char* data, unsigned int numberOfBits, bool alignBits);
    void Reset();
};

extern "C" {
    void __cdecl sub_49F850(BitStream* stream, int value);
    void __cdecl sub_49F930(BitStream* stream);
    void __cdecl sub_49FD90(BitStream* stream, const unsigned char* data, unsigned int numberOfBits, bool alignBits);
    unsigned int __cdecl sub_4B7E40();
    unsigned int __cdecl sub_4B7F70();
    void __cdecl sub_630A1E();
}

void RakPeer::SendBufferedPacket(const char* data, unsigned int length, unsigned int priority, unsigned int reliability, unsigned int orderingChannel, bool broadcast, unsigned int receipt) {
    BitStream stream;
    stream.Write(5);
    stream.WriteBits((const unsigned char*)&length, 8, true);
    unsigned int time1 = sub_4B7E40();
    unsigned int time2 = sub_4B7F70();
    stream.WriteBits((const unsigned char*)&time2, 32, true);
    if (broadcast) {
        Send(data, length, priority, reliability, orderingChannel, true, receipt);
    } else {
        SendBufferedPacket2(data, length, priority, reliability, orderingChannel, false, receipt);
    }
    stream.Reset();
}
