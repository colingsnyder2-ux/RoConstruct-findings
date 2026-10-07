// roc 2009-06 0089d150  unit: seg_00890000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0089d150
//
// 0089d150  c7051003a50014b78c00 mov dword ptr [0xa50310], 0x8cb714
// 0089d15a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0089d150;
extern char G2_func_0089d150;
void func_0089d150()
{
    G1_func_0089d150 = &G2_func_0089d150;
}
