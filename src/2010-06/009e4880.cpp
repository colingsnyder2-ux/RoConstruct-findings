// roc 2010-06 009e4880  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4880
//
// 009e4880  a138cec100           mov eax, dword ptr [0xc1ce38]
// 009e4885  50                   push eax
// 009e4886  e80f31dcff           call 0x7a799a
// 009e488b  83c404               add esp, 4
// 009e488e  c7051ccec1001809a000 mov dword ptr [0xc1ce1c], 0xa00918
// 009e4898  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4880(int);
void func_009e4880()
{
    G4_func_009e4880(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
