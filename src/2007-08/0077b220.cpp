// roc 2007-08 0077b220  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b220
//
// 0077b220  a1ec558c00           mov eax, dword ptr [0x8c55ec]
// 0077b225  50                   push eax
// 0077b226  e8374aebff           call 0x62fc62
// 0077b22b  83c404               add esp, 4
// 0077b22e  c705d4558c00b4707800 mov dword ptr [0x8c55d4], 0x7870b4
// 0077b238  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077b220(int);
void func_0077b220()
{
    G4_func_0077b220(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
