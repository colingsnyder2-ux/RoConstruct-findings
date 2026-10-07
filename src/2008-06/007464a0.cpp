// roc 2008-06 007464a0  unit: CXTPDockContext  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007464a0
//
// 007464a0  c701543c8600         mov dword ptr [ecx], 0x863c54
// 007464a6  e98bacf5ff           jmp 0x6a1136
// auto-matched from its assembly shape

struct B_func_007464a0 { virtual ~B_func_007464a0(); };
struct S_func_007464a0 : B_func_007464a0 { ~S_func_007464a0(); };
S_func_007464a0::~S_func_007464a0()
{
}
