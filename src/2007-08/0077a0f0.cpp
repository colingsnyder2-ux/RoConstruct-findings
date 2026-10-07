// roc 2007-08 0077a0f0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a0f0
//
// 0077a0f0  a144288c00           mov eax, dword ptr [0x8c2844]
// 0077a0f5  50                   push eax
// 0077a0f6  e8675bebff           call 0x62fc62
// 0077a0fb  83c404               add esp, 4
// 0077a0fe  c7052c288c00b4707800 mov dword ptr [0x8c282c], 0x7870b4
// 0077a108  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a0f0(int);
void func_0077a0f0()
{
    G4_func_0077a0f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
