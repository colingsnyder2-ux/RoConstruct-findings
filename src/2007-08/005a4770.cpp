// roc 2007-08 005a4770  unit: RBX::IControllable  size: 7 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4770
//
// 005a4770  c70138527b00         mov dword ptr [ecx], 0x7b5238
// 005a4776  c3                   ret 
// auto-matched from its assembly shape

struct S_func_005a4770 { virtual ~S_func_005a4770(); };
S_func_005a4770::~S_func_005a4770()
{
}
