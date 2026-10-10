// roc 2008-06 0071d1d0  unit: PAUHWND__::?$CArray  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071d1d0
//
// 0071d1d0  56                   push esi
// 0071d1d1  8bf1                 mov esi, ecx
// 0071d1d3  837e1000             cmp dword ptr [esi + 0x10], 0
// 0071d1d7  7e15                 jle 0x71d1ee
// 0071d1d9  8b460c               mov eax, dword ptr [esi + 0xc]
// 0071d1dc  8b08                 mov ecx, dword ptr [eax]
// 0071d1de  8b11                 mov edx, dword ptr [ecx]
// 0071d1e0  8b8288010000         mov eax, dword ptr [edx + 0x188]
// 0071d1e6  ffd0                 call eax
// 0071d1e8  837e1000             cmp dword ptr [esi + 0x10], 0
// 0071d1ec  7feb                 jg 0x71d1d9
// 0071d1ee  5e                   pop esi
// 0071d1ef  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPMouseManager.cpp (function ?SendTrackLost@CXTPMouseManager@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMouseManager.cpp
