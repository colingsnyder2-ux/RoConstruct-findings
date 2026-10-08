// roc 2007-08 0077a110  unit: seg_00770000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a110
//
// 0077a110  a18c298c00           mov eax, dword ptr [0x8c298c]
// 0077a115  50                   push eax
// 0077a116  e8475bebff           call 0x62fc62
// 0077a11b  83c404               add esp, 4
// 0077a11e  c70574298c00b4707800 mov dword ptr [0x8c2974], 0x7870b4
// 0077a128  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_0077a110(int);
void func_0077a110()
{
    G4_func_0077a110(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
