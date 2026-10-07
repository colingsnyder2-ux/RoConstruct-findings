// roc 2007-08 004a36f0  unit: seg_004a0000  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 004a36f0
//
// 004a36f0  c70184cc7900         mov dword ptr [ecx], 0x79cc84
// 004a36f6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_004a36f0 { virtual ~S_func_004a36f0(); };
S_func_004a36f0::~S_func_004a36f0()
{
}
