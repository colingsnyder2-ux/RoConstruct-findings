// from server: 27% by colin
// roc 2007-08 004588e0  unit: CRobloxWnd  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004588e0
//
// 004588e0  6aff                 push -1
// 004588e2  6808b07300           push 0x73b008
// 004588e7  64a100000000         mov eax, dword ptr fs:[0]
// 004588ed  50                   push eax
// 004588ee  51                   push ecx
// 004588ef  56                   push esi
// 004588f0  a188518b00           mov eax, dword ptr [0x8b5188]
// 004588f5  33c4                 xor eax, esp
// 004588f7  50                   push eax
// 004588f8  8d44240c             lea eax, [esp + 0xc]
// 004588fc  64a300000000         mov dword ptr fs:[0], eax
// 00458902  8bf1                 mov esi, ecx
// 00458904  89742408             mov dword ptr [esp + 8], esi
// 00458908  8d8ef0000000         lea ecx, [esi + 0xf0]
// 0045890e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00458916  ff15ace67700         call dword ptr [0x77e6ac]
// 0045891c  8bce                 mov ecx, esi
// 0045891e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00458926  e885790e00           call 0x5402b0
// 0045892b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0045892f  64890d00000000       mov dword ptr fs:[0], ecx
// 00458936  59                   pop ecx
// 00458937  5e                   pop esi
// 00458938  83c410               add esp, 0x10
// 0045893b  c3                   ret 

struct CRobloxWnd {
    char pad[0xf0];
    void* field_f0;
    void destroy();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_5402B0(CRobloxWnd*);

void CRobloxWnd::destroy()
{
    sub_77E6AC(&field_f0);
    sub_5402B0(this);
}
