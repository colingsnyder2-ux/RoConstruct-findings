// roc 2010-06 009de3c0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de3c0
//
// 009de3c0  a12caac000           mov eax, dword ptr [0xc0aa2c]
// 009de3c5  50                   push eax
// 009de3c6  e8cf95dcff           call 0x7a799a
// 009de3cb  83c404               add esp, 4
// 009de3ce  c70510aac0001809a000 mov dword ptr [0xc0aa10], 0xa00918
// 009de3d8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de3c0(int);
void func_009de3c0()
{
    G4_func_009de3c0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
