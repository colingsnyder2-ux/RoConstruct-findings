// from server: 100% by auto
// roc 2012-06 009d79b0  unit: CXTPPropExchange  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d79b0
//
// 009d79b0  b801000000           mov eax, 1
// 009d79b5  894138               mov dword ptr [ecx + 0x38], eax
// 009d79b8  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?OnBeforeExchange@CXTPPropExchange@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
