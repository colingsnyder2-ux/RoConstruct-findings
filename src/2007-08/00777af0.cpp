// roc 2007-08 00777af0  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777af0
//
// 00777af0  a13cba8b00           mov eax, dword ptr [0x8bba3c]
// 00777af5  50                   push eax
// 00777af6  e86781ebff           call 0x62fc62
// 00777afb  83c404               add esp, 4
// 00777afe  c70524ba8b00b4707800 mov dword ptr [0x8bba24], 0x7870b4
// 00777b08  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00777af0(int);
void func_00777af0()
{
    G4_func_00777af0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
