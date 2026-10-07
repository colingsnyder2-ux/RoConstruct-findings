// roc 2010-06 009e6a00  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6a00
//
// 009e6a00  a1f4fac100           mov eax, dword ptr [0xc1faf4]
// 009e6a05  50                   push eax
// 009e6a06  e88f0fdcff           call 0x7a799a
// 009e6a0b  83c404               add esp, 4
// 009e6a0e  c705d8fac1001809a000 mov dword ptr [0xc1fad8], 0xa00918
// 009e6a18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6a00(int);
void func_009e6a00()
{
    G4_func_009e6a00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
