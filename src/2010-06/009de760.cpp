// roc 2010-06 009de760  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de760
//
// 009de760  a1eca9c000           mov eax, dword ptr [0xc0a9ec]
// 009de765  50                   push eax
// 009de766  e82f92dcff           call 0x7a799a
// 009de76b  83c404               add esp, 4
// 009de76e  c705d0a9c0001809a000 mov dword ptr [0xc0a9d0], 0xa00918
// 009de778  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de760(int);
void func_009de760()
{
    G4_func_009de760(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
