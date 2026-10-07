// roc 2010-06 008040d0  unit: CXTPPropExchange  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008040d0
//
// 008040d0  c7011406a600         mov dword ptr [ecx], 0xa60614
// 008040d6  e94744faff           jmp 0x7a8522
// auto-matched from its assembly shape

struct B_func_008040d0 { virtual ~B_func_008040d0(); };
struct S_func_008040d0 : B_func_008040d0 { ~S_func_008040d0(); };
S_func_008040d0::~S_func_008040d0()
{
}
