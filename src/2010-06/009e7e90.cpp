// roc 2010-06 009e7e90  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e7e90
//
// 009e7e90  a1101ac200           mov eax, dword ptr [0xc21a10]
// 009e7e95  50                   push eax
// 009e7e96  e8fffadbff           call 0x7a799a
// 009e7e9b  83c404               add esp, 4
// 009e7e9e  c705f419c2001809a000 mov dword ptr [0xc219f4], 0xa00918
// 009e7ea8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e7e90(int);
void func_009e7e90()
{
    G4_func_009e7e90(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
