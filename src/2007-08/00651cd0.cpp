// roc 2007-08 00651cd0  unit: CXTPToolBar  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00651cd0
//
// 00651cd0  c70164777c00         mov dword ptr [ecx], 0x7c7764
// 00651cd6  e937e7fdff           jmp 0x630412
// auto-matched from its assembly shape

struct B_func_00651cd0 { virtual ~B_func_00651cd0(); };
struct S_func_00651cd0 : B_func_00651cd0 { ~S_func_00651cd0(); };
S_func_00651cd0::~S_func_00651cd0()
{
}
