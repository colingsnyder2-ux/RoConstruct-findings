// roc 2009-12 008472a0  unit: CXTPControls  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008472a0
//
// 008472a0  8b442404             mov eax, dword ptr [esp + 4]
// 008472a4  6aff                 push -1
// 008472a6  50                   push eax
// 008472a7  e8b4ffffff           call 0x847260
// 008472ac  c20400               ret 4
// copied from an identical function in another client (function ?func_0067C5A0@CXTPControls@ns_ROCX00002a@ns_ROCX000034@@QAEXH@Z)

namespace ns_ROCX00002a {
extern void G1_func_00766ad0();
void fn_ROCX00002a()
{
    G1_func_00766ad0();
}
}
