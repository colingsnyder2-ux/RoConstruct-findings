// roc 2010-06 009e2c10  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2c10
//
// 009e2c10  a19c9bc100           mov eax, dword ptr [0xc19b9c]
// 009e2c15  50                   push eax
// 009e2c16  e87f4ddcff           call 0x7a799a
// 009e2c1b  83c404               add esp, 4
// 009e2c1e  c705809bc1001809a000 mov dword ptr [0xc19b80], 0xa00918
// 009e2c28  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2c10(int);
void func_009e2c10()
{
    G4_func_009e2c10(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
