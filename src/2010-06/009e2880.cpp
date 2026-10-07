// roc 2010-06 009e2880  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e2880
//
// 009e2880  a1fc98c100           mov eax, dword ptr [0xc198fc]
// 009e2885  50                   push eax
// 009e2886  e80f51dcff           call 0x7a799a
// 009e288b  83c404               add esp, 4
// 009e288e  c705e098c1001809a000 mov dword ptr [0xc198e0], 0xa00918
// 009e2898  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e2880(int);
void func_009e2880()
{
    G4_func_009e2880(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
