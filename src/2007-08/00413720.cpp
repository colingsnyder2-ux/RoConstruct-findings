// roc 2007-08 00413720  unit: std::runtime_error  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00413720
//
// 00413720  c701bc707800         mov dword ptr [ecx], 0x7870bc
// 00413726  c3                   ret 
// auto-matched from its assembly shape

struct S_func_00413720 { virtual ~S_func_00413720(); };
S_func_00413720::~S_func_00413720()
{
}
