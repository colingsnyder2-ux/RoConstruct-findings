// roc 2010-06 009de440  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de440
//
// 009de440  a15cb0c000           mov eax, dword ptr [0xc0b05c]
// 009de445  50                   push eax
// 009de446  e84f95dcff           call 0x7a799a
// 009de44b  83c404               add esp, 4
// 009de44e  c70540b0c0001809a000 mov dword ptr [0xc0b040], 0xa00918
// 009de458  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de440(int);
void func_009de440()
{
    G4_func_009de440(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
