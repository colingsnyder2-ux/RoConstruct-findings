// roc 2009-06 0089b870  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b870
//
// 0089b870  a130dea400           mov eax, dword ptr [0xa4de30]
// 0089b875  50                   push eax
// 0089b876  e8b7d1e7ff           call 0x718a32
// 0089b87b  83c404               add esp, 4
// 0089b87e  c70518dea40030d28a00 mov dword ptr [0xa4de18], 0x8ad230
// 0089b888  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b870(int);
void func_0089b870()
{
    G4_func_0089b870(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
