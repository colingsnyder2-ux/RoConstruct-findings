// roc 2008-06 006fcac0  unit: CXTPPropExchange  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcac0
//
// 006fcac0  8b01                 mov eax, dword ptr [ecx]
// 006fcac2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006fcac5  8d54240c             lea edx, [esp + 0xc]
// 006fcac9  52                   push edx
// 006fcaca  8d54240c             lea edx, [esp + 0xc]
// 006fcace  52                   push edx
// 006fcacf  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fcad3  52                   push edx
// 006fcad4  ffd0                 call eax
// 006fcad6  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?Write@CXTPPropExchange@@UAEXPBDPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
