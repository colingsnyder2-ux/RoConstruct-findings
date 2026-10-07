// roc 2010-06 009e4920  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4920
//
// 009e4920  a178cec100           mov eax, dword ptr [0xc1ce78]
// 009e4925  50                   push eax
// 009e4926  e86f30dcff           call 0x7a799a
// 009e492b  83c404               add esp, 4
// 009e492e  c7055ccec1001809a000 mov dword ptr [0xc1ce5c], 0xa00918
// 009e4938  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4920(int);
void func_009e4920()
{
    G4_func_009e4920(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
