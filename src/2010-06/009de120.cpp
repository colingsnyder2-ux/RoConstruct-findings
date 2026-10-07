// roc 2010-06 009de120  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de120
//
// 009de120  a16cabc000           mov eax, dword ptr [0xc0ab6c]
// 009de125  50                   push eax
// 009de126  e86f98dcff           call 0x7a799a
// 009de12b  83c404               add esp, 4
// 009de12e  c70550abc0001809a000 mov dword ptr [0xc0ab50], 0xa00918
// 009de138  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de120(int);
void func_009de120()
{
    G4_func_009de120(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
