// roc 2011-06 004232c0  unit: CRBXHTMLControlSite  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004232c0
//
// 004232c0  837c240804           cmp dword ptr [esp + 8], 4
// 004232c5  7506                 jne 0x4232cd
// 004232c7  b805400080           mov eax, 0x80004005
// 004232cc  c3                   ret 
// 004232cd  8b442404             mov eax, dword ptr [esp + 4]
// 004232d1  50                   push eax
// 004232d2  e879ffffff           call 0x423250
// 004232d7  83c404               add esp, 4
// 004232da  c3                   ret 
// copied from an identical function in another client (function ?sub_41be00@ns_ROCX00000d@ns_ROCX000005@@YAHHH@Z)

namespace ns_ROCX00000d {
extern void G1_func_0041e2a0();
void fn_ROCX00000d()
{
    G1_func_0041e2a0();
}
}
