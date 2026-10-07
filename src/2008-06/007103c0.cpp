// roc 2008-06 007103c0  unit: CXTPStatusBar  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007103c0
//
// 007103c0  56                   push esi
// 007103c1  8bf1                 mov esi, ecx
// 007103c3  8d8edc000000         lea ecx, [esi + 0xdc]
// 007103c9  85c9                 test ecx, ecx
// 007103cb  740b                 je 0x7103d8
// 007103cd  83790400             cmp dword ptr [ecx + 4], 0
// 007103d1  7405                 je 0x7103d8
// 007103d3  e87e08f9ff           call 0x6a0c56
// 007103d8  8d8ee4000000         lea ecx, [esi + 0xe4]
// 007103de  85c9                 test ecx, ecx
// 007103e0  740b                 je 0x7103ed
// 007103e2  83790400             cmp dword ptr [ecx + 4], 0
// 007103e6  7405                 je 0x7103ed
// 007103e8  e86908f9ff           call 0x6a0c56
// 007103ed  8d8eec000000         lea ecx, [esi + 0xec]
// 007103f3  85c9                 test ecx, ecx
// 007103f5  740b                 je 0x710402
// 007103f7  83790400             cmp dword ptr [ecx + 4], 0
// 007103fb  7405                 je 0x710402
// 007103fd  e85408f9ff           call 0x6a0c56
// 00710402  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00710408  85c9                 test ecx, ecx
// 0071040a  740b                 je 0x710417
// 0071040c  83790400             cmp dword ptr [ecx + 4], 0
// 00710410  7405                 je 0x710417
// 00710412  e83f08f9ff           call 0x6a0c56
// 00710417  8d8efc000000         lea ecx, [esi + 0xfc]
// 0071041d  85c9                 test ecx, ecx
// 0071041f  740b                 je 0x71042c
// 00710421  83790400             cmp dword ptr [ecx + 4], 0
// 00710425  7405                 je 0x71042c
// 00710427  e82a08f9ff           call 0x6a0c56
// 0071042c  8d8e04010000         lea ecx, [esi + 0x104]
// 00710432  85c9                 test ecx, ecx
// 00710434  740b                 je 0x710441
// 00710436  83790400             cmp dword ptr [ecx + 4], 0
// 0071043a  7405                 je 0x710441
// 0071043c  e81508f9ff           call 0x6a0c56
// 00710441  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00710447  85c9                 test ecx, ecx
// 00710449  740b                 je 0x710456
// 0071044b  83790400             cmp dword ptr [ecx + 4], 0
// 0071044f  7405                 je 0x710456
// 00710451  e80008f9ff           call 0x6a0c56
// 00710456  8d8e14010000         lea ecx, [esi + 0x114]
// 0071045c  85c9                 test ecx, ecx
// 0071045e  740b                 je 0x71046b
// 00710460  83790400             cmp dword ptr [ecx + 4], 0
// 00710464  7405                 je 0x71046b
// 00710466  e8eb07f9ff           call 0x6a0c56
// 0071046b  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00710471  85c9                 test ecx, ecx
// 00710473  740b                 je 0x710480
// 00710475  83790400             cmp dword ptr [ecx + 4], 0
// 00710479  7405                 je 0x710480
// 0071047b  e8d607f9ff           call 0x6a0c56
// 00710480  8d8e24010000         lea ecx, [esi + 0x124]
// 00710486  5e                   pop esi
// 00710487  85c9                 test ecx, ecx
// 00710489  740b                 je 0x710496
// 0071048b  83790400             cmp dword ptr [ecx + 4], 0
// 0071048f  7405                 je 0x710496
// 00710491  e9c007f9ff           jmp 0x6a0c56
// 00710496  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?FreeSysFonts@CXTAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
