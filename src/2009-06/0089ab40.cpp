// roc 2009-06 0089ab40  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ab40
//
// 0089ab40  a198cca400           mov eax, dword ptr [0xa4cc98]
// 0089ab45  50                   push eax
// 0089ab46  e8e7dee7ff           call 0x718a32
// 0089ab4b  83c404               add esp, 4
// 0089ab4e  c70580cca40030d28a00 mov dword ptr [0xa4cc80], 0x8ad230
// 0089ab58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ab40(int);
void func_0089ab40()
{
    G4_func_0089ab40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
