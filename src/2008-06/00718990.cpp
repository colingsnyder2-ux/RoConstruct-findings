// roc 2008-06 00718990  unit: RBX::Kernel  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718990
//
// 00718990  c70124eb8500         mov dword ptr [ecx], 0x85eb24
// 00718996  e975f6ffff           jmp 0x718010
// auto-matched from its assembly shape

struct B_func_00718990 { virtual ~B_func_00718990(); };
struct S_func_00718990 : B_func_00718990 { ~S_func_00718990(); };
S_func_00718990::~S_func_00718990()
{
}
