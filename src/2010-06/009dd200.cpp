// roc 2010-06 009dd200  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd200
//
// 009dd200  a1f05fc000           mov eax, dword ptr [0xc05ff0]
// 009dd205  50                   push eax
// 009dd206  e88fa7dcff           call 0x7a799a
// 009dd20b  83c404               add esp, 4
// 009dd20e  c705d05fc0001809a000 mov dword ptr [0xc05fd0], 0xa00918
// 009dd218  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd200(int);
void func_009dd200()
{
    G4_func_009dd200(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
