// roc 2007-08 00689630  unit: CXTPTabManagerAtom  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00689630
//
// 00689630  c701d4f77c00         mov dword ptr [ecx], 0x7cf7d4
// 00689636  e9354e0700           jmp 0x6fe470
// auto-matched from its assembly shape

struct B_func_00689630 { virtual ~B_func_00689630(); };
struct S_func_00689630 : B_func_00689630 { ~S_func_00689630(); };
S_func_00689630::~S_func_00689630()
{
}
