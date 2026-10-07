// roc 2007-08 00777b80  unit: seg_00770000  size: 25 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00777b80
//
// 00777b80  a1a0bc8b00           mov eax, dword ptr [0x8bbca0]
// 00777b85  50                   push eax
// 00777b86  e8d780ebff           call 0x62fc62
// 00777b8b  83c404               add esp, 4
// 00777b8e  c70588bc8b00b4707800 mov dword ptr [0x8bbc88], 0x7870b4
// 00777b98  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777b80(int);
void func_00777b80()
{
    G4_func_00777b80(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
