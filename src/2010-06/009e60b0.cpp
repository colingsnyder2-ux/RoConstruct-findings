// roc 2010-06 009e60b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e60b0
//
// 009e60b0  a180f4c100           mov eax, dword ptr [0xc1f480]
// 009e60b5  50                   push eax
// 009e60b6  e8df18dcff           call 0x7a799a
// 009e60bb  83c404               add esp, 4
// 009e60be  c70564f4c1001809a000 mov dword ptr [0xc1f464], 0xa00918
// 009e60c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e60b0(int);
void func_009e60b0()
{
    G4_func_009e60b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
