// from server: 100% by colin
// roc 2008-06 004cac30  unit: RBX::Network::RoundRobinPhysicsSender  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cac30
//
// 004cac30  56                   push esi
// 004cac31  8bf1                 mov esi, ecx
// 004cac33  807e1000             cmp byte ptr [esi + 0x10], 0
// 004cac37  57                   push edi
// 004cac38  7537                 jne 0x4cac71
// 004cac3a  8d7e18               lea edi, [esi + 0x18]
// 004cac3d  8bcf                 mov ecx, edi
// 004cac3f  e87ca5fdff           call 0x4a51c0
// 004cac44  6a18                 push 0x18
// 004cac46  57                   push edi
// 004cac47  e804b7fdff           call 0x4a6350
// 004cac4c  e8bfecffff           call 0x4c9910
// 004cac51  50                   push eax
// 004cac52  57                   push edi
// 004cac53  e848b5fdff           call 0x4a61a0
// 004cac58  6a50                 push 0x50
// 004cac5a  57                   push edi
// 004cac5b  e8f0b6fdff           call 0x4a6350
// 004cac60  b801000000           mov eax, 1
// 004cac65  83c418               add esp, 0x18
// 004cac68  018630010000         add dword ptr [esi + 0x130], eax
// 004cac6e  884610               mov byte ptr [esi + 0x10], al
// 004cac71  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cac75  8b01                 mov eax, dword ptr [ecx]
// 004cac77  8b5004               mov edx, dword ptr [eax + 4]
// 004cac7a  8d7e18               lea edi, [esi + 0x18]
// 004cac7d  ffd2                 call edx
// 004cac7f  8b4e08               mov ecx, dword ptr [esi + 8]
// 004cac82  50                   push eax
// 004cac83  57                   push edi
// 004cac84  e867feffff           call 0x4caaf0
// 004cac89  8b07                 mov eax, dword ptr [edi]
// 004cac8b  83c007               add eax, 7
// 004cac8e  c1f803               sar eax, 3
// 004cac91  33c9                 xor ecx, ecx
// 004cac93  3b4614               cmp eax, dword ptr [esi + 0x14]
// 004cac96  5f                   pop edi
// 004cac97  0f9cc1               setl cl
// 004cac9a  8ac1                 mov al, cl
// 004cac9c  5e                   pop esi
// 004cac9d  c20400               ret 4

struct BitStream {
    int bitsUsed;
    char storage[0x114];

    void Reset();
};

void __cdecl writeByte(BitStream*, unsigned char);
void __cdecl writeTime(BitStream*, unsigned int);
unsigned int __cdecl getTime();

struct Item {
    virtual void unused() = 0;
    virtual unsigned int value() = 0;
};

struct Sender {
    void send(BitStream*, unsigned int);
};

struct S {
    char padding0[8];
    Sender* sender;
    char padding1[4];
    bool initialized;
    char padding2[3];
    int limit;
    BitStream stream;
    int count;

    bool f(Item*);
};

bool S::f(Item* item)
{
    if (!initialized) {
        stream.Reset();
        writeByte(&stream, 0x18);
        writeTime(&stream, getTime());
        writeByte(&stream, 0x50);
        ++count;
        initialized = true;
    }

    sender->send(&stream, item->value());
    return ((stream.bitsUsed + 7) >> 3) < limit;
}
