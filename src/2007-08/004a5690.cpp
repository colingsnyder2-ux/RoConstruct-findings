// from server: 37% by colin
// roc 2007-08 004a5690  unit: RBX::Network::Server::ClientProxy  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5690
//
// 004a5690  6aff                 push -1
// 004a5692  68b89a7400           push 0x749ab8
// 004a5697  64a100000000         mov eax, dword ptr fs:[0]
// 004a569d  50                   push eax
// 004a569e  51                   push ecx
// 004a569f  56                   push esi
// 004a56a0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004a56a5  33c4                 xor eax, esp
// 004a56a7  50                   push eax
// 004a56a8  8d44240c             lea eax, [esp + 0xc]
// 004a56ac  64a300000000         mov dword ptr fs:[0], eax
// 004a56b2  8bf1                 mov esi, ecx
// 004a56b4  89742408             mov dword ptr [esp + 8], esi
// 004a56b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a56bc  50                   push eax
// 004a56bd  8d4e08               lea ecx, [esi + 8]
// 004a56c0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004a56c8  c7063cd37900         mov dword ptr [esi], 0x79d33c
// 004a56ce  e84d2a0100           call 0x4b8120
// 004a56d3  8bc6                 mov eax, esi
// 004a56d5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a56d9  64890d00000000       mov dword ptr fs:[0], ecx
// 004a56e0  59                   pop ecx
// 004a56e1  5e                   pop esi
// 004a56e2  83c410               add esp, 0x10
// 004a56e5  c20400               ret 4

struct ClientProxy {
    void* vtable;
    char pad[4];
    void* field8;
    void init(void* arg);
    ClientProxy(void* arg);
};

void ClientProxy::init(void* arg) {
    field8 = 0;
    vtable = (void*)0x79d33c;
    // call 0x4b8120 with ecx = this+8, arg
    extern void __stdcall sub_4b8120(void*, void*);
    sub_4b8120((char*)this + 8, arg);
}

ClientProxy::ClientProxy(void* arg) {
    vtable = (void*)0x79d33c;
    field8 = 0;
    extern void __stdcall sub_4b8120(void*, void*);
    sub_4b8120((char*)this + 8, arg);
}
