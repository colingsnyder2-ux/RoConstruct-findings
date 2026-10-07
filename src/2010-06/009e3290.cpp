// roc 2010-06 009e3290  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e3290
//
// 009e3290  a100a9c100           mov eax, dword ptr [0xc1a900]
// 009e3295  50                   push eax
// 009e3296  e8ff46dcff           call 0x7a799a
// 009e329b  83c404               add esp, 4
// 009e329e  c705e4a8c1001809a000 mov dword ptr [0xc1a8e4], 0xa00918
// 009e32a8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e3290(int);
void func_009e3290()
{
    G4_func_009e3290(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
