// roc 2008-06 006fc990  unit: CXTPPropExchange  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc990
//
// 006fc990  b801000000           mov eax, 1
// 006fc995  894138               mov dword ptr [ecx + 0x38], eax
// 006fc998  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?OnBeforeExchange@CXTPPropExchange@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
