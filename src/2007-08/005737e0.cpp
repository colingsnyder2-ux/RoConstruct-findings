// roc 2007-08 005737e0  unit: RBX::NullController  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005737e0
//
// 005737e0  c701aca87a00         mov dword ptr [ecx], 0x7aa8ac
// 005737e6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005737e0 { virtual ~S_func_005737e0(); };
S_func_005737e0::~S_func_005737e0()
{
}
