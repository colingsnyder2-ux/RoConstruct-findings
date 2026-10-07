// roc 2010-06 009e5f70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5f70
//
// 009e5f70  a118f3c100           mov eax, dword ptr [0xc1f318]
// 009e5f75  50                   push eax
// 009e5f76  e81f1adcff           call 0x7a799a
// 009e5f7b  83c404               add esp, 4
// 009e5f7e  c705fcf2c1001809a000 mov dword ptr [0xc1f2fc], 0xa00918
// 009e5f88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5f70(int);
void func_009e5f70()
{
    G4_func_009e5f70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
