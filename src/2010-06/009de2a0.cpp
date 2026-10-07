// roc 2010-06 009de2a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de2a0
//
// 009de2a0  a16caac000           mov eax, dword ptr [0xc0aa6c]
// 009de2a5  50                   push eax
// 009de2a6  e8ef96dcff           call 0x7a799a
// 009de2ab  83c404               add esp, 4
// 009de2ae  c70550aac0001809a000 mov dword ptr [0xc0aa50], 0xa00918
// 009de2b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de2a0(int);
void func_009de2a0()
{
    G4_func_009de2a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
