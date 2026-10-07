// roc 2007-08 006b7f60  unit: XTPPaintThemes::CXTPDefaultTheme  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b7f60
//
// 006b7f60  56                   push esi
// 006b7f61  8bf1                 mov esi, ecx
// 006b7f63  e8884ef8ff           call 0x63cdf0
// 006b7f68  6a02                 push 2
// 006b7f6a  8bce                 mov ecx, esi
// 006b7f6c  e8ff4df8ff           call 0x63cd70
// 006b7f71  6a09                 push 9
// 006b7f73  8bce                 mov ecx, esi
// 006b7f75  89464c               mov dword ptr [esi + 0x4c], eax
// 006b7f78  e8f34df8ff           call 0x63cd70
// 006b7f7d  894658               mov dword ptr [esi + 0x58], eax
// 006b7f80  5e                   pop esi
// 006b7f81  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?RefreshMetrics@CXTPDefaultTheme@XTPPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
