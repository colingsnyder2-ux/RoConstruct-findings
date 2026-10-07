// roc 2010-06 009e29c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e29c0
//
// 009e29c0  a15c99c100           mov eax, dword ptr [0xc1995c]
// 009e29c5  50                   push eax
// 009e29c6  e8cf4fdcff           call 0x7a799a
// 009e29cb  83c404               add esp, 4
// 009e29ce  c7054099c1001809a000 mov dword ptr [0xc19940], 0xa00918
// 009e29d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e29c0(int);
void func_009e29c0()
{
    G4_func_009e29c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
