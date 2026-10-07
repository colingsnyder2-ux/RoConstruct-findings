// roc 2012-06 009ed950  unit: CXTPToolTipContextToolTip  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ed950
//
// 009ed950  56                   push esi
// 009ed951  8bf1                 mov esi, ecx
// 009ed953  8d8edc000000         lea ecx, [esi + 0xdc]
// 009ed959  85c9                 test ecx, ecx
// 009ed95b  740b                 je 0x9ed968
// 009ed95d  83790400             cmp dword ptr [ecx + 4], 0
// 009ed961  7405                 je 0x9ed968
// 009ed963  e8644df9ff           call 0x9826cc
// 009ed968  8d8ee4000000         lea ecx, [esi + 0xe4]
// 009ed96e  85c9                 test ecx, ecx
// 009ed970  740b                 je 0x9ed97d
// 009ed972  83790400             cmp dword ptr [ecx + 4], 0
// 009ed976  7405                 je 0x9ed97d
// 009ed978  e84f4df9ff           call 0x9826cc
// 009ed97d  8d8eec000000         lea ecx, [esi + 0xec]
// 009ed983  85c9                 test ecx, ecx
// 009ed985  740b                 je 0x9ed992
// 009ed987  83790400             cmp dword ptr [ecx + 4], 0
// 009ed98b  7405                 je 0x9ed992
// 009ed98d  e83a4df9ff           call 0x9826cc
// 009ed992  8d8ef4000000         lea ecx, [esi + 0xf4]
// 009ed998  85c9                 test ecx, ecx
// 009ed99a  740b                 je 0x9ed9a7
// 009ed99c  83790400             cmp dword ptr [ecx + 4], 0
// 009ed9a0  7405                 je 0x9ed9a7
// 009ed9a2  e8254df9ff           call 0x9826cc
// 009ed9a7  8d8efc000000         lea ecx, [esi + 0xfc]
// 009ed9ad  85c9                 test ecx, ecx
// 009ed9af  740b                 je 0x9ed9bc
// 009ed9b1  83790400             cmp dword ptr [ecx + 4], 0
// 009ed9b5  7405                 je 0x9ed9bc
// 009ed9b7  e8104df9ff           call 0x9826cc
// 009ed9bc  8d8e04010000         lea ecx, [esi + 0x104]
// 009ed9c2  85c9                 test ecx, ecx
// 009ed9c4  740b                 je 0x9ed9d1
// 009ed9c6  83790400             cmp dword ptr [ecx + 4], 0
// 009ed9ca  7405                 je 0x9ed9d1
// 009ed9cc  e8fb4cf9ff           call 0x9826cc
// 009ed9d1  8d8e0c010000         lea ecx, [esi + 0x10c]
// 009ed9d7  85c9                 test ecx, ecx
// 009ed9d9  740b                 je 0x9ed9e6
// 009ed9db  83790400             cmp dword ptr [ecx + 4], 0
// 009ed9df  7405                 je 0x9ed9e6
// 009ed9e1  e8e64cf9ff           call 0x9826cc
// 009ed9e6  8d8e14010000         lea ecx, [esi + 0x114]
// 009ed9ec  85c9                 test ecx, ecx
// 009ed9ee  740b                 je 0x9ed9fb
// 009ed9f0  83790400             cmp dword ptr [ecx + 4], 0
// 009ed9f4  7405                 je 0x9ed9fb
// 009ed9f6  e8d14cf9ff           call 0x9826cc
// 009ed9fb  8d8e1c010000         lea ecx, [esi + 0x11c]
// 009eda01  85c9                 test ecx, ecx
// 009eda03  740b                 je 0x9eda10
// 009eda05  83790400             cmp dword ptr [ecx + 4], 0
// 009eda09  7405                 je 0x9eda10
// 009eda0b  e8bc4cf9ff           call 0x9826cc
// 009eda10  8d8e24010000         lea ecx, [esi + 0x124]
// 009eda16  5e                   pop esi
// 009eda17  85c9                 test ecx, ecx
// 009eda19  740b                 je 0x9eda26
// 009eda1b  83790400             cmp dword ptr [ecx + 4], 0
// 009eda1f  7405                 je 0x9eda26
// 009eda21  e9a64cf9ff           jmp 0x9826cc
// 009eda26  c3                   ret 
// library xtp-15.2.1/Source\Controls\Util\XTPGlobal.cpp (function ?FreeSysFonts@CXTPAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Util/XTPGlobal.cpp
