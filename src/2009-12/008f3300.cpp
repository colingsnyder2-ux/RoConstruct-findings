// roc 2009-12 008f3300  unit: CXTColorSelectorCtrlTheme  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3300
//
// 008f3300  56                   push esi
// 008f3301  8bf1                 mov esi, ecx
// 008f3303  e88817f6ff           call 0x854a90
// 008f3308  e8c3c6f3ff           call 0x82f9d0
// 008f330d  6a0f                 push 0xf
// 008f330f  8bc8                 mov ecx, eax
// 008f3311  e8eabdf3ff           call 0x82f100
// 008f3316  89461c               mov dword ptr [esi + 0x1c], eax
// 008f3319  e8b2c6f3ff           call 0x82f9d0
// 008f331e  6a14                 push 0x14
// 008f3320  8bc8                 mov ecx, eax
// 008f3322  e8d9bdf3ff           call 0x82f100
// 008f3327  894614               mov dword ptr [esi + 0x14], eax
// 008f332a  e8a1c6f3ff           call 0x82f9d0
// 008f332f  6a10                 push 0x10
// 008f3331  8bc8                 mov ecx, eax
// 008f3333  e8c8bdf3ff           call 0x82f100
// 008f3338  894618               mov dword ptr [esi + 0x18], eax
// 008f333b  e890c6f3ff           call 0x82f9d0
// 008f3340  6a12                 push 0x12
// 008f3342  8bc8                 mov ecx, eax
// 008f3344  e8b7bdf3ff           call 0x82f100
// 008f3349  89462c               mov dword ptr [esi + 0x2c], eax
// 008f334c  5e                   pop esi
// 008f334d  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
