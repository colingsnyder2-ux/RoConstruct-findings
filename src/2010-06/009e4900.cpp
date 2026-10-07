// roc 2010-06 009e4900  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4900
//
// 009e4900  a19ccec100           mov eax, dword ptr [0xc1ce9c]
// 009e4905  50                   push eax
// 009e4906  e88f30dcff           call 0x7a799a
// 009e490b  83c404               add esp, 4
// 009e490e  c70580cec1001809a000 mov dword ptr [0xc1ce80], 0xa00918
// 009e4918  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4900(int);
void func_009e4900()
{
    G4_func_009e4900(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
