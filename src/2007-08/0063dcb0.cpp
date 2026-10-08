// from server: 92% by colin
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

extern "C" int __cdecl sub_63DB30(int);
extern "C" int __cdecl sub_63CF10(int);

extern int dword_8C86D8;

int __cdecl sub_63DCB0(int a1)
{
    int v1 = sub_63DB30(a1);
    int v2 = sub_63CF10(v1);
    *(int *)(dword_8C86D8 + 0x124) = a1;
    return v2;
}
