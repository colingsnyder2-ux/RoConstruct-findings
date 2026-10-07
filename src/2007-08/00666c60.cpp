// roc 2007-08 00666c60  unit: VCPtrList::?$CTypedPtrList  size: 11 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 00666c60
//
// 00666c60  c701e4a57c00         mov dword ptr [ecx], 0x7ca5e4
// 00666c66  e9b5e6ffff           jmp 0x665320
// auto-matched from its assembly shape

struct B_func_00666c60 { virtual ~B_func_00666c60(); };
struct S_func_00666c60 : B_func_00666c60 { ~S_func_00666c60(); };
S_func_00666c60::~S_func_00666c60()
{
}
