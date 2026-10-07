// roc 2011-06 00869080  unit: CXTPTabClientWnd  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00869080
//
// 00869080  c7010cb7ac00         mov dword ptr [ecx], 0xacb70c
// 00869086  e91f3a1600           jmp 0x9ccaaa
// auto-matched from its assembly shape

struct B_func_00869080 { virtual ~B_func_00869080(); };
struct S_func_00869080 : B_func_00869080 { ~S_func_00869080(); };
S_func_00869080::~S_func_00869080()
{
}
