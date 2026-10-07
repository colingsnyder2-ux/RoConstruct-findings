// roc 2010-06 009e4420  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4420
//
// 009e4420  a15cc7c100           mov eax, dword ptr [0xc1c75c]
// 009e4425  50                   push eax
// 009e4426  e86f35dcff           call 0x7a799a
// 009e442b  83c404               add esp, 4
// 009e442e  c70540c7c1001809a000 mov dword ptr [0xc1c740], 0xa00918
// 009e4438  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4420(int);
void func_009e4420()
{
    G4_func_009e4420(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
