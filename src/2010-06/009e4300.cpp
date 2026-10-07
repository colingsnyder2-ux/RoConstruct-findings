// roc 2010-06 009e4300  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4300
//
// 009e4300  a13cc8c100           mov eax, dword ptr [0xc1c83c]
// 009e4305  50                   push eax
// 009e4306  e88f36dcff           call 0x7a799a
// 009e430b  83c404               add esp, 4
// 009e430e  c70520c8c1001809a000 mov dword ptr [0xc1c820], 0xa00918
// 009e4318  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4300(int);
void func_009e4300()
{
    G4_func_009e4300(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
