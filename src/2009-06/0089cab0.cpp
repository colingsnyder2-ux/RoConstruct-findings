// roc 2009-06 0089cab0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cab0
//
// 0089cab0  a1a0f5a400           mov eax, dword ptr [0xa4f5a0]
// 0089cab5  50                   push eax
// 0089cab6  e877bfe7ff           call 0x718a32
// 0089cabb  83c404               add esp, 4
// 0089cabe  c70584f5a40030d28a00 mov dword ptr [0xa4f584], 0x8ad230
// 0089cac8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cab0(int);
void func_0089cab0()
{
    G4_func_0089cab0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
