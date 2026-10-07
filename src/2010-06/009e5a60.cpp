// roc 2010-06 009e5a60  unit: seg_009e0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009e5a60
//
// 009e5a60  c705b4eac1001809a000 mov dword ptr [0xc1eab4], 0xa00918
// 009e5a6a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_009e5a60;
extern char G2_func_009e5a60;
void func_009e5a60()
{
    G1_func_009e5a60 = &G2_func_009e5a60;
}
