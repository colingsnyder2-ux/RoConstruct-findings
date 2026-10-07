// roc 2007-08 00779fa0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779fa0
//
// 00779fa0  a174278c00           mov eax, dword ptr [0x8c2774]
// 00779fa5  50                   push eax
// 00779fa6  e8b75cebff           call 0x62fc62
// 00779fab  83c404               add esp, 4
// 00779fae  c7055c278c00b4707800 mov dword ptr [0x8c275c], 0x7870b4
// 00779fb8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779fa0(int);
void func_00779fa0()
{
    G4_func_00779fa0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
