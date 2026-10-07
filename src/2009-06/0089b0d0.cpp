// roc 2009-06 0089b0d0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b0d0
//
// 0089b0d0  a1f0d3a400           mov eax, dword ptr [0xa4d3f0]
// 0089b0d5  50                   push eax
// 0089b0d6  e857d9e7ff           call 0x718a32
// 0089b0db  83c404               add esp, 4
// 0089b0de  c705d4d3a40030d28a00 mov dword ptr [0xa4d3d4], 0x8ad230
// 0089b0e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b0d0(int);
void func_0089b0d0()
{
    G4_func_0089b0d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
