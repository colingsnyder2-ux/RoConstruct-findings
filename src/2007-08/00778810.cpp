// roc 2007-08 00778810  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00778810
//
// 00778810  a190e88b00           mov eax, dword ptr [0x8be890]
// 00778815  50                   push eax
// 00778816  e84774ebff           call 0x62fc62
// 0077881b  83c404               add esp, 4
// 0077881e  c70578e88b00b4707800 mov dword ptr [0x8be878], 0x7870b4
// 00778828  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00778810(int);
void func_00778810()
{
    G4_func_00778810(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
