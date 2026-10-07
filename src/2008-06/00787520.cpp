// roc 2008-06 00787520  unit: CXTColorPageStandard  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00787520
//
// 00787520  c701f4998600         mov dword ptr [ecx], 0x8699f4
// 00787526  e9050bcbff           jmp 0x438030
// auto-matched from its assembly shape

struct B_func_00787520 { virtual ~B_func_00787520(); };
struct S_func_00787520 : B_func_00787520 { ~S_func_00787520(); };
S_func_00787520::~S_func_00787520()
{
}
