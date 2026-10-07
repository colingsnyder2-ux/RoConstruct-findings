// roc 2007-08 004f75e0  unit: seg_004f0000  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004f75e0
//
// 004f75e0  c7017cf77900         mov dword ptr [ecx], 0x79f77c
// 004f75e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004f75e0 { virtual ~S_func_004f75e0(); };
S_func_004f75e0::~S_func_004f75e0()
{
}
