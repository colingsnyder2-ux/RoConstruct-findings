// roc 2008-06 008001c0  unit: seg_00800000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008001c0
//
// 008001c0  c705f8b9970030b78000 mov dword ptr [0x97b9f8], 0x80b730
// 008001ca  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_008001c0;
extern char G2_func_008001c0;
void func_008001c0()
{
    G1_func_008001c0 = &G2_func_008001c0;
}
