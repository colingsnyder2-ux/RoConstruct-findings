// roc 2009-06 0089af70  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089af70
//
// 0089af70  a11cd2a400           mov eax, dword ptr [0xa4d21c]
// 0089af75  50                   push eax
// 0089af76  e8b7dae7ff           call 0x718a32
// 0089af7b  83c404               add esp, 4
// 0089af7e  c70504d2a40030d28a00 mov dword ptr [0xa4d204], 0x8ad230
// 0089af88  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089af70(int);
void func_0089af70()
{
    G4_func_0089af70(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
