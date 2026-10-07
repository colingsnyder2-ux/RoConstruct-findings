// roc 2008-06 007913c0  unit: CXTCaptionTheme  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007913c0
//
// 007913c0  56                   push esi
// 007913c1  8bf1                 mov esi, ecx
// 007913c3  e848c0ceff           call 0x47d410
// 007913c8  e873e9f4ff           call 0x6dfd40
// 007913cd  6a10                 push 0x10
// 007913cf  8bc8                 mov ecx, eax
// 007913d1  e84ae1f4ff           call 0x6df520
// 007913d6  894618               mov dword ptr [esi + 0x18], eax
// 007913d9  e862e9f4ff           call 0x6dfd40
// 007913de  6a14                 push 0x14
// 007913e0  8bc8                 mov ecx, eax
// 007913e2  e839e1f4ff           call 0x6df520
// 007913e7  894624               mov dword ptr [esi + 0x24], eax
// 007913ea  5e                   pop esi
// 007913eb  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?RefreshMetrics@CXTCaptionTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
