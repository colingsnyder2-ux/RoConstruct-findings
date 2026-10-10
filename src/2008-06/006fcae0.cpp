// roc 2008-06 006fcae0  unit: CXTPPropExchange  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fcae0
//
// 006fcae0  8b01                 mov eax, dword ptr [ecx]
// 006fcae2  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006fcae5  8d54240c             lea edx, [esp + 0xc]
// 006fcae9  52                   push edx
// 006fcaea  8d54240c             lea edx, [esp + 0xc]
// 006fcaee  52                   push edx
// 006fcaef  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fcaf3  52                   push edx
// 006fcaf4  ffd0                 call eax
// 006fcaf6  f7d8                 neg eax
// 006fcaf8  1bc0                 sbb eax, eax
// 006fcafa  2344240c             and eax, dword ptr [esp + 0xc]
// 006fcafe  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?Read@CXTPPropExchange@@UAEIPBDPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Common/XTPPropExchange.cpp
