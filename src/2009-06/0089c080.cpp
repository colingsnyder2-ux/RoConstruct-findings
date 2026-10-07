// roc 2009-06 0089c080  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c080
//
// 0089c080  a158e9a400           mov eax, dword ptr [0xa4e958]
// 0089c085  50                   push eax
// 0089c086  e8a7c9e7ff           call 0x718a32
// 0089c08b  83c404               add esp, 4
// 0089c08e  c70540e9a40030d28a00 mov dword ptr [0xa4e940], 0x8ad230
// 0089c098  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c080(int);
void func_0089c080()
{
    G4_func_0089c080(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
