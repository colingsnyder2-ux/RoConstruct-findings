// roc 2010-06 009e49c0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e49c0
//
// 009e49c0  a1bccec100           mov eax, dword ptr [0xc1cebc]
// 009e49c5  50                   push eax
// 009e49c6  e8cf2fdcff           call 0x7a799a
// 009e49cb  83c404               add esp, 4
// 009e49ce  c705a0cec1001809a000 mov dword ptr [0xc1cea0], 0xa00918
// 009e49d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e49c0(int);
void func_009e49c0()
{
    G4_func_009e49c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
