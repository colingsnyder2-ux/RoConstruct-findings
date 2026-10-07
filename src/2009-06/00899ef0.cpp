// roc 2009-06 00899ef0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00899ef0
//
// 00899ef0  a144b9a400           mov eax, dword ptr [0xa4b944]
// 00899ef5  50                   push eax
// 00899ef6  e837ebe7ff           call 0x718a32
// 00899efb  83c404               add esp, 4
// 00899efe  c70528b9a40030d28a00 mov dword ptr [0xa4b928], 0x8ad230
// 00899f08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00899ef0(int);
void func_00899ef0()
{
    G4_func_00899ef0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
