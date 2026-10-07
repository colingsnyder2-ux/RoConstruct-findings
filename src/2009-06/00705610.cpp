// roc 2009-06 00705610  unit: boost::lock_error  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705610
//
// 00705610  c70174f08a00         mov dword ptr [ecx], 0x8af074
// 00705616  ff25bce98900         jmp dword ptr [0x89e9bc]
// auto-matched from its assembly shape

struct __declspec(dllimport) B_func_00705610 { virtual ~B_func_00705610(); };
struct S_func_00705610 : B_func_00705610 { ~S_func_00705610(); };
S_func_00705610::~S_func_00705610()
{
}
