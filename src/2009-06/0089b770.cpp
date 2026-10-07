// roc 2009-06 0089b770  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b770
//
// 0089b770  a18cdea400           mov eax, dword ptr [0xa4de8c]
// 0089b775  50                   push eax
// 0089b776  e8b7d2e7ff           call 0x718a32
// 0089b77b  83c404               add esp, 4
// 0089b77e  c70574dea40030d28a00 mov dword ptr [0xa4de74], 0x8ad230
// 0089b788  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b770(int);
void func_0089b770()
{
    G4_func_0089b770(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
