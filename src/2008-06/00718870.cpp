// roc 2008-06 00718870  unit: CXTPPropertyGridItemEnum  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00718870
//
// 00718870  56                   push esi
// 00718871  8bf1                 mov esi, ecx
// 00718873  33c0                 xor eax, eax
// 00718875  8906                 mov dword ptr [esi], eax
// 00718877  894604               mov dword ptr [esi + 4], eax
// 0071887a  6828eb8500           push 0x85eb28
// 0071887f  894608               mov dword ptr [esi + 8], eax
// 00718882  ff15cc218000         call dword ptr [0x8021cc]
// 00718888  89460c               mov dword ptr [esi + 0xc], eax
// 0071888b  8bc6                 mov eax, esi
// 0071888d  5e                   pop esi
// 0071888e  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPWinThemeWrapper.cpp (function ??0CSharedData@CXTPWinDwmWrapper@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPWinThemeWrapper.cpp
