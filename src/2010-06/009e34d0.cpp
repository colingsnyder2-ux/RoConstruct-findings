// roc 2010-06 009e34d0  unit: seg_009e0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e34d0
//
// 009e34d0  a1acacc100           mov eax, dword ptr [0xc1acac]
// 009e34d5  50                   push eax
// 009e34d6  e8bf44dcff           call 0x7a799a
// 009e34db  83c404               add esp, 4
// 009e34de  c70590acc1001809a000 mov dword ptr [0xc1ac90], 0xa00918
// 009e34e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009e34d0(int);
void func_009e34d0()
{
    G4_func_009e34d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
