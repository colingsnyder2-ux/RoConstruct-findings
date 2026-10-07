// roc 2010-06 009e35d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e35d0
//
// 009e35d0  a188aec100           mov eax, dword ptr [0xc1ae88]
// 009e35d5  50                   push eax
// 009e35d6  e8bf43dcff           call 0x7a799a
// 009e35db  83c404               add esp, 4
// 009e35de  c7056caec1001809a000 mov dword ptr [0xc1ae6c], 0xa00918
// 009e35e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e35d0(int);
void func_009e35d0()
{
    G4_func_009e35d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
