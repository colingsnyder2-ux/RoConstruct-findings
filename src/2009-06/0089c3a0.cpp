// roc 2009-06 0089c3a0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089c3a0
//
// 0089c3a0  a1a8efa400           mov eax, dword ptr [0xa4efa8]
// 0089c3a5  50                   push eax
// 0089c3a6  e887c6e7ff           call 0x718a32
// 0089c3ab  83c404               add esp, 4
// 0089c3ae  c70590efa40030d28a00 mov dword ptr [0xa4ef90], 0x8ad230
// 0089c3b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089c3a0(int);
void func_0089c3a0()
{
    G4_func_0089c3a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
