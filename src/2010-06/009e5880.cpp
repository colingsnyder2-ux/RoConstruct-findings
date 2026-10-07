// roc 2010-06 009e5880  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5880
//
// 009e5880  a1e0e6c100           mov eax, dword ptr [0xc1e6e0]
// 009e5885  50                   push eax
// 009e5886  e80f21dcff           call 0x7a799a
// 009e588b  83c404               add esp, 4
// 009e588e  c705c4e6c1001809a000 mov dword ptr [0xc1e6c4], 0xa00918
// 009e5898  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e5880(int);
void func_009e5880()
{
    G4_func_009e5880(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
