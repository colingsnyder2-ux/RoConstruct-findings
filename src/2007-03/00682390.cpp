// roc 2007-03 00682390  unit: seg_00680000  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00682390
//
// 00682390  56                   push esi
// 00682391  8bf1                 mov esi, ecx
// 00682393  8d8edc000000         lea ecx, [esi + 0xdc]
// 00682399  85c9                 test ecx, ecx
// 0068239b  740b                 je 0x6823a8
// 0068239d  83790400             cmp dword ptr [ecx + 4], 0
// 006823a1  7405                 je 0x6823a8
// 006823a3  e812c3f9ff           call 0x61e6ba
// 006823a8  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006823ae  85c9                 test ecx, ecx
// 006823b0  740b                 je 0x6823bd
// 006823b2  83790400             cmp dword ptr [ecx + 4], 0
// 006823b6  7405                 je 0x6823bd
// 006823b8  e8fdc2f9ff           call 0x61e6ba
// 006823bd  8d8eec000000         lea ecx, [esi + 0xec]
// 006823c3  85c9                 test ecx, ecx
// 006823c5  740b                 je 0x6823d2
// 006823c7  83790400             cmp dword ptr [ecx + 4], 0
// 006823cb  7405                 je 0x6823d2
// 006823cd  e8e8c2f9ff           call 0x61e6ba
// 006823d2  8d8ef4000000         lea ecx, [esi + 0xf4]
// 006823d8  85c9                 test ecx, ecx
// 006823da  740b                 je 0x6823e7
// 006823dc  83790400             cmp dword ptr [ecx + 4], 0
// 006823e0  7405                 je 0x6823e7
// 006823e2  e8d3c2f9ff           call 0x61e6ba
// 006823e7  8d8efc000000         lea ecx, [esi + 0xfc]
// 006823ed  85c9                 test ecx, ecx
// 006823ef  740b                 je 0x6823fc
// 006823f1  83790400             cmp dword ptr [ecx + 4], 0
// 006823f5  7405                 je 0x6823fc
// 006823f7  e8bec2f9ff           call 0x61e6ba
// 006823fc  8d8e04010000         lea ecx, [esi + 0x104]
// 00682402  85c9                 test ecx, ecx
// 00682404  740b                 je 0x682411
// 00682406  83790400             cmp dword ptr [ecx + 4], 0
// 0068240a  7405                 je 0x682411
// 0068240c  e8a9c2f9ff           call 0x61e6ba
// 00682411  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00682417  85c9                 test ecx, ecx
// 00682419  740b                 je 0x682426
// 0068241b  83790400             cmp dword ptr [ecx + 4], 0
// 0068241f  7405                 je 0x682426
// 00682421  e894c2f9ff           call 0x61e6ba
// 00682426  8d8e14010000         lea ecx, [esi + 0x114]
// 0068242c  85c9                 test ecx, ecx
// 0068242e  740b                 je 0x68243b
// 00682430  83790400             cmp dword ptr [ecx + 4], 0
// 00682434  7405                 je 0x68243b
// 00682436  e87fc2f9ff           call 0x61e6ba
// 0068243b  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00682441  85c9                 test ecx, ecx
// 00682443  740b                 je 0x682450
// 00682445  83790400             cmp dword ptr [ecx + 4], 0
// 00682449  7405                 je 0x682450
// 0068244b  e86ac2f9ff           call 0x61e6ba
// 00682450  8d8e24010000         lea ecx, [esi + 0x124]
// 00682456  85c9                 test ecx, ecx
// 00682458  5e                   pop esi
// 00682459  740b                 je 0x682466
// 0068245b  83790400             cmp dword ptr [ecx + 4], 0
// 0068245f  7405                 je 0x682466
// 00682461  e954c2f9ff           jmp 0x61e6ba
// 00682466  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTGlobal.cpp (function ?FreeSysFonts@CXTAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTGlobal.cpp
