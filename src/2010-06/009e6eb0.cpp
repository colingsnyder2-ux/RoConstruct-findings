// roc 2010-06 009e6eb0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6eb0
//
// 009e6eb0  a10404c200           mov eax, dword ptr [0xc20404]
// 009e6eb5  50                   push eax
// 009e6eb6  e8df0adcff           call 0x7a799a
// 009e6ebb  83c404               add esp, 4
// 009e6ebe  c705e803c2001809a000 mov dword ptr [0xc203e8], 0xa00918
// 009e6ec8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6eb0(int);
void func_009e6eb0()
{
    G4_func_009e6eb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
