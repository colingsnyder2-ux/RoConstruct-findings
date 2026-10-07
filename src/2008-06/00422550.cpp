// roc 2008-06 00422550  unit: CSettingsExplorer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422550
//
// 00422550  c701dcfb8000         mov dword ptr [ecx], 0x80fbdc
// 00422556  e9c5e92700           jmp 0x6a0f20
// auto-matched from its assembly shape

struct B_func_00422550 { virtual ~B_func_00422550(); };
struct S_func_00422550 : B_func_00422550 { ~S_func_00422550(); };
S_func_00422550::~S_func_00422550()
{
}
