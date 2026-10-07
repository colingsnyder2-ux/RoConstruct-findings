// roc 2010-06 009e4860  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4860
//
// 009e4860  a1f0cdc100           mov eax, dword ptr [0xc1cdf0]
// 009e4865  50                   push eax
// 009e4866  e82f31dcff           call 0x7a799a
// 009e486b  83c404               add esp, 4
// 009e486e  c705d4cdc1001809a000 mov dword ptr [0xc1cdd4], 0xa00918
// 009e4878  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4860(int);
void func_009e4860()
{
    G4_func_009e4860(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
