// from server: 100% by auto
// roc 2012-06 009d79d0  unit: CXTPPropExchange  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d79d0
//
// 009d79d0  8b442404             mov eax, dword ptr [esp + 4]
// 009d79d4  c7413001000000       mov dword ptr [ecx + 0x30], 1
// 009d79db  8b502c               mov edx, dword ptr [eax + 0x2c]
// 009d79de  89512c               mov dword ptr [ecx + 0x2c], edx
// 009d79e1  8b5020               mov edx, dword ptr [eax + 0x20]
// 009d79e4  895120               mov dword ptr [ecx + 0x20], edx
// 009d79e7  8b5034               mov edx, dword ptr [eax + 0x34]
// 009d79ea  895134               mov dword ptr [ecx + 0x34], edx
// 009d79ed  8b503c               mov edx, dword ptr [eax + 0x3c]
// 009d79f0  89513c               mov dword ptr [ecx + 0x3c], edx
// 009d79f3  8b4040               mov eax, dword ptr [eax + 0x40]
// 009d79f6  894140               mov dword ptr [ecx + 0x40], eax
// 009d79f9  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?InitSection@CXTPPropExchange@@IAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
