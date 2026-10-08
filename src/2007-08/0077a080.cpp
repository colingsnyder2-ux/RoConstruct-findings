// roc 2007-08 0077a080  unit: seg_00770000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077a080
//
// 0077a080  c7051c2b8c0084797900 mov dword ptr [0x8c2b1c], 0x797984
// 0077a08a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077a080;
extern char G2_func_0077a080;
void func_0077a080()
{
    G1_func_0077a080 = &G2_func_0077a080;
}
