// from server: 29% by colin
// roc 2007-08 00493a40  unit: RBX::Network::VPlayers::?$Notifier  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493a40
//
// 00493a40  6aff                 push -1
// 00493a42  6858cf7300           push 0x73cf58
// 00493a47  64a100000000         mov eax, dword ptr fs:[0]
// 00493a4d  50                   push eax
// 00493a4e  51                   push ecx
// 00493a4f  56                   push esi
// 00493a50  a188518b00           mov eax, dword ptr [0x8b5188]
// 00493a55  33c4                 xor eax, esp
// 00493a57  50                   push eax
// 00493a58  8d44240c             lea eax, [esp + 0xc]
// 00493a5c  64a300000000         mov dword ptr fs:[0], eax
// 00493a62  8bf1                 mov esi, ecx
// 00493a64  89742408             mov dword ptr [esp + 8], esi
// 00493a68  33c9                 xor ecx, ecx
// 00493a6a  3bf1                 cmp esi, ecx
// 00493a6c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00493a70  7403                 je 0x493a75
// 00493a72  8d4e08               lea ecx, [esi + 8]
// 00493a75  e876472900           call 0x7281f0
// 00493a7a  8bce                 mov ecx, esi
// 00493a7c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00493a84  e8d7e8ffff           call 0x492360
// 00493a89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00493a8d  64890d00000000       mov dword ptr fs:[0], ecx
// 00493a94  59                   pop ecx
// 00493a95  5e                   pop esi
// 00493a96  83c410               add esp, 0x10
// 00493a99  c3                   ret 

struct Notifier {
    char pad[8];
    int field8;
};

extern void __stdcall sub_7281f0(int);
extern void __stdcall sub_492360(int);

void Notifier_destroy(Notifier* self)
{
    if (self != 0)
        sub_7281f0((int)(self->pad + 8));
    sub_492360((int)self);
}
