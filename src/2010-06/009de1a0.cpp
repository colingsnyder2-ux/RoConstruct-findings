// roc 2010-06 009de1a0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de1a0
//
// 009de1a0  a19cb0c000           mov eax, dword ptr [0xc0b09c]
// 009de1a5  50                   push eax
// 009de1a6  e8ef97dcff           call 0x7a799a
// 009de1ab  83c404               add esp, 4
// 009de1ae  c70580b0c0001809a000 mov dword ptr [0xc0b080], 0xa00918
// 009de1b8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de1a0(int);
void func_009de1a0()
{
    G4_func_009de1a0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
