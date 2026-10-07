// roc 2007-08 007780d0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007780d0
//
// 007780d0  a190de8b00           mov eax, dword ptr [0x8bde90]
// 007780d5  50                   push eax
// 007780d6  e8877bebff           call 0x62fc62
// 007780db  83c404               add esp, 4
// 007780de  c70578de8b00b4707800 mov dword ptr [0x8bde78], 0x7870b4
// 007780e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_007780d0(int);
void func_007780d0()
{
    G4_func_007780d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
