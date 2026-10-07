// roc 2010-06 009e5d00  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5d00
//
// 009e5d00  a144edc100           mov eax, dword ptr [0xc1ed44]
// 009e5d05  50                   push eax
// 009e5d06  e88f1cdcff           call 0x7a799a
// 009e5d0b  83c404               add esp, 4
// 009e5d0e  c70528edc1001809a000 mov dword ptr [0xc1ed28], 0xa00918
// 009e5d18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5d00(int);
void func_009e5d00()
{
    G4_func_009e5d00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
