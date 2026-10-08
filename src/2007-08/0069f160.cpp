// roc 2007-08 0069f160  unit: RBX::Kernel  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f160
//
// 0069f160  c7018c2c7d00         mov dword ptr [ecx], 0x7d2c8c
// 0069f166  e985f6ffff           jmp 0x69e7f0
// auto-matched from its assembly shape

struct B_func_0069f160 { virtual ~B_func_0069f160(); };
struct S_func_0069f160 : B_func_0069f160 { ~S_func_0069f160(); };
S_func_0069f160::~S_func_0069f160()
{
}
