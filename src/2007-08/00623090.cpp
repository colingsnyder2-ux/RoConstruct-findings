// from server: 35% by colin
// roc 2007-08 00623090  unit: RBX::EquationDisplay  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00623090
//
// 00623090  6aff                 push -1
// 00623092  6868cd7500           push 0x75cd68
// 00623097  64a100000000         mov eax, dword ptr fs:[0]
// 0062309d  50                   push eax
// 0062309e  64892500000000       mov dword ptr fs:[0], esp
// 006230a5  51                   push ecx
// 006230a6  56                   push esi
// 006230a7  8bf1                 mov esi, ecx
// 006230a9  89742404             mov dword ptr [esp + 4], esi
// 006230ad  8d8e44010000         lea ecx, [esi + 0x144]
// 006230b3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006230bb  ff15ace67700         call dword ptr [0x77e6ac]
// 006230c1  8bce                 mov ecx, esi
// 006230c3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006230cb  e8c037f3ff           call 0x556890
// 006230d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006230d4  5e                   pop esi
// 006230d5  64890d00000000       mov dword ptr fs:[0], ecx
// 006230dc  83c410               add esp, 0x10
// 006230df  c3                   ret 

struct EquationDisplay {
    char pad[0x144];
    void* field_144;
    void destruct();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern void sub_556890(void*);

void EquationDisplay::destruct()
{
    sub_77E6AC(&field_144);
    sub_556890(this);
}
