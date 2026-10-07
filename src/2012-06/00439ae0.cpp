// roc 2012-06 00439ae0  unit: CSelectionPropGrid  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00439ae0
//
// 00439ae0  c7019c02b500         mov dword ptr [ecx], 0xb5029c
// 00439ae6  e945dbffff           jmp 0x437630
// auto-matched from its assembly shape

struct B_func_00439ae0 { virtual ~B_func_00439ae0(); };
struct S_func_00439ae0 : B_func_00439ae0 { ~S_func_00439ae0(); };
S_func_00439ae0::~S_func_00439ae0()
{
}
