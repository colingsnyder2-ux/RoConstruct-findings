// roc 2009-06 00896ca0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896ca0
//
// 00896ca0  a12c39a400           mov eax, dword ptr [0xa4392c]
// 00896ca5  50                   push eax
// 00896ca6  e8871de8ff           call 0x718a32
// 00896cab  83c404               add esp, 4
// 00896cae  c7051439a40030d28a00 mov dword ptr [0xa43914], 0x8ad230
// 00896cb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896ca0(int);
void func_00896ca0()
{
    G4_func_00896ca0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
