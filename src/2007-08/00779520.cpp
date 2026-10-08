// roc 2007-08 00779520  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00779520
//
// 00779520  a154128c00           mov eax, dword ptr [0x8c1254]
// 00779525  50                   push eax
// 00779526  e83767ebff           call 0x62fc62
// 0077952b  83c404               add esp, 4
// 0077952e  c7053c128c00b4707800 mov dword ptr [0x8c123c], 0x7870b4
// 00779538  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779520(int);
void func_00779520()
{
    G4_func_00779520(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
