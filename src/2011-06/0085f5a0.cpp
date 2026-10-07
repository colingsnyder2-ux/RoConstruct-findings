// roc 2011-06 0085f5a0  unit: CXTPPropExchange  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f5a0
//
// 0085f5a0  b801000000           mov eax, 1
// 0085f5a5  894138               mov dword ptr [ecx + 0x38], eax
// 0085f5a8  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?OnBeforeExchange@CXTPPropExchange@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
