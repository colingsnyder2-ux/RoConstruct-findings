// roc 2010-06 009e2c70  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2c70
//
// 009e2c70  a1049cc100           mov eax, dword ptr [0xc19c04]
// 009e2c75  50                   push eax
// 009e2c76  e81f4ddcff           call 0x7a799a
// 009e2c7b  83c404               add esp, 4
// 009e2c7e  c705e89bc1001809a000 mov dword ptr [0xc19be8], 0xa00918
// 009e2c88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2c70(int);
void func_009e2c70()
{
    G4_func_009e2c70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
