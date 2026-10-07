// roc 2010-06 009dd320  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd320
//
// 009dd320  a18c5fc000           mov eax, dword ptr [0xc05f8c]
// 009dd325  50                   push eax
// 009dd326  e86fa6dcff           call 0x7a799a
// 009dd32b  83c404               add esp, 4
// 009dd32e  c705705fc0001809a000 mov dword ptr [0xc05f70], 0xa00918
// 009dd338  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd320(int);
void func_009dd320()
{
    G4_func_009dd320(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
