// roc 2007-08 00779700  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779700
//
// 00779700  a1a8178c00           mov eax, dword ptr [0x8c17a8]
// 00779705  50                   push eax
// 00779706  e85765ebff           call 0x62fc62
// 0077970b  83c404               add esp, 4
// 0077970e  c70590178c00b4707800 mov dword ptr [0x8c1790], 0x7870b4
// 00779718  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779700(int);
void func_00779700()
{
    G4_func_00779700(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
