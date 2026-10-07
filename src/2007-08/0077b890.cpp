// roc 2007-08 0077b890  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b890
//
// 0077b890  c70588628c00b4707800 mov dword ptr [0x8c6288], 0x7870b4
// 0077b89a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b890;
extern char G2_func_0077b890;
void func_0077b890()
{
    G1_func_0077b890 = &G2_func_0077b890;
}
