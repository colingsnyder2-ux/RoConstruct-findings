// roc 2007-08 0077c0d0  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077c0d0
//
// 0077c0d0  a110758c00           mov eax, dword ptr [0x8c7510]
// 0077c0d5  50                   push eax
// 0077c0d6  e8873bebff           call 0x62fc62
// 0077c0db  83c404               add esp, 4
// 0077c0de  c705f8748c00b4707800 mov dword ptr [0x8c74f8], 0x7870b4
// 0077c0e8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077c0d0(int);
void func_0077c0d0()
{
    G4_func_0077c0d0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
