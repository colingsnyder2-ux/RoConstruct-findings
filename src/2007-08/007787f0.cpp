// roc 2007-08 007787f0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007787f0
//
// 007787f0  a1c8e88b00           mov eax, dword ptr [0x8be8c8]
// 007787f5  50                   push eax
// 007787f6  e86774ebff           call 0x62fc62
// 007787fb  83c404               add esp, 4
// 007787fe  c705b0e88b00b4707800 mov dword ptr [0x8be8b0], 0x7870b4
// 00778808  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007787f0(int);
void func_007787f0()
{
    G4_func_007787f0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
