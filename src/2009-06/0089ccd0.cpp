// roc 2009-06 0089ccd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089ccd0
//
// 0089ccd0  a13cf8a400           mov eax, dword ptr [0xa4f83c]
// 0089ccd5  50                   push eax
// 0089ccd6  e857bde7ff           call 0x718a32
// 0089ccdb  83c404               add esp, 4
// 0089ccde  c70524f8a40030d28a00 mov dword ptr [0xa4f824], 0x8ad230
// 0089cce8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089ccd0(int);
void func_0089ccd0()
{
    G4_func_0089ccd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
