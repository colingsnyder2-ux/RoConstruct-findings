// roc 2007-08 006b2f20  unit: CXTPResourceManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b2f20
//
// 006b2f20  c7018c5f7d00         mov dword ptr [ecx], 0x7d5f8c
// 006b2f26  e9c5fcffff           jmp 0x6b2bf0
// auto-matched from its assembly shape

struct B_func_006b2f20 { virtual ~B_func_006b2f20(); };
struct S_func_006b2f20 : B_func_006b2f20 { ~S_func_006b2f20(); };
S_func_006b2f20::~S_func_006b2f20()
{
}
