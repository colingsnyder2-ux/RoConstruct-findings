// roc 2009-06 0089b2d0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b2d0
//
// 0089b2d0  a1a8daa400           mov eax, dword ptr [0xa4daa8]
// 0089b2d5  50                   push eax
// 0089b2d6  e857d7e7ff           call 0x718a32
// 0089b2db  83c404               add esp, 4
// 0089b2de  c70590daa40030d28a00 mov dword ptr [0xa4da90], 0x8ad230
// 0089b2e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b2d0(int);
void func_0089b2d0()
{
    G4_func_0089b2d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
