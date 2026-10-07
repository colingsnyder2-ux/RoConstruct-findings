// roc 2009-06 007ffe20  unit: CXTColorPageStandard  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ffe20
//
// 007ffe20  c701b4aa9000         mov dword ptr [ecx], 0x90aab4
// 007ffe26  e91518feff           jmp 0x7e1640
// auto-matched from its assembly shape

struct B_func_007ffe20 { virtual ~B_func_007ffe20(); };
struct S_func_007ffe20 : B_func_007ffe20 { ~S_func_007ffe20(); };
S_func_007ffe20::~S_func_007ffe20()
{
}
