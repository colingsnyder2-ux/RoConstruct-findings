// roc 2012-06 009febb0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009febb0
//
// 009febb0  56                   push esi
// 009febb1  8bf1                 mov esi, ecx
// 009febb3  e8588df8ff           call 0x987910
// 009febb8  6a02                 push 2
// 009febba  8bce                 mov ecx, esi
// 009febbc  e8cf8cf8ff           call 0x987890
// 009febc1  6a09                 push 9
// 009febc3  8bce                 mov ecx, esi
// 009febc5  89464c               mov dword ptr [esi + 0x4c], eax
// 009febc8  e8c38cf8ff           call 0x987890
// 009febcd  894658               mov dword ptr [esi + 0x58], eax
// 009febd0  5e                   pop esi
// 009febd1  c3                   ret 
// library xtp-13.2.1/Source\CommandBars\XTPDefaultTheme.cpp (function ?RefreshMetrics@CXTPDefaultTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPDefaultTheme.cpp
