// roc 2009-06 004134d0  unit: CRbxChildFrame  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004134d0
//
// 004134d0  c70128f68a00         mov dword ptr [ecx], 0x8af628
// 004134d6  e9ef5c3000           jmp 0x7191ca
// auto-matched from its assembly shape

struct B_func_004134d0 { virtual ~B_func_004134d0(); };
struct S_func_004134d0 : B_func_004134d0 { ~S_func_004134d0(); };
S_func_004134d0::~S_func_004134d0()
{
}
