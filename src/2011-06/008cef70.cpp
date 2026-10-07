// roc 2011-06 008cef70  unit: CXTPDockingPaneContext  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008cef70
//
// 008cef70  c701b473ad00         mov dword ptr [ecx], 0xad73b4
// 008cef76  e935a3feff           jmp 0x8b92b0
// auto-matched from its assembly shape

struct B_func_008cef70 { virtual ~B_func_008cef70(); };
struct S_func_008cef70 : B_func_008cef70 { ~S_func_008cef70(); };
S_func_008cef70::~S_func_008cef70()
{
}
