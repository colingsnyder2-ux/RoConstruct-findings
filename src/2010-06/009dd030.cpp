// roc 2010-06 009dd030  unit: seg_009d0000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009dd030
//
// 009dd030  a1b05ec000           mov eax, dword ptr [0xc05eb0]
// 009dd035  50                   push eax
// 009dd036  e85fa9dcff           call 0x7a799a
// 009dd03b  83c404               add esp, 4
// 009dd03e  c705945ec0001809a000 mov dword ptr [0xc05e94], 0xa00918
// 009dd048  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_009dd030(int);
void func_009dd030()
{
    G4_func_009dd030(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
