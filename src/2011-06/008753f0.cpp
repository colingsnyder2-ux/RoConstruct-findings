// from server: 100% by auto
// roc 2011-06 008753f0  unit: CXTPToolTipContextToolTip  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008753f0
//
// 008753f0  56                   push esi
// 008753f1  8bf1                 mov esi, ecx
// 008753f3  8d8edc000000         lea ecx, [esi + 0xdc]
// 008753f9  85c9                 test ecx, ecx
// 008753fb  740b                 je 0x875408
// 008753fd  83790400             cmp dword ptr [ecx + 4], 0
// 00875401  7405                 je 0x875408
// 00875403  e81452f9ff           call 0x80a61c
// 00875408  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0087540e  85c9                 test ecx, ecx
// 00875410  740b                 je 0x87541d
// 00875412  83790400             cmp dword ptr [ecx + 4], 0
// 00875416  7405                 je 0x87541d
// 00875418  e8ff51f9ff           call 0x80a61c
// 0087541d  8d8eec000000         lea ecx, [esi + 0xec]
// 00875423  85c9                 test ecx, ecx
// 00875425  740b                 je 0x875432
// 00875427  83790400             cmp dword ptr [ecx + 4], 0
// 0087542b  7405                 je 0x875432
// 0087542d  e8ea51f9ff           call 0x80a61c
// 00875432  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00875438  85c9                 test ecx, ecx
// 0087543a  740b                 je 0x875447
// 0087543c  83790400             cmp dword ptr [ecx + 4], 0
// 00875440  7405                 je 0x875447
// 00875442  e8d551f9ff           call 0x80a61c
// 00875447  8d8efc000000         lea ecx, [esi + 0xfc]
// 0087544d  85c9                 test ecx, ecx
// 0087544f  740b                 je 0x87545c
// 00875451  83790400             cmp dword ptr [ecx + 4], 0
// 00875455  7405                 je 0x87545c
// 00875457  e8c051f9ff           call 0x80a61c
// 0087545c  8d8e04010000         lea ecx, [esi + 0x104]
// 00875462  85c9                 test ecx, ecx
// 00875464  740b                 je 0x875471
// 00875466  83790400             cmp dword ptr [ecx + 4], 0
// 0087546a  7405                 je 0x875471
// 0087546c  e8ab51f9ff           call 0x80a61c
// 00875471  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00875477  85c9                 test ecx, ecx
// 00875479  740b                 je 0x875486
// 0087547b  83790400             cmp dword ptr [ecx + 4], 0
// 0087547f  7405                 je 0x875486
// 00875481  e89651f9ff           call 0x80a61c
// 00875486  8d8e14010000         lea ecx, [esi + 0x114]
// 0087548c  85c9                 test ecx, ecx
// 0087548e  740b                 je 0x87549b
// 00875490  83790400             cmp dword ptr [ecx + 4], 0
// 00875494  7405                 je 0x87549b
// 00875496  e88151f9ff           call 0x80a61c
// 0087549b  8d8e1c010000         lea ecx, [esi + 0x11c]
// 008754a1  85c9                 test ecx, ecx
// 008754a3  740b                 je 0x8754b0
// 008754a5  83790400             cmp dword ptr [ecx + 4], 0
// 008754a9  7405                 je 0x8754b0
// 008754ab  e86c51f9ff           call 0x80a61c
// 008754b0  8d8e24010000         lea ecx, [esi + 0x124]
// 008754b6  5e                   pop esi
// 008754b7  85c9                 test ecx, ecx
// 008754b9  740b                 je 0x8754c6
// 008754bb  83790400             cmp dword ptr [ecx + 4], 0
// 008754bf  7405                 je 0x8754c6
// 008754c1  e95651f9ff           jmp 0x80a61c
// 008754c6  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPGlobal.cpp (function ?FreeSysFonts@CXTPAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPGlobal.cpp
