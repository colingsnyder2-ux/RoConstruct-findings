// roc 2010-06 009de420  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de420
//
// 009de420  a14caac000           mov eax, dword ptr [0xc0aa4c]
// 009de425  50                   push eax
// 009de426  e86f95dcff           call 0x7a799a
// 009de42b  83c404               add esp, 4
// 009de42e  c70530aac0001809a000 mov dword ptr [0xc0aa30], 0xa00918
// 009de438  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de420(int);
void func_009de420()
{
    G4_func_009de420(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
