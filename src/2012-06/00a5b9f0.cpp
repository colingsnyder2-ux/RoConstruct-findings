// roc 2012-06 00a5b9f0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5b9f0
//
// 00a5b9f0  56                   push esi
// 00a5b9f1  8bf1                 mov esi, ecx
// 00a5b9f3  e8b8e4ffff           call 0xa59eb0
// 00a5b9f8  e8631ef6ff           call 0x9bd860
// 00a5b9fd  6a12                 push 0x12
// 00a5b9ff  8bc8                 mov ecx, eax
// 00a5ba01  e8da15f6ff           call 0x9bcfe0
// 00a5ba06  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00a5ba09  894168               mov dword ptr [ecx + 0x68], eax
// 00a5ba0c  e84f1ef6ff           call 0x9bd860
// 00a5ba11  6a1e                 push 0x1e
// 00a5ba13  8bc8                 mov ecx, eax
// 00a5ba15  e8c615f6ff           call 0x9bcfe0
// 00a5ba1a  8b5674               mov edx, dword ptr [esi + 0x74]
// 00a5ba1d  894250               mov dword ptr [edx + 0x50], eax
// 00a5ba20  5e                   pop esi
// 00a5ba21  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOfficeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
