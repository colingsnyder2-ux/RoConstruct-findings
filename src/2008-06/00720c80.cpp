// roc 2008-06 00720c80  unit: CXTPMenuBar  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720c80
//
// 00720c80  c70100068600         mov dword ptr [ecx], 0x860600
// 00720c86  e9a524f8ff           jmp 0x6a3130
// auto-matched from its assembly shape

struct B_func_00720c80 { virtual ~B_func_00720c80(); };
struct S_func_00720c80 : B_func_00720c80 { ~S_func_00720c80(); };
S_func_00720c80::~S_func_00720c80()
{
}
