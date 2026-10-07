// roc 2007-08 0077a5b0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a5b0
//
// 0077a5b0  a148318c00           mov eax, dword ptr [0x8c3148]
// 0077a5b5  50                   push eax
// 0077a5b6  e8a756ebff           call 0x62fc62
// 0077a5bb  83c404               add esp, 4
// 0077a5be  c70530318c00b4707800 mov dword ptr [0x8c3130], 0x7870b4
// 0077a5c8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a5b0(int);
void func_0077a5b0()
{
    G4_func_0077a5b0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
