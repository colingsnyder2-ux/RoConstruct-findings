// roc 2009-06 0089bac0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bac0
//
// 0089bac0  a11ce2a400           mov eax, dword ptr [0xa4e21c]
// 0089bac5  50                   push eax
// 0089bac6  e867cfe7ff           call 0x718a32
// 0089bacb  83c404               add esp, 4
// 0089bace  c70504e2a40030d28a00 mov dword ptr [0xa4e204], 0x8ad230
// 0089bad8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bac0(int);
void func_0089bac0()
{
    G4_func_0089bac0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
