// roc 2010-06 009de300  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de300
//
// 009de300  a17cb0c000           mov eax, dword ptr [0xc0b07c]
// 009de305  50                   push eax
// 009de306  e88f96dcff           call 0x7a799a
// 009de30b  83c404               add esp, 4
// 009de30e  c70560b0c0001809a000 mov dword ptr [0xc0b060], 0xa00918
// 009de318  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de300(int);
void func_009de300()
{
    G4_func_009de300(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
