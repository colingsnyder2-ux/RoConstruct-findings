// roc 2007-08 0077b840  unit: seg_00770000  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0077b840
//
// 0077b840  c705a8648c00b4707800 mov dword ptr [0x8c64a8], 0x7870b4
// 0077b84a  c3                   ret 
// auto-matched from its assembly shape

extern char G;

extern void* G1_func_0077b840;
extern char G2_func_0077b840;
void func_0077b840()
{
    G1_func_0077b840 = &G2_func_0077b840;
}
