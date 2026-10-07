// roc 2007-08 006d73e0  unit: CXTMemDC  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 006d73e0
//
// 006d73e0  c701e08b7d00         mov dword ptr [ecx], 0x7d8be0
// 006d73e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_006d73e0 { virtual ~S_func_006d73e0(); };
S_func_006d73e0::~S_func_006d73e0()
{
}
