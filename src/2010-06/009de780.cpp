// roc 2010-06 009de780  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de780
//
// 009de780  a13cb0c000           mov eax, dword ptr [0xc0b03c]
// 009de785  50                   push eax
// 009de786  e80f92dcff           call 0x7a799a
// 009de78b  83c404               add esp, 4
// 009de78e  c70520b0c0001809a000 mov dword ptr [0xc0b020], 0xa00918
// 009de798  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de780(int);
void func_009de780()
{
    G4_func_009de780(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
