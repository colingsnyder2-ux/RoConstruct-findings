// roc 2010-06 009de2e0  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009de2e0
//
// 009de2e0  a18caac000           mov eax, dword ptr [0xc0aa8c]
// 009de2e5  50                   push eax
// 009de2e6  e8af96dcff           call 0x7a799a
// 009de2eb  83c404               add esp, 4
// 009de2ee  c70570aac0001809a000 mov dword ptr [0xc0aa70], 0xa00918
// 009de2f8  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009de2e0(int);
void func_009de2e0()
{
    G4_func_009de2e0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
