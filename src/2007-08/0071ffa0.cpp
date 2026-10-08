// from server: 100% by auto
// roc 2007-08 0071ffa0  unit: CXTColorSelectorCtrlTheme  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ffa0
//
// 0071ffa0  56                   push esi
// 0071ffa1  8bf1                 mov esi, ecx
// 0071ffa3  e878ccceff           call 0x40cc20
// 0071ffa8  e8c38ff4ff           call 0x668f70
// 0071ffad  6a0f                 push 0xf
// 0071ffaf  8bc8                 mov ecx, eax
// 0071ffb1  e8ba87f4ff           call 0x668770
// 0071ffb6  89461c               mov dword ptr [esi + 0x1c], eax
// 0071ffb9  e8b28ff4ff           call 0x668f70
// 0071ffbe  6a14                 push 0x14
// 0071ffc0  8bc8                 mov ecx, eax
// 0071ffc2  e8a987f4ff           call 0x668770
// 0071ffc7  894614               mov dword ptr [esi + 0x14], eax
// 0071ffca  e8a18ff4ff           call 0x668f70
// 0071ffcf  6a10                 push 0x10
// 0071ffd1  8bc8                 mov ecx, eax
// 0071ffd3  e89887f4ff           call 0x668770
// 0071ffd8  894618               mov dword ptr [esi + 0x18], eax
// 0071ffdb  e8908ff4ff           call 0x668f70
// 0071ffe0  6a12                 push 0x12
// 0071ffe2  8bc8                 mov ecx, eax
// 0071ffe4  e88787f4ff           call 0x668770
// 0071ffe9  89462c               mov dword ptr [esi + 0x2c], eax
// 0071ffec  5e                   pop esi
// 0071ffed  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorSelectorCtrlTheme.cpp
