// roc 2011-06 008e3780  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridWhidbeyTheme  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e3780
//
// 008e3780  56                   push esi
// 008e3781  8bf1                 mov esi, ecx
// 008e3783  e8c8e3ffff           call 0x8e1b50
// 008e3788  e8531cf6ff           call 0x8453e0
// 008e378d  6a0f                 push 0xf
// 008e378f  8bc8                 mov ecx, eax
// 008e3791  e81a14f6ff           call 0x844bb0
// 008e3796  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008e3799  894150               mov dword ptr [ecx + 0x50], eax
// 008e379c  e83f1cf6ff           call 0x8453e0
// 008e37a1  6a12                 push 0x12
// 008e37a3  8bc8                 mov ecx, eax
// 008e37a5  e80614f6ff           call 0x844bb0
// 008e37aa  8b5674               mov edx, dword ptr [esi + 0x74]
// 008e37ad  894268               mov dword ptr [edx + 0x68], eax
// 008e37b0  e82b1cf6ff           call 0x8453e0
// 008e37b5  6a39                 push 0x39
// 008e37b7  8bc8                 mov ecx, eax
// 008e37b9  e8f213f6ff           call 0x844bb0
// 008e37be  894640               mov dword ptr [esi + 0x40], eax
// 008e37c1  5e                   pop esi
// 008e37c2  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridWhidbeyTheme@XTPPropertyGridPaintThemes@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
