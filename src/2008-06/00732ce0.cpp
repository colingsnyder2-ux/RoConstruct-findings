// from server: 100% by auto
// roc 2008-06 00732ce0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00732ce0
//
// 00732ce0  56                   push esi
// 00732ce1  8bf1                 mov esi, ecx
// 00732ce3  e808b4f7ff           call 0x6ae0f0
// 00732ce8  6a02                 push 2
// 00732cea  8bce                 mov ecx, esi
// 00732cec  e87fb3f7ff           call 0x6ae070
// 00732cf1  6a09                 push 9
// 00732cf3  8bce                 mov ecx, esi
// 00732cf5  89464c               mov dword ptr [esi + 0x4c], eax
// 00732cf8  e873b3f7ff           call 0x6ae070
// 00732cfd  894658               mov dword ptr [esi + 0x58], eax
// 00732d00  5e                   pop esi
// 00732d01  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?RefreshMetrics@CXTPDefaultTheme@XTPPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
