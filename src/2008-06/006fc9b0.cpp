// from server: 100% by auto
// roc 2008-06 006fc9b0  unit: CXTPPropExchange  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc9b0
//
// 006fc9b0  8b442404             mov eax, dword ptr [esp + 4]
// 006fc9b4  c7413001000000       mov dword ptr [ecx + 0x30], 1
// 006fc9bb  8b502c               mov edx, dword ptr [eax + 0x2c]
// 006fc9be  89512c               mov dword ptr [ecx + 0x2c], edx
// 006fc9c1  8b5020               mov edx, dword ptr [eax + 0x20]
// 006fc9c4  895120               mov dword ptr [ecx + 0x20], edx
// 006fc9c7  8b5034               mov edx, dword ptr [eax + 0x34]
// 006fc9ca  895134               mov dword ptr [ecx + 0x34], edx
// 006fc9cd  8b503c               mov edx, dword ptr [eax + 0x3c]
// 006fc9d0  89513c               mov dword ptr [ecx + 0x3c], edx
// 006fc9d3  8b4040               mov eax, dword ptr [eax + 0x40]
// 006fc9d6  894140               mov dword ptr [ecx + 0x40], eax
// 006fc9d9  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPPropExchange.cpp (function ?InitSection@CXTPPropExchange@@IAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPPropExchange.cpp
