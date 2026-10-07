// roc 2010-06 009df090  unit: seg_009d0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009df090
//
// 009df090  c705d0bdc0001809a000 mov dword ptr [0xc0bdd0], 0xa00918
// 009df09a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009df090;
extern char G2_func_009df090;
void func_009df090()
{
    G1_func_009df090 = &G2_func_009df090;
}
