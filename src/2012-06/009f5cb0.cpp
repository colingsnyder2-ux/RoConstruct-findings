// roc 2012-06 009f5cb0  unit: CXTPPropertyGridItemEnum  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f5cb0
//
// 009f5cb0  56                   push esi
// 009f5cb1  8bf1                 mov esi, ecx
// 009f5cb3  33c0                 xor eax, eax
// 009f5cb5  8906                 mov dword ptr [esi], eax
// 009f5cb7  894604               mov dword ptr [esi + 4], eax
// 009f5cba  68f8a3c100           push 0xc1a3f8
// 009f5cbf  894608               mov dword ptr [esi + 8], eax
// 009f5cc2  ff154822b200         call dword ptr [0xb22248]
// 009f5cc8  89460c               mov dword ptr [esi + 0xc], eax
// 009f5ccb  8bc6                 mov eax, esi
// 009f5ccd  5e                   pop esi
// 009f5cce  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ??0CSharedData@CXTPWinDwmWrapper@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp
