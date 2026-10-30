// roc 2009-12 008f3390  unit: CXTColorSelectorCtrlThemeOfficeXP  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3390
//
// 008f3390  56                   push esi
// 008f3391  8bf1                 mov esi, ecx
// 008f3393  e868ffffff           call 0x8f3300
// 008f3398  e833c6f3ff           call 0x82f9d0
// 008f339d  6a20                 push 0x20
// 008f339f  8bc8                 mov ecx, eax
// 008f33a1  e85abdf3ff           call 0x82f100
// 008f33a6  894614               mov dword ptr [esi + 0x14], eax
// 008f33a9  e822c6f3ff           call 0x82f9d0
// 008f33ae  6a20                 push 0x20
// 008f33b0  8bc8                 mov ecx, eax
// 008f33b2  e849bdf3ff           call 0x82f100
// 008f33b7  894618               mov dword ptr [esi + 0x18], eax
// 008f33ba  e811c6f3ff           call 0x82f9d0
// 008f33bf  6a29                 push 0x29
// 008f33c1  8bc8                 mov ecx, eax
// 008f33c3  e838bdf3ff           call 0x82f100
// 008f33c8  89461c               mov dword ptr [esi + 0x1c], eax
// 008f33cb  e800c6f3ff           call 0x82f9d0
// 008f33d0  6a21                 push 0x21
// 008f33d2  8bc8                 mov ecx, eax
// 008f33d4  e827bdf3ff           call 0x82f100
// 008f33d9  894620               mov dword ptr [esi + 0x20], eax
// 008f33dc  e8efc5f3ff           call 0x82f9d0
// 008f33e1  6a1f                 push 0x1f
// 008f33e3  8bc8                 mov ecx, eax
// 008f33e5  e816bdf3ff           call 0x82f100
// 008f33ea  894624               mov dword ptr [esi + 0x24], eax
// 008f33ed  e8dec5f3ff           call 0x82f9d0
// 008f33f2  6a24                 push 0x24
// 008f33f4  8bc8                 mov ecx, eax
// 008f33f6  e805bdf3ff           call 0x82f100
// 008f33fb  894628               mov dword ptr [esi + 0x28], eax
// 008f33fe  5e                   pop esi
// 008f33ff  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
