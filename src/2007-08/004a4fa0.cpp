// from server: 2% by colin
// roc 2007-08 004a4fa0  unit: RBX::Network::Server::ClientProxy  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4fa0
//
// 004a4fa0  6aff                 push -1
// 004a4fa2  68ab987400           push 0x7498ab
// 004a4fa7  64a100000000         mov eax, dword ptr fs:[0]
// 004a4fad  50                   push eax
// 004a4fae  51                   push ecx
// 004a4faf  56                   push esi
// 004a4fb0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004a4fb5  33c4                 xor eax, esp
// 004a4fb7  50                   push eax
// 004a4fb8  8d44240c             lea eax, [esp + 0xc]
// 004a4fbc  64a300000000         mov dword ptr fs:[0], eax
// 004a4fc2  8bf1                 mov esi, ecx
// 004a4fc4  89742408             mov dword ptr [esp + 8], esi
// 004a4fc8  807e1000             cmp byte ptr [esi + 0x10], 0
// 004a4fcc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a4fd4  7405                 je 0x4a4fdb
// 004a4fd6  e825ffffff           call 0x4a4f00
// 004a4fdb  8d4e14               lea ecx, [esi + 0x14]
// 004a4fde  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a4fe6  e845a9ffff           call 0x49f930
// 004a4feb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a4fef  64890d00000000       mov dword ptr fs:[0], ecx
// 004a4ff6  59                   pop ecx
// 004a4ff7  5e                   pop esi
// 004a4ff8  83c410               add esp, 0x10
// 004a4ffb  c3                   ret 

struct ClientProxy {
    char pad0[0x10];
    bool flag10;
    char pad11[3];
    int field14;
    void sub_4a4f00();
    void sub_49f930();
    ~ClientProxy();
};

void ClientProxy::sub_4a4f00() {}
void ClientProxy::sub_49f930() {}

ClientProxy::~ClientProxy()
{
    if (flag10) {
        sub_4a4f00();
    }
    sub_49f930();
}
