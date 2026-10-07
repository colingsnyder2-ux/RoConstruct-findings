// roc 2010-06 007e7310  unit: VCPtrList::?$CTypedPtrList  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e7310
//
// 007e7310  c70178a8a500         mov dword ptr [ecx], 0xa5a878
// 007e7316  e975e6ffff           jmp 0x7e5990
// auto-matched from its assembly shape

struct B_func_007e7310 { virtual ~B_func_007e7310(); };
struct S_func_007e7310 : B_func_007e7310 { ~S_func_007e7310(); };
S_func_007e7310::~S_func_007e7310()
{
}
