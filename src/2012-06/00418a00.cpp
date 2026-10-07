// roc 2012-06 00418a00  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418a00
//
// 00418a00  c701146cb400         mov dword ptr [ecx], 0xb46c14
// 00418a06  e9659e5600           jmp 0x982870
// auto-matched from its assembly shape

struct B_func_00418a00 { virtual ~B_func_00418a00(); };
struct S_func_00418a00 : B_func_00418a00 { ~S_func_00418a00(); };
S_func_00418a00::~S_func_00418a00()
{
}
