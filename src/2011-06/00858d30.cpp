// roc 2011-06 00858d30  unit: CXTPControls  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00858d30
//
// 00858d30  8b442404             mov eax, dword ptr [esp + 4]
// 00858d34  6aff                 push -1
// 00858d36  50                   push eax
// 00858d37  e8b4ffffff           call 0x858cf0
// 00858d3c  c20400               ret 4
// copied from an identical function in another client (function ?func_0067C5A0@CXTPControls@ns_ROCX00002f@ns_ROCX0000a2@@QAEXH@Z)

namespace ns_ROCX00002f {
struct B_func_006cf080 { virtual ~B_func_006cf080(); };
struct S_func_006cf080 : B_func_006cf080 { ~S_func_006cf080(); };
S_func_006cf080::~S_func_006cf080()
{
}
}
