// roc 2012-06 009d78a0  unit: CXTPPrintingDialog  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d78a0
//
// 009d78a0  c7019c5fc100         mov dword ptr [ecx], 0xc15f9c
// 009d78a6  83c108               add ecx, 8
// 009d78a9  ff25d047b200         jmp dword ptr [0xb247d0]
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ??1CXTPPropExchangeEnumerator@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
