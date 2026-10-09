// roc 2008-06 006b9b50  unit: CXTPPropertyGridItemConstraint  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9b50
//
// 006b9b50  56                   push esi
// 006b9b51  8b742408             mov esi, dword ptr [esp + 8]
// 006b9b55  56                   push esi
// 006b9b56  83c130               add ecx, 0x30
// 006b9b59  e8d2feffff           call 0x6b9a30
// 006b9b5e  8bc6                 mov eax, esi
// 006b9b60  5e                   pop esi
// 006b9b61  c20400               ret 4
// copied from an identical function in another client (function ?set@CXTPImageManagerIcon@ns_ROCX000005@ns_ROCX000016@@QAEHH@Z)

namespace ns_ROCX000005 {
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctlprop.cpp
}
