// roc 2007-08 006ad8f0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad8f0
//
// 006ad8f0  53                   push ebx
// 006ad8f1  56                   push esi
// 006ad8f2  57                   push edi
// 006ad8f3  8bf1                 mov esi, ecx
// 006ad8f5  e8a65f0500           call 0x7038a0
// 006ad8fa  8b1d78ed7700         mov ebx, dword ptr [0x77ed78]
// 006ad900  6a00                 push 0
// 006ad902  6a04                 push 4
// 006ad904  6a02                 push 2
// 006ad906  6a02                 push 2
// 006ad908  8d7e04               lea edi, [esi + 4]
// 006ad90b  57                   push edi
// 006ad90c  c706bc567d00         mov dword ptr [esi], 0x7d56bc
// 006ad912  ffd3                 call ebx
// 006ad914  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ad918  6a00                 push 0
// 006ad91a  6a00                 push 0
// 006ad91c  6a01                 push 1
// 006ad91e  6a00                 push 0
// 006ad920  57                   push edi
// 006ad921  c7462401000000       mov dword ptr [esi + 0x24], 1
// 006ad928  c7462800000000       mov dword ptr [esi + 0x28], 0
// 006ad92f  c706c4587d00         mov dword ptr [esi], 0x7d58c4
// 006ad935  89462c               mov dword ptr [esi + 0x2c], eax
// 006ad938  ffd3                 call ebx
// 006ad93a  5f                   pop edi
// 006ad93b  8bc6                 mov eax, esi
// 006ad93d  5e                   pop esi
// 006ad93e  5b                   pop ebx
// 006ad93f  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ??0CRibbonAppearanceSet@CXTPRibbonTheme@@QAE@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp
