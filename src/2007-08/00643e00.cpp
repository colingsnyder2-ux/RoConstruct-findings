// roc 2007-08 00643e00  unit: CXTPCommandBar  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00643e00
//
// 00643e00  c70104677c00         mov dword ptr [ecx], 0x7c6704
// 00643e06  e975b8ddff           jmp 0x41f680
// auto-matched from its assembly shape

struct B_func_00643e00 { virtual ~B_func_00643e00(); };
struct S_func_00643e00 : B_func_00643e00 { ~S_func_00643e00(); };
S_func_00643e00::~S_func_00643e00()
{
}
