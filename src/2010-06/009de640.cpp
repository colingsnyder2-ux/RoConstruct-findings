// roc 2010-06 009de640  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de640
//
// 009de640  a100b1c000           mov eax, dword ptr [0xc0b100]
// 009de645  50                   push eax
// 009de646  e84f93dcff           call 0x7a799a
// 009de64b  83c404               add esp, 4
// 009de64e  c705e0b0c0001809a000 mov dword ptr [0xc0b0e0], 0xa00918
// 009de658  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de640(int);
void func_009de640()
{
    G4_func_009de640(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
