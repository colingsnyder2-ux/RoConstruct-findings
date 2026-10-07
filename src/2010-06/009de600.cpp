// roc 2010-06 009de600  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de600
//
// 009de600  a118b0c000           mov eax, dword ptr [0xc0b018]
// 009de605  50                   push eax
// 009de606  e88f93dcff           call 0x7a799a
// 009de60b  83c404               add esp, 4
// 009de60e  c705f8afc0001809a000 mov dword ptr [0xc0aff8], 0xa00918
// 009de618  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de600(int);
void func_009de600()
{
    G4_func_009de600(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
