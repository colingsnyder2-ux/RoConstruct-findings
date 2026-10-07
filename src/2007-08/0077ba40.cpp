// roc 2007-08 0077ba40  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077ba40
//
// 0077ba40  a188648c00           mov eax, dword ptr [0x8c6488]
// 0077ba45  50                   push eax
// 0077ba46  e81742ebff           call 0x62fc62
// 0077ba4b  83c404               add esp, 4
// 0077ba4e  c7056c648c00b4707800 mov dword ptr [0x8c646c], 0x7870b4
// 0077ba58  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077ba40(int);
void func_0077ba40()
{
    G4_func_0077ba40(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
