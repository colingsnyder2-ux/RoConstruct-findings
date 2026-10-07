// roc 2007-08 0077a0d0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a0d0
//
// 0077a0d0  a1dc288c00           mov eax, dword ptr [0x8c28dc]
// 0077a0d5  50                   push eax
// 0077a0d6  e8875bebff           call 0x62fc62
// 0077a0db  83c404               add esp, 4
// 0077a0de  c705c0288c00b4707800 mov dword ptr [0x8c28c0], 0x7870b4
// 0077a0e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a0d0(int);
void func_0077a0d0()
{
    G4_func_0077a0d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
