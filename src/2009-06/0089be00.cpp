// roc 2009-06 0089be00  unit: seg_00890000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089be00
//
// 0089be00  a100e6a400           mov eax, dword ptr [0xa4e600]
// 0089be05  50                   push eax
// 0089be06  e827cce7ff           call 0x718a32
// 0089be0b  83c404               add esp, 4
// 0089be0e  c705e8e5a40030d28a00 mov dword ptr [0xa4e5e8], 0x8ad230
// 0089be18  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0089be00(int);
void func_0089be00()
{
    G4_func_0089be00(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
