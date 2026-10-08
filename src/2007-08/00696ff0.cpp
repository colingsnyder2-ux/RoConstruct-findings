// from server: 100% by auto
// roc 2007-08 00696ff0  unit: CXTPToolTipContext::CRichEditToolTip  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00696ff0
//
// 00696ff0  56                   push esi
// 00696ff1  8bf1                 mov esi, ecx
// 00696ff3  8d8edc000000         lea ecx, [esi + 0xdc]
// 00696ff9  85c9                 test ecx, ecx
// 00696ffb  740b                 je 0x697008
// 00696ffd  83790400             cmp dword ptr [ecx + 4], 0
// 00697001  7405                 je 0x697008
// 00697003  e82492f9ff           call 0x63022c
// 00697008  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0069700e  85c9                 test ecx, ecx
// 00697010  740b                 je 0x69701d
// 00697012  83790400             cmp dword ptr [ecx + 4], 0
// 00697016  7405                 je 0x69701d
// 00697018  e80f92f9ff           call 0x63022c
// 0069701d  8d8eec000000         lea ecx, [esi + 0xec]
// 00697023  85c9                 test ecx, ecx
// 00697025  740b                 je 0x697032
// 00697027  83790400             cmp dword ptr [ecx + 4], 0
// 0069702b  7405                 je 0x697032
// 0069702d  e8fa91f9ff           call 0x63022c
// 00697032  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00697038  85c9                 test ecx, ecx
// 0069703a  740b                 je 0x697047
// 0069703c  83790400             cmp dword ptr [ecx + 4], 0
// 00697040  7405                 je 0x697047
// 00697042  e8e591f9ff           call 0x63022c
// 00697047  8d8efc000000         lea ecx, [esi + 0xfc]
// 0069704d  85c9                 test ecx, ecx
// 0069704f  740b                 je 0x69705c
// 00697051  83790400             cmp dword ptr [ecx + 4], 0
// 00697055  7405                 je 0x69705c
// 00697057  e8d091f9ff           call 0x63022c
// 0069705c  8d8e04010000         lea ecx, [esi + 0x104]
// 00697062  85c9                 test ecx, ecx
// 00697064  740b                 je 0x697071
// 00697066  83790400             cmp dword ptr [ecx + 4], 0
// 0069706a  7405                 je 0x697071
// 0069706c  e8bb91f9ff           call 0x63022c
// 00697071  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00697077  85c9                 test ecx, ecx
// 00697079  740b                 je 0x697086
// 0069707b  83790400             cmp dword ptr [ecx + 4], 0
// 0069707f  7405                 je 0x697086
// 00697081  e8a691f9ff           call 0x63022c
// 00697086  8d8e14010000         lea ecx, [esi + 0x114]
// 0069708c  85c9                 test ecx, ecx
// 0069708e  740b                 je 0x69709b
// 00697090  83790400             cmp dword ptr [ecx + 4], 0
// 00697094  7405                 je 0x69709b
// 00697096  e89191f9ff           call 0x63022c
// 0069709b  8d8e1c010000         lea ecx, [esi + 0x11c]
// 006970a1  85c9                 test ecx, ecx
// 006970a3  740b                 je 0x6970b0
// 006970a5  83790400             cmp dword ptr [ecx + 4], 0
// 006970a9  7405                 je 0x6970b0
// 006970ab  e87c91f9ff           call 0x63022c
// 006970b0  8d8e24010000         lea ecx, [esi + 0x124]
// 006970b6  85c9                 test ecx, ecx
// 006970b8  5e                   pop esi
// 006970b9  740b                 je 0x6970c6
// 006970bb  83790400             cmp dword ptr [ecx + 4], 0
// 006970bf  7405                 je 0x6970c6
// 006970c1  e96691f9ff           jmp 0x63022c
// 006970c6  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTGlobal.cpp (function ?FreeSysFonts@CXTAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTGlobal.cpp
