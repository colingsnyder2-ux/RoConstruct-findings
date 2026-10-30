// roc 2012-06 009d7b00  unit: CXTPPropExchange  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d7b00
//
// 009d7b00  8b01                 mov eax, dword ptr [ecx]
// 009d7b02  8b405c               mov eax, dword ptr [eax + 0x5c]
// 009d7b05  8d54240c             lea edx, [esp + 0xc]
// 009d7b09  52                   push edx
// 009d7b0a  8d54240c             lea edx, [esp + 0xc]
// 009d7b0e  52                   push edx
// 009d7b0f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 009d7b13  52                   push edx
// 009d7b14  ffd0                 call eax
// 009d7b16  f7d8                 neg eax
// 009d7b18  1bc0                 sbb eax, eax
// 009d7b1a  2344240c             and eax, dword ptr [esp + 0xc]
// 009d7b1e  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Common\XTPPropExchange.cpp (function ?Read@CXTPPropExchange@@UAEIPBDPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp
