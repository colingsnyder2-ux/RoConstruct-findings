// from server: 16% by colin
// roc 2007-08 006ea080  unit: XTPDockingPanePaintThemes::CXTPDockingPaneVisualStudio2005SecondTheme  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ea080
//
// 006ea080  6aff                 push -1
// 006ea082  6808837600           push 0x768308
// 006ea087  64a100000000         mov eax, dword ptr fs:[0]
// 006ea08d  50                   push eax
// 006ea08e  51                   push ecx
// 006ea08f  56                   push esi
// 006ea090  a188518b00           mov eax, dword ptr [0x8b5188]
// 006ea095  33c4                 xor eax, esp
// 006ea097  50                   push eax
// 006ea098  8d44240c             lea eax, [esp + 0xc]
// 006ea09c  64a300000000         mov dword ptr fs:[0], eax
// 006ea0a2  8bf1                 mov esi, ecx
// 006ea0a4  89742408             mov dword ptr [esp + 8], esi
// 006ea0a8  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 006ea0ae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006ea0b6  e8a550fbff           call 0x69f160
// 006ea0bb  8bce                 mov ecx, esi
// 006ea0bd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006ea0c5  e836bbffff           call 0x6e5c00
// 006ea0ca  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ea0ce  64890d00000000       mov dword ptr fs:[0], ecx
// 006ea0d5  59                   pop ecx
// 006ea0d6  5e                   pop esi
// 006ea0d7  83c410               add esp, 0x10
// 006ea0da  c3                   ret 

struct CXTPDockingPaneVisualStudio2005SecondTheme {
    char pad[0x1e0];
    int field_1e0;
    void sub_69f160();
    void sub_6e5c00();
    void func_006ea080();
};

void CXTPDockingPaneVisualStudio2005SecondTheme::func_006ea080()
{
    sub_69f160();
    sub_6e5c00();
}
