// roc 2007-08 00712ba0  unit: CXTShadowWnd  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00712ba0
//
// 00712ba0  c70114e97d00         mov dword ptr [ecx], 0x7de914
// 00712ba6  e9f550fcff           jmp 0x6d7ca0
// auto-matched from its assembly shape

struct B_func_00712ba0 { virtual ~B_func_00712ba0(); };
struct S_func_00712ba0 : B_func_00712ba0 { ~S_func_00712ba0(); };
S_func_00712ba0::~S_func_00712ba0()
{
}
