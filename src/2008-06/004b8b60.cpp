// from server: 100% by king_originala
// roc 2008-06 004b8b60  unit: RBX::Network::Server::ClientProxy  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b8b60
//
// 004b8b60  6aff                 push -1
// 004b8b62  68968c7c00           push 0x7c8c96
// 004b8b67  64a100000000         mov eax, dword ptr fs:[0]
// 004b8b6d  50                   push eax
// 004b8b6e  64892500000000       mov dword ptr fs:[0], esp
// 004b8b75  81ec2c010000         sub esp, 0x12c
// 004b8b7b  56                   push esi
// 004b8b7c  8bf1                 mov esi, ecx
// 004b8b7e  8b86242d0000         mov eax, dword ptr [esi + 0x2d24]
// 004b8b84  6a00                 push 0
// 004b8b86  50                   push eax
// 004b8b87  8d4c240c             lea ecx, [esp + 0xc]
// 004b8b8b  e8f0b31000           call 0x5c3f80
// 004b8b90  8b842440010000       mov eax, dword ptr [esp + 0x140]
// 004b8b97  8b480c               mov ecx, dword ptr [eax + 0xc]
// 004b8b9a  8b5014               mov edx, dword ptr [eax + 0x14]
// 004b8b9d  6a00                 push 0
// 004b8b9f  51                   push ecx
// 004b8ba0  52                   push edx
// 004b8ba1  8d4c2428             lea ecx, [esp + 0x28]
// 004b8ba5  c784244401000000000000 mov dword ptr [esp + 0x144], 0
// 004b8bb0  e86bc5feff           call 0x4a5120
// 004b8bb5  6a08                 push 8
// 004b8bb7  8d4c2420             lea ecx, [esp + 0x20]
// 004b8bbb  c684243c01000001     mov byte ptr [esp + 0x13c], 1
// 004b8bc3  e8a8c8feff           call 0x4a5470
// 004b8bc8  8d44241c             lea eax, [esp + 0x1c]
// 004b8bcc  50                   push eax
// 004b8bcd  8bce                 mov ecx, esi
// 004b8bcf  e89cfdffff           call 0x4b8970
// 004b8bd4  8d4c241c             lea ecx, [esp + 0x1c]
// 004b8bd8  c684243801000000     mov byte ptr [esp + 0x138], 0
// 004b8be0  e8bbc5feff           call 0x4a51a0
// 004b8be5  8d4c2404             lea ecx, [esp + 4]
// 004b8be9  c7842438010000ffffffff mov dword ptr [esp + 0x138], 0xffffffff
// 004b8bf4  e8d7b61000           call 0x5c42d0
// 004b8bf9  8b8c2430010000       mov ecx, dword ptr [esp + 0x130]
// 004b8c00  5e                   pop esi
// 004b8c01  64890d00000000       mov dword ptr fs:[0], ecx
// 004b8c08  81c438010000         add esp, 0x138
// 004b8c0e  c20400               ret 4

struct Lock {
    char storage[24];
    Lock(void *, bool);
    ~Lock();
};

struct BitStream {
    char storage[276];
    BitStream(unsigned char *, unsigned int, bool);
    ~BitStream();
    void IgnoreBits(int);
};

struct Packet {
    char padding[12];
    unsigned int length;
    char unused[4];
    unsigned char *data;
};

struct ClientProxy {
    char padding[0x2d24];
    void *mutex;

    void process(Packet *);
    void handle(BitStream *);
};

void ClientProxy::process(Packet *packet)
{
    Lock lock(mutex, false);
    BitStream stream(packet->data, packet->length, false);
    stream.IgnoreBits(8);
    handle(&stream);
}
