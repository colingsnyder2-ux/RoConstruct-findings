// roc 2009-12 008f32d0  unit: CXTColorSelectorCtrlThemeFactory  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f32d0
//
// 008f32d0  56                   push esi
// 008f32d1  8bf1                 mov esi, ecx
// 008f32d3  e8486cf6ff           call 0x859f20
// 008f32d8  83c8ff               or eax, 0xffffffff
// 008f32db  894614               mov dword ptr [esi + 0x14], eax
// 008f32de  894618               mov dword ptr [esi + 0x18], eax
// 008f32e1  89461c               mov dword ptr [esi + 0x1c], eax
// 008f32e4  894620               mov dword ptr [esi + 0x20], eax
// 008f32e7  894624               mov dword ptr [esi + 0x24], eax
// 008f32ea  894628               mov dword ptr [esi + 0x28], eax
// 008f32ed  c7067cf9a000         mov dword ptr [esi], 0xa0f97c
// 008f32f3  8bc6                 mov eax, esi
// 008f32f5  5e                   pop esi
// 008f32f6  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ??0CXTColorSelectorCtrlTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorSelectorCtrlTheme.cpp
