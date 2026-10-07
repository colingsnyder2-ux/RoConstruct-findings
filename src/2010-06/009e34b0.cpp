// roc 2010-06 009e34b0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e34b0
//
// 009e34b0  a120aec100           mov eax, dword ptr [0xc1ae20]
// 009e34b5  50                   push eax
// 009e34b6  e8df44dcff           call 0x7a799a
// 009e34bb  83c404               add esp, 4
// 009e34be  c70504aec1001809a000 mov dword ptr [0xc1ae04], 0xa00918
// 009e34c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e34b0(int);
void func_009e34b0()
{
    G4_func_009e34b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
