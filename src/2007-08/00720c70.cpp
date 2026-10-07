// roc 2007-08 00720c70  unit: CXTCaptionButtonTheme  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00720c70
//
// 00720c70  c7019c237e00         mov dword ptr [ecx], 0x7e239c
// 00720c76  e965fcffff           jmp 0x7208e0
// auto-matched from its assembly shape

struct B_func_00720c70 { virtual ~B_func_00720c70(); };
struct S_func_00720c70 : B_func_00720c70 { ~S_func_00720c70(); };
S_func_00720c70::~S_func_00720c70()
{
}
