// roc 2011-06 008b7740  unit: CXTPReportNavigator  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b7740
//
// 008b7740  c701ec49ad00         mov dword ptr [ecx], 0xad49ec
// 008b7746  e9cf33f5ff           jmp 0x80ab1a
// auto-matched from its assembly shape

struct B_func_008b7740 { virtual ~B_func_008b7740(); };
struct S_func_008b7740 : B_func_008b7740 { ~S_func_008b7740(); };
S_func_008b7740::~S_func_008b7740()
{
}
