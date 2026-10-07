// roc 2009-06 008970c0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008970c0
//
// 008970c0  a16038a400           mov eax, dword ptr [0xa43860]
// 008970c5  50                   push eax
// 008970c6  e86719e8ff           call 0x718a32
// 008970cb  83c404               add esp, 4
// 008970ce  c7054838a40030d28a00 mov dword ptr [0xa43848], 0x8ad230
// 008970d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_008970c0(int);
void func_008970c0()
{
    G4_func_008970c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
