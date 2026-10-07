// roc 2010-06 00843780  unit: CXTPShortcutManager  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00843780
//
// 00843780  c7017874a600         mov dword ptr [ecx], 0xa67478
// 00843786  e975fdffff           jmp 0x843500
// auto-matched from its assembly shape

struct B_func_00843780 { virtual ~B_func_00843780(); };
struct S_func_00843780 : B_func_00843780 { ~S_func_00843780(); };
S_func_00843780::~S_func_00843780()
{
}
