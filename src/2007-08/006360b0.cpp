// from server: 75% by colin
// roc 2007-08 006360b0  unit: CXTPControlComboBox  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006360b0
//
// 006360b0  56                   push esi
// 006360b1  8b742408             mov esi, dword ptr [esp + 8]
// 006360b5  56                   push esi
// 006360b6  e8f5a90300           call 0x670ab0
// 006360bb  85c0                 test eax, eax
// 006360bd  7504                 jne 0x6360c3
// 006360bf  5e                   pop esi
// 006360c0  c20400               ret 4
// 006360c3  e858fcffff           call 0x635d20
// 006360c8  50                   push eax
// 006360c9  8bce                 mov ecx, esi
// 006360cb  e820a1ffff           call 0x6301f0
// 006360d0  f7d8                 neg eax
// 006360d2  1bc0                 sbb eax, eax
// 006360d4  f7d8                 neg eax
// 006360d6  5e                   pop esi
// 006360d7  c20400               ret 4

struct CXTPControlComboBox
{
    int m_SomeMethod(int);
};

extern "C" int __stdcall sub_670AB0(int);
extern "C" int __stdcall sub_635D20();
extern "C" int __stdcall sub_6301F0(CXTPControlComboBox*, int);

int CXTPControlComboBox::m_SomeMethod(int a)
{
    if (sub_670AB0(a) == 0)
        return 0;
    int v = sub_635D20();
    int r = sub_6301F0(this, v);
    return r != 0;
}
