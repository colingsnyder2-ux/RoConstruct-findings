// from server: 100% by auto
// roc 2008-06 00778560  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00778560
//
// 00778560  56                   push esi
// 00778561  8bf1                 mov esi, ecx
// 00778563  e8b8e4ffff           call 0x776a20
// 00778568  e8d377f6ff           call 0x6dfd40
// 0077856d  6a12                 push 0x12
// 0077856f  8bc8                 mov ecx, eax
// 00778571  e8aa6ff6ff           call 0x6df520
// 00778576  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00778579  894168               mov dword ptr [ecx + 0x68], eax
// 0077857c  e8bf77f6ff           call 0x6dfd40
// 00778581  6a1e                 push 0x1e
// 00778583  8bc8                 mov ecx, eax
// 00778585  e8966ff6ff           call 0x6df520
// 0077858a  8b5674               mov edx, dword ptr [esi + 0x74]
// 0077858d  894250               mov dword ptr [edx + 0x50], eax
// 00778590  5e                   pop esi
// 00778591  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOfficeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
