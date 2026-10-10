// from server: 100% by tester
// roc 2008-06 006fc880  unit: CXTPPropertyGrid  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc880
//
// 006fc880  c70144ae8500         mov dword ptr [ecx], 0x85ae44
// 006fc886  83c108               add ecx, 8
// 006fc889  ff25143f8000         jmp dword ptr [0x803f14]
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ??1CXTPPropExchangeEnumerator@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
