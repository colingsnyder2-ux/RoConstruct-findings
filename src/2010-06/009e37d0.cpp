// roc 2010-06 009e37d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e37d0
//
// 009e37d0  a1a0b2c100           mov eax, dword ptr [0xc1b2a0]
// 009e37d5  50                   push eax
// 009e37d6  e8bf41dcff           call 0x7a799a
// 009e37db  83c404               add esp, 4
// 009e37de  c70580b2c1001809a000 mov dword ptr [0xc1b280], 0xa00918
// 009e37e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e37d0(int);
void func_009e37d0()
{
    G4_func_009e37d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
