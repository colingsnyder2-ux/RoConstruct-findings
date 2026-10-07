// roc 2007-08 0069f040  unit: CXTPPropertyGridItemEnum  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f040
//
// 0069f040  56                   push esi
// 0069f041  8bf1                 mov esi, ecx
// 0069f043  33c0                 xor eax, eax
// 0069f045  8906                 mov dword ptr [esi], eax
// 0069f047  894604               mov dword ptr [esi + 4], eax
// 0069f04a  689c2c7d00           push 0x7d2c9c
// 0069f04f  894608               mov dword ptr [esi + 8], eax
// 0069f052  ff157cd27700         call dword ptr [0x77d27c]
// 0069f058  89460c               mov dword ptr [esi + 0xc], eax
// 0069f05b  8bc6                 mov eax, esi
// 0069f05d  5e                   pop esi
// 0069f05e  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPWinThemeWrapper.cpp (function ??0CSharedData@CXTPWinDwmWrapper@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPWinThemeWrapper.cpp
