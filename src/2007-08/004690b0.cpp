// from server: 26% by colin
// roc 2007-08 004690b0  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004690b0
//
// 004690b0  6aff                 push -1
// 004690b2  687c397400           push 0x74397c
// 004690b7  64a100000000         mov eax, dword ptr fs:[0]
// 004690bd  50                   push eax
// 004690be  51                   push ecx
// 004690bf  56                   push esi
// 004690c0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004690c5  33c4                 xor eax, esp
// 004690c7  50                   push eax
// 004690c8  8d44240c             lea eax, [esp + 0xc]
// 004690cc  64a300000000         mov dword ptr fs:[0], eax
// 004690d2  8bf1                 mov esi, ecx
// 004690d4  89742408             mov dword ptr [esp + 8], esi
// 004690d8  8d4e24               lea ecx, [esi + 0x24]
// 004690db  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004690e3  ff15ace67700         call dword ptr [0x77e6ac]
// 004690e9  8d4e08               lea ecx, [esi + 8]
// 004690ec  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004690f4  ff15ace67700         call dword ptr [0x77e6ac]
// 004690fa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004690fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00469105  59                   pop ecx
// 00469106  5e                   pop esi
// 00469107  83c410               add esp, 0x10
// 0046910a  c3                   ret 

struct LDraw2RobloxColorMap {
    char pad0[8];
    char field8[0x1c];
    char field24[0x1c];
    void destruct();
};

extern "C" void __stdcall sub_77E6AC(void*);

void LDraw2RobloxColorMap::destruct()
{
    sub_77E6AC(&field24);
    sub_77E6AC(&field8);
}
