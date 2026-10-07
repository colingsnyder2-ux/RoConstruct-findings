// roc 2007-08 0041f690  unit: CSettingsExplorer  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f690
//
// 0041f690  c70118837800         mov dword ptr [ecx], 0x788318
// 0041f696  e9d10d2100           jmp 0x63046c
// auto-matched from its assembly shape

struct B_func_0041f690 { virtual ~B_func_0041f690(); };
struct S_func_0041f690 : B_func_0041f690 { ~S_func_0041f690(); };
S_func_0041f690::~S_func_0041f690()
{
}
