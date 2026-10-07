// roc 2009-06 0089c3c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c3c0
//
// 0089c3c0  a14cefa400           mov eax, dword ptr [0xa4ef4c]
// 0089c3c5  50                   push eax
// 0089c3c6  e867c6e7ff           call 0x718a32
// 0089c3cb  83c404               add esp, 4
// 0089c3ce  c70534efa40030d28a00 mov dword ptr [0xa4ef34], 0x8ad230
// 0089c3d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c3c0(int);
void func_0089c3c0()
{
    G4_func_0089c3c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
