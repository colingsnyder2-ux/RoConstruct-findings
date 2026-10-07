// roc 2009-06 0089b110  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089b110
//
// 0089b110  a120d4a400           mov eax, dword ptr [0xa4d420]
// 0089b115  50                   push eax
// 0089b116  e817d9e7ff           call 0x718a32
// 0089b11b  83c404               add esp, 4
// 0089b11e  c70504d4a40030d28a00 mov dword ptr [0xa4d404], 0x8ad230
// 0089b128  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089b110(int);
void func_0089b110()
{
    G4_func_0089b110(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
