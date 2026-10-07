// roc 2010-06 009e4380  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e4380
//
// 009e4380  a1b0cbc100           mov eax, dword ptr [0xc1cbb0]
// 009e4385  50                   push eax
// 009e4386  e80f36dcff           call 0x7a799a
// 009e438b  83c404               add esp, 4
// 009e438e  c70590cbc1001809a000 mov dword ptr [0xc1cb90], 0xa00918
// 009e4398  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e4380(int);
void func_009e4380()
{
    G4_func_009e4380(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
