// roc 2007-08 006a2b60  unit: CXTPDockBar  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2b60
//
// 006a2b60  c701e4347d00         mov dword ptr [ecx], 0x7d34e4
// 006a2b66  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006a2b60 { virtual ~S_func_006a2b60(); };
S_func_006a2b60::~S_func_006a2b60()
{
}
