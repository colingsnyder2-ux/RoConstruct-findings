// roc 2008-06 006dda00  unit: VCPtrList::?$CTypedPtrList  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dda00
//
// 006dda00  c7015c5d8500         mov dword ptr [ecx], 0x855d5c
// 006dda06  e9e5e6ffff           jmp 0x6dc0f0
// auto-matched from its assembly shape

struct B_func_006dda00 { virtual ~B_func_006dda00(); };
struct S_func_006dda00 : B_func_006dda00 { ~S_func_006dda00(); };
S_func_006dda00::~S_func_006dda00()
{
}
