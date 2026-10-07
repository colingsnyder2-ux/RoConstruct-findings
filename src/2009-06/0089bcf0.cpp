// roc 2009-06 0089bcf0  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089bcf0
//
// 0089bcf0  a148e5a400           mov eax, dword ptr [0xa4e548]
// 0089bcf5  50                   push eax
// 0089bcf6  e837cde7ff           call 0x718a32
// 0089bcfb  83c404               add esp, 4
// 0089bcfe  c70530e5a40030d28a00 mov dword ptr [0xa4e530], 0x8ad230
// 0089bd08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089bcf0(int);
void func_0089bcf0()
{
    G4_func_0089bcf0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
