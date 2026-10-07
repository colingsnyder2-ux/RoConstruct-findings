// roc 2009-06 00896da0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00896da0
//
// 00896da0  a1fc35a400           mov eax, dword ptr [0xa435fc]
// 00896da5  50                   push eax
// 00896da6  e8871ce8ff           call 0x718a32
// 00896dab  83c404               add esp, 4
// 00896dae  c705e435a40030d28a00 mov dword ptr [0xa435e4], 0x8ad230
// 00896db8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00896da0(int);
void func_00896da0()
{
    G4_func_00896da0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
