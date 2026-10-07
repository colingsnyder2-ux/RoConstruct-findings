// roc 2008-06 00778510  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridDelphiTheme  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00778510
//
// 00778510  56                   push esi
// 00778511  8bf1                 mov esi, ecx
// 00778513  e808e5ffff           call 0x776a20
// 00778518  e82378f6ff           call 0x6dfd40
// 0077851d  6a0f                 push 0xf
// 0077851f  8bc8                 mov ecx, eax
// 00778521  e8fa6ff6ff           call 0x6df520
// 00778526  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00778529  894174               mov dword ptr [ecx + 0x74], eax
// 0077852c  8b5674               mov edx, dword ptr [esi + 0x74]
// 0077852f  c7425c00008000       mov dword ptr [edx + 0x5c], 0x800000
// 00778536  5e                   pop esi
// 00778537  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridDelphiTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
