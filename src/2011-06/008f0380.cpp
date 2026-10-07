// roc 2011-06 008f0380  unit: CXTShadowWnd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0380
//
// 008f0380  c70184a0ad00         mov dword ptr [ecx], 0xada084
// 008f0386  e9953db5ff           jmp 0x444120
// auto-matched from its assembly shape

struct B_func_008f0380 { virtual ~B_func_008f0380(); };
struct S_func_008f0380 : B_func_008f0380 { ~S_func_008f0380(); };
S_func_008f0380::~S_func_008f0380()
{
}
