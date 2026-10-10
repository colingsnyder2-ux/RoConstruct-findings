// roc 2012-06 009d7ae0  unit: CXTPPropExchange  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7ae0
//
// 009d7ae0  8b01                 mov eax, dword ptr [ecx]
// 009d7ae2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 009d7ae5  8d54240c             lea edx, [esp + 0xc]
// 009d7ae9  52                   push edx
// 009d7aea  8d54240c             lea edx, [esp + 0xc]
// 009d7aee  52                   push edx
// 009d7aef  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d7af3  52                   push edx
// 009d7af4  ffd0                 call eax
// 009d7af6  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?Write@CXTPPropExchange@@UAEXPBDPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
