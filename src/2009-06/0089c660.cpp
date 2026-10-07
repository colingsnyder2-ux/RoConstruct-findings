// roc 2009-06 0089c660  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c660
//
// 0089c660  a130efa400           mov eax, dword ptr [0xa4ef30]
// 0089c665  50                   push eax
// 0089c666  e8c7c3e7ff           call 0x718a32
// 0089c66b  83c404               add esp, 4
// 0089c66e  c70518efa40030d28a00 mov dword ptr [0xa4ef18], 0x8ad230
// 0089c678  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c660(int);
void func_0089c660()
{
    G4_func_0089c660(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
