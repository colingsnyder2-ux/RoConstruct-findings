// roc 2007-08 007038a0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007038a0
//
// 007038a0  56                   push esi
// 007038a1  6a00                 push 0
// 007038a3  6a00                 push 0
// 007038a5  8bf1                 mov esi, ecx
// 007038a7  6a00                 push 0
// 007038a9  6a00                 push 0
// 007038ab  8d4604               lea eax, [esi + 4]
// 007038ae  50                   push eax
// 007038af  c706e4d27d00         mov dword ptr [esi], 0x7dd2e4
// 007038b5  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 007038bc  ff1578ed7700         call dword ptr [0x77ed78]
// 007038c2  c74614feffffff       mov dword ptr [esi + 0x14], 0xfffffffe
// 007038c9  c7462000000000       mov dword ptr [esi + 0x20], 0
// 007038d0  8bc6                 mov eax, esi
// 007038d2  5e                   pop esi
// 007038d3  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ??0CAppearanceSet@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerAppearance.cpp
