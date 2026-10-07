// roc 2011-06 008cef30  unit: CXTPDockingPaneContext  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cef30
//
// 008cef30  c7019c73ad00         mov dword ptr [ecx], 0xad739c
// 008cef36  e9e551b7ff           jmp 0x444120
// auto-matched from its assembly shape

struct B_func_008cef30 { virtual ~B_func_008cef30(); };
struct S_func_008cef30 : B_func_008cef30 { ~S_func_008cef30(); };
S_func_008cef30::~S_func_008cef30()
{
}
