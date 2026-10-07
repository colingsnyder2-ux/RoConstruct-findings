// roc 2011-06 00863f10  unit: CXTPTabManagerAtom  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00863f10
//
// 00863f10  c70154acac00         mov dword ptr [ecx], 0xacac54
// 00863f16  e975040700           jmp 0x8d4390
// auto-matched from its assembly shape

struct B_func_00863f10 { virtual ~B_func_00863f10(); };
struct S_func_00863f10 : B_func_00863f10 { ~S_func_00863f10(); };
S_func_00863f10::~S_func_00863f10()
{
}
