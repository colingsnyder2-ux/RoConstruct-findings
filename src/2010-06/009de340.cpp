// roc 2010-06 009de340  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de340
//
// 009de340  a1bcb0c000           mov eax, dword ptr [0xc0b0bc]
// 009de345  50                   push eax
// 009de346  e84f96dcff           call 0x7a799a
// 009de34b  83c404               add esp, 4
// 009de34e  c705a0b0c0001809a000 mov dword ptr [0xc0b0a0], 0xa00918
// 009de358  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de340(int);
void func_009de340()
{
    G4_func_009de340(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
