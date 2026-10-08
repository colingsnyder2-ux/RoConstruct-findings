// from server: 100% by auto
// roc 2011-06 0085f5c0  unit: CXTPPropExchange  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085f5c0
//
// 0085f5c0  8b442404             mov eax, dword ptr [esp + 4]
// 0085f5c4  c7413001000000       mov dword ptr [ecx + 0x30], 1
// 0085f5cb  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0085f5ce  89512c               mov dword ptr [ecx + 0x2c], edx
// 0085f5d1  8b5020               mov edx, dword ptr [eax + 0x20]
// 0085f5d4  895120               mov dword ptr [ecx + 0x20], edx
// 0085f5d7  8b5034               mov edx, dword ptr [eax + 0x34]
// 0085f5da  895134               mov dword ptr [ecx + 0x34], edx
// 0085f5dd  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0085f5e0  89513c               mov dword ptr [ecx + 0x3c], edx
// 0085f5e3  8b4040               mov eax, dword ptr [eax + 0x40]
// 0085f5e6  894140               mov dword ptr [ecx + 0x40], eax
// 0085f5e9  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ?InitSection@CXTPPropExchange@@IAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
