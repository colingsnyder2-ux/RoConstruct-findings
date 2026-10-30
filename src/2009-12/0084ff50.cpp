// roc 2009-12 0084ff50  unit: CXTPPropertyGrid  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ff50
//
// 0084ff50  c70144c39f00         mov dword ptr [ecx], 0x9fc344
// 0084ff56  83c108               add ecx, 8
// 0084ff59  ff25c0de9800         jmp dword ptr [0x98dec0]
// copied from an identical function in another client (function ??1CXTPPropExchangeEnumerator@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp