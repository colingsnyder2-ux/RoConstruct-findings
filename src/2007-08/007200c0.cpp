// from server: 100% by auto
// roc 2007-08 007200c0  unit: CXTColorSelectorCtrlThemeOffice2003  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007200c0
//
// 007200c0  56                   push esi
// 007200c1  8bf1                 mov esi, ecx
// 007200c3  e868ffffff           call 0x720030
// 007200c8  e8a38ef4ff           call 0x668f70
// 007200cd  6a20                 push 0x20
// 007200cf  8bc8                 mov ecx, eax
// 007200d1  e8ca88f4ff           call 0x6689a0
// 007200d6  894614               mov dword ptr [esi + 0x14], eax
// 007200d9  e8928ef4ff           call 0x668f70
// 007200de  6a20                 push 0x20
// 007200e0  8bc8                 mov ecx, eax
// 007200e2  e8b988f4ff           call 0x6689a0
// 007200e7  894618               mov dword ptr [esi + 0x18], eax
// 007200ea  e8818ef4ff           call 0x668f70
// 007200ef  6a29                 push 0x29
// 007200f1  8bc8                 mov ecx, eax
// 007200f3  e8a888f4ff           call 0x6689a0
// 007200f8  89461c               mov dword ptr [esi + 0x1c], eax
// 007200fb  e8708ef4ff           call 0x668f70
// 00720100  6a21                 push 0x21
// 00720102  8bc8                 mov ecx, eax
// 00720104  e89788f4ff           call 0x6689a0
// 00720109  894620               mov dword ptr [esi + 0x20], eax
// 0072010c  e85f8ef4ff           call 0x668f70
// 00720111  6a1f                 push 0x1f
// 00720113  8bc8                 mov ecx, eax
// 00720115  e88688f4ff           call 0x6689a0
// 0072011a  894624               mov dword ptr [esi + 0x24], eax
// 0072011d  e84e8ef4ff           call 0x668f70
// 00720122  6a24                 push 0x24
// 00720124  8bc8                 mov ecx, eax
// 00720126  e87588f4ff           call 0x6689a0
// 0072012b  894628               mov dword ptr [esi + 0x28], eax
// 0072012e  5e                   pop esi
// 0072012f  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTColorSelectorCtrlTheme.cpp (function ?RefreshMetrics@CXTColorSelectorCtrlThemeOfficeXP@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorSelectorCtrlTheme.cpp
