// from server: 32% by colin
// roc 2007-08 004b5f80  unit: RBX::Network::Replicator  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b5f80
//
// 004b5f80  6aff                 push -1
// 004b5f82  6898b07400           push 0x74b098
// 004b5f87  64a100000000         mov eax, dword ptr fs:[0]
// 004b5f8d  50                   push eax
// 004b5f8e  51                   push ecx
// 004b5f8f  56                   push esi
// 004b5f90  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b5f95  33c4                 xor eax, esp
// 004b5f97  50                   push eax
// 004b5f98  8d44240c             lea eax, [esp + 0xc]
// 004b5f9c  64a300000000         mov dword ptr fs:[0], eax
// 004b5fa2  8bf1                 mov esi, ecx
// 004b5fa4  89742408             mov dword ptr [esp + 8], esi
// 004b5fa8  e873dbffff           call 0x4b3b20
// 004b5fad  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004b5fb5  c7064cdf7900         mov dword ptr [esi], 0x79df4c
// 004b5fbb  e8707effff           call 0x4ade30
// 004b5fc0  894608               mov dword ptr [esi + 8], eax
// 004b5fc3  8bc6                 mov eax, esi
// 004b5fc5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5fc9  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5fd0  59                   pop ecx
// 004b5fd1  5e                   pop esi
// 004b5fd2  83c410               add esp, 0x10
// 004b5fd5  c3                   ret 

struct Replicator {
    void* vtable;
    int field4;
    int field8;
    void construct();
    int createSomething();
    Replicator();
};

extern "C" void __stdcall sub_4B3B20();
extern "C" int __stdcall sub_4ADE30();

Replicator::Replicator()
{
    construct();
    field8 = sub_4ADE30();
    vtable = (void*)0x79DF4C;
}
