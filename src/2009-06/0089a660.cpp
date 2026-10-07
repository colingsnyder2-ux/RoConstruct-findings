// roc 2009-06 0089a660  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089a660
//
// 0089a660  a184c4a400           mov eax, dword ptr [0xa4c484]
// 0089a665  50                   push eax
// 0089a666  e8c7e3e7ff           call 0x718a32
// 0089a66b  83c404               add esp, 4
// 0089a66e  c7056cc4a40030d28a00 mov dword ptr [0xa4c46c], 0x8ad230
// 0089a678  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089a660(int);
void func_0089a660()
{
    G4_func_0089a660(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
