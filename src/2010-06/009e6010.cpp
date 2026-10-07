// roc 2010-06 009e6010  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e6010
//
// 009e6010  a154f2c100           mov eax, dword ptr [0xc1f254]
// 009e6015  50                   push eax
// 009e6016  e87f19dcff           call 0x7a799a
// 009e601b  83c404               add esp, 4
// 009e601e  c70538f2c1001809a000 mov dword ptr [0xc1f238], 0xa00918
// 009e6028  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e6010(int);
void func_009e6010()
{
    G4_func_009e6010(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
