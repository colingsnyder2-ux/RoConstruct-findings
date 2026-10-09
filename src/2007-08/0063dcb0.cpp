// from DeepSeek/server: 100% by colin
// roc 2007-08 0063dcb0  unit: CXTPPaintManager  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063dcb0
//
// 0063dcb0  56                   push esi
// 0063dcb1  8b742408             mov esi, dword ptr [esp + 8]
// 0063dcb5  56                   push esi
// 0063dcb6  e875feffff           call 0x63db30
// 0063dcbb  50                   push eax
// 0063dcbc  e84ff2ffff           call 0x63cf10
// 0063dcc1  a1d8868c00           mov eax, dword ptr [0x8c86d8]
// 0063dcc6  83c408               add esp, 8
// 0063dcc9  89b024010000         mov dword ptr [eax + 0x124], esi
// 0063dccf  5e                   pop esi
// 0063dcd0  c3                   ret 

extern "C" int __cdecl sub_0063db30(int);
extern "C" int __cdecl sub_0063cf10(int);

extern int* g_8c86d8;

void __cdecl sub_0063dcb0(int a1)
{
    int v = sub_0063db30(a1);
    sub_0063cf10(v);
    g_8c86d8[0x124 / 4] = a1;
}
