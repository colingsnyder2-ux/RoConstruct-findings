// roc 2009-12 008cb830  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridOfficeXPTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cb830
//
// 008cb830  56                   push esi
// 008cb831  8bf1                 mov esi, ecx
// 008cb833  e8b8e4ffff           call 0x8c9cf0
// 008cb838  e89341f6ff           call 0x82f9d0
// 008cb83d  6a12                 push 0x12
// 008cb83f  8bc8                 mov ecx, eax
// 008cb841  e8ba38f6ff           call 0x82f100
// 008cb846  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 008cb849  894168               mov dword ptr [ecx + 0x68], eax
// 008cb84c  e87f41f6ff           call 0x82f9d0
// 008cb851  6a1e                 push 0x1e
// 008cb853  8bc8                 mov ecx, eax
// 008cb855  e8a638f6ff           call 0x82f100
// 008cb85a  8b5674               mov edx, dword ptr [esi + 0x74]
// 008cb85d  894250               mov dword ptr [edx + 0x50], eax
// 008cb860  5e                   pop esi
// 008cb861  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridOfficeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
