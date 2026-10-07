// roc 2011-06 008e77f0  unit: CXTColorPageStandard  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e77f0
//
// 008e77f0  c701448dad00         mov dword ptr [ecx], 0xad8d44
// 008e77f6  e925c9b5ff           jmp 0x444120
// auto-matched from its assembly shape

struct B_func_008e77f0 { virtual ~B_func_008e77f0(); };
struct S_func_008e77f0 : B_func_008e77f0 { ~S_func_008e77f0(); };
S_func_008e77f0::~S_func_008e77f0()
{
}
