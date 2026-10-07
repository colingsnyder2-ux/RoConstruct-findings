// roc 2009-06 0089aeb0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089aeb0
//
// 0089aeb0  a1a4d3a400           mov eax, dword ptr [0xa4d3a4]
// 0089aeb5  50                   push eax
// 0089aeb6  e877dbe7ff           call 0x718a32
// 0089aebb  83c404               add esp, 4
// 0089aebe  c70588d3a40030d28a00 mov dword ptr [0xa4d388], 0x8ad230
// 0089aec8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089aeb0(int);
void func_0089aeb0()
{
    G4_func_0089aeb0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
