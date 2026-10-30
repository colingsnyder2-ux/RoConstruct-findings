// roc 2010-06 0087fa00  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087fa00
//
// 0087fa00  56                   push esi
// 0087fa01  8bf1                 mov esi, ecx
// 0087fa03  e8b8e4ffff           call 0x87dec0
// 0087fa08  e81341f6ff           call 0x7e3b20
// 0087fa0d  6a12                 push 0x12
// 0087fa0f  8bc8                 mov ecx, eax
// 0087fa11  e89a38f6ff           call 0x7e32b0
// 0087fa16  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0087fa19  894168               mov dword ptr [ecx + 0x68], eax
// 0087fa1c  e8ff40f6ff           call 0x7e3b20
// 0087fa21  6a1e                 push 0x1e
// 0087fa23  8bc8                 mov ecx, eax
// 0087fa25  e88638f6ff           call 0x7e32b0
// 0087fa2a  8b5674               mov edx, dword ptr [esi + 0x74]
// 0087fa2d  894250               mov dword ptr [edx + 0x50], eax
// 0087fa30  5e                   pop esi
// 0087fa31  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOfficeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
