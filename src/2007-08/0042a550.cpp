// from server: 42% by colin
// roc 2007-08 0042a550  unit: CLuaHtmlView  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a550
//
// 0042a550  6aff                 push -1
// 0042a552  68d9987400           push 0x7498d9
// 0042a557  64a100000000         mov eax, dword ptr fs:[0]
// 0042a55d  50                   push eax
// 0042a55e  56                   push esi
// 0042a55f  a188518b00           mov eax, dword ptr [0x8b5188]
// 0042a564  33c4                 xor eax, esp
// 0042a566  50                   push eax
// 0042a567  8d442408             lea eax, [esp + 8]
// 0042a56b  64a300000000         mov dword ptr fs:[0], eax
// 0042a571  8bf1                 mov esi, ecx
// 0042a573  8d442418             lea eax, [esp + 0x18]
// 0042a577  50                   push eax
// 0042a578  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0042a580  ff159ce67700         call dword ptr [0x77e69c]
// 0042a586  8d4c2418             lea ecx, [esp + 0x18]
// 0042a58a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0042a592  ff15ace67700         call dword ptr [0x77e6ac]
// 0042a598  8bc6                 mov eax, esi
// 0042a59a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0042a59e  64890d00000000       mov dword ptr fs:[0], ecx
// 0042a5a5  59                   pop ecx
// 0042a5a6  5e                   pop esi
// 0042a5a7  83c40c               add esp, 0xc
// 0042a5aa  c21c00               ret 0x1c

struct CLuaHtmlView {
    void sub_42A550(int, int, int, int, int, int, int);
};

extern "C" {
    void __stdcall sub_77E69C(void*);
    void __stdcall sub_77E6AC(void*);
}

void CLuaHtmlView::sub_42A550(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    char buf[8];
    sub_77E69C(buf);
    sub_77E6AC(buf);
}
