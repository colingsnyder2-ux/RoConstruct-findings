// from server: 48% by tester
struct BitStream {
    int data;
    int pad;
    int bitPos;
};

struct RoundRobinPhysicsSender {
    char pad0[8];
    int field8;
    char padC[4];
    char field10;
    char pad11[3];
    int field14;
    BitStream stream;
    char pad2C[0x130 - 0x2C];
    int field130;

    int sendPacket(int maxPackets, void* stats);
};

extern "C" void __stdcall BitStream_Reset(BitStream* bs);
extern "C" void __stdcall BitStream_AppendBits(BitStream* bs, const void* data, unsigned int numBits);
extern "C" void __stdcall BitStream_Append(BitStream* bs, const void* data, unsigned int numBytes);
extern "C" unsigned int __stdcall RakNet_GetTime();
extern "C" void __stdcall RoundRobinPhysicsSender_sendPhysicsData(RoundRobinPhysicsSender* self, BitStream* bs, int val);

int RoundRobinPhysicsSender::sendPacket(int maxPackets, void* stats)
{
    if (field10 == 0)
    {
        BitStream_Reset(&stream);
        BitStream_AppendBits(&stream, &maxPackets, 0x18);
        unsigned int t = RakNet_GetTime();
        BitStream_Append(&stream, &t, 0x20);
        BitStream_Append(&stream, &maxPackets, 0x50);
        field130 += 1;
        field10 = 1;
    }

    int v = *(int*)((char*)stats + 0);
    int (*fn)(void*) = *(int(**)(void*))((char*)v + 4);
    int r = fn(stats);

    RoundRobinPhysicsSender_sendPhysicsData(this, &stream, r);

    int bits = stream.data + 7;
    bits >>= 3;
    return bits < field14;
}
