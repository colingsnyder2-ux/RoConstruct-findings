// roc 2010-06 009db630  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009db630
//
// 009db630  a1dc17c000           mov eax, dword ptr [0xc017dc]
// 009db635  50                   push eax
// 009db636  e85fc3dcff           call 0x7a799a
// 009db63b  83c404               add esp, 4
// 009db63e  c705c017c0001809a000 mov dword ptr [0xc017c0], 0xa00918
// 009db648  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009db630(int);
void func_009db630()
{
    G4_func_009db630(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
