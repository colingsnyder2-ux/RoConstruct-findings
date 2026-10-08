// roc 2007-08 00684e50  unit: CXTPPropExchange  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00684e50
//
// 00684e50  c7012cf47c00         mov dword ptr [ecx], 0x7cf42c
// 00684e56  e93fb8faff           jmp 0x63069a
// auto-matched from its assembly shape

struct B_func_00684e50 { virtual ~B_func_00684e50(); };
struct S_func_00684e50 : B_func_00684e50 { ~S_func_00684e50(); };
S_func_00684e50::~S_func_00684e50()
{
}
