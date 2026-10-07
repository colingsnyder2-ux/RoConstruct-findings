// roc 2007-08 00779fe0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00779fe0
//
// 00779fe0  a158278c00           mov eax, dword ptr [0x8c2758]
// 00779fe5  50                   push eax
// 00779fe6  e8775cebff           call 0x62fc62
// 00779feb  83c404               add esp, 4
// 00779fee  c70540278c00b4707800 mov dword ptr [0x8c2740], 0x7870b4
// 00779ff8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00779fe0(int);
void func_00779fe0()
{
    G4_func_00779fe0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
