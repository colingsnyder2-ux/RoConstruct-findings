// roc 2011-06 008b6da0  unit: CXTPReportInplaceList  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b6da0
//
// 008b6da0  c7018c49ad00         mov dword ptr [ecx], 0xad498c
// 008b6da6  e93b3ef5ff           jmp 0x80abe6
// auto-matched from its assembly shape

struct B_func_008b6da0 { virtual ~B_func_008b6da0(); };
struct S_func_008b6da0 : B_func_008b6da0 { ~S_func_008b6da0(); };
S_func_008b6da0::~S_func_008b6da0()
{
}
