// from server: 100% by auto
// roc 2007-08 006828d0  unit: CXTPPrintingDialog  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006828d0
//
// 006828d0  56                   push esi
// 006828d1  8bf1                 mov esi, ecx
// 006828d3  e838600b00           call 0x738910
// 006828d8  33c0                 xor eax, eax
// 006828da  894664               mov dword ptr [esi + 0x64], eax
// 006828dd  894668               mov dword ptr [esi + 0x68], eax
// 006828e0  894660               mov dword ptr [esi + 0x60], eax
// 006828e3  89465c               mov dword ptr [esi + 0x5c], eax
// 006828e6  c706d4ed7c00         mov dword ptr [esi], 0x7cedd4
// 006828ec  8bc6                 mov eax, esi
// 006828ee  5e                   pop esi
// 006828ef  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGrid.cpp (function ??0CXTPPropertyGridToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGrid.cpp
