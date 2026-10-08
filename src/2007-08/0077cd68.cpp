// roc 2007-08 0077cd68  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cd68
//
// 0077cd68  c70598988c00e4507e00 mov dword ptr [0x8c9898], 0x7e50e4
// 0077cd72  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077cd68;
extern char G2_func_0077cd68;
void func_0077cd68()
{
    G1_func_0077cd68 = &G2_func_0077cd68;
}
