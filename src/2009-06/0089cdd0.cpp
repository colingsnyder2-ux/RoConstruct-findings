// roc 2009-06 0089cdd0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089cdd0
//
// 0089cdd0  a1fcfaa400           mov eax, dword ptr [0xa4fafc]
// 0089cdd5  50                   push eax
// 0089cdd6  e857bce7ff           call 0x718a32
// 0089cddb  83c404               add esp, 4
// 0089cdde  c705e4faa40030d28a00 mov dword ptr [0xa4fae4], 0x8ad230
// 0089cde8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089cdd0(int);
void func_0089cdd0()
{
    G4_func_0089cdd0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
