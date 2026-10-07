// roc 2007-08 005ccc70  unit: RBX::Contact  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005ccc70
//
// 005ccc70  c701a85e7b00         mov dword ptr [ecx], 0x7b5ea8
// 005ccc76  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005ccc70 { virtual ~S_func_005ccc70(); };
S_func_005ccc70::~S_func_005ccc70()
{
}
