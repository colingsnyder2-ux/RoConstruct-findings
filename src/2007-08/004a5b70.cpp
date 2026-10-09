// from server: 21% by colin
// roc 2007-08 004a5b70  unit: RBX::Network::Server::ClientProxy  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a5b70
//
// 004a5b70  6aff                 push -1
// 004a5b72  68b89a7400           push 0x749ab8
// 004a5b77  64a100000000         mov eax, dword ptr fs:[0]
// 004a5b7d  50                   push eax
// 004a5b7e  51                   push ecx
// 004a5b7f  56                   push esi
// 004a5b80  a188518b00           mov eax, dword ptr [0x8b5188]
// 004a5b85  33c4                 xor eax, esp
// 004a5b87  50                   push eax
// 004a5b88  8d44240c             lea eax, [esp + 0xc]
// 004a5b8c  64a300000000         mov dword ptr fs:[0], eax
// 004a5b92  8bf1                 mov esi, ecx
// 004a5b94  89742408             mov dword ptr [esp + 8], esi
// 004a5b98  8d4e08               lea ecx, [esi + 8]
// 004a5b9b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004a5ba3  e898260100           call 0x4b8240
// 004a5ba8  c70684cc7900         mov dword ptr [esi], 0x79cc84
// 004a5bae  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a5bb2  64890d00000000       mov dword ptr fs:[0], ecx
// 004a5bb9  59                   pop ecx
// 004a5bba  5e                   pop esi
// 004a5bbb  83c410               add esp, 0x10
// 004a5bbe  c3                   ret 

struct ClientProxy {
    void construct();
};

extern "C" void __stdcall sub_4B8240();

void ClientProxy::construct()
{
    sub_4B8240();
    *(int*)this = 0x79cc84;
}
