// roc 2007-08 0041f680  unit: CSettingsExplorer  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f680
//
// 0041f680  c701c8647800         mov dword ptr [ecx], 0x7864c8
// 0041f686  e9a10b2100           jmp 0x63022c
// auto-matched from its assembly shape

struct B_func_0041f680 { virtual ~B_func_0041f680(); };
struct S_func_0041f680 : B_func_0041f680 { ~S_func_0041f680(); };
S_func_0041f680::~S_func_0041f680()
{
}
