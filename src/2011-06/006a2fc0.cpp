// roc 2011-06 006a2fc0  unit: RBX::Geometry  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a2fc0
//
// 006a2fc0  c701642baa00         mov dword ptr [ecx], 0xaa2b64
// 006a2fc6  e975e90f00           jmp 0x7a1940
// auto-matched from its assembly shape

struct B_func_006a2fc0 { virtual ~B_func_006a2fc0(); };
struct S_func_006a2fc0 : B_func_006a2fc0 { ~S_func_006a2fc0(); };
S_func_006a2fc0::~S_func_006a2fc0()
{
}
