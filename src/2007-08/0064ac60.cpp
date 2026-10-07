// roc 2007-08 0064ac60  unit: CXTPCommandBar  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ac60
//
// 0064ac60  c701586c7c00         mov dword ptr [ecx], 0x7c6c58
// 0064ac66  e985d00800           jmp 0x6d7cf0
// auto-matched from its assembly shape

struct B_func_0064ac60 { virtual ~B_func_0064ac60(); };
struct S_func_0064ac60 : B_func_0064ac60 { ~S_func_0064ac60(); };
S_func_0064ac60::~S_func_0064ac60()
{
}
