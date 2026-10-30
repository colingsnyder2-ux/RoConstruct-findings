// from server: 100% by auto
// roc 2011-06 0087d710  unit: CXTPPropertyGridItemEnum  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087d710
//
// 0087d710  56                   push esi
// 0087d711  8bf1                 mov esi, ecx
// 0087d713  33c0                 xor eax, eax
// 0087d715  8906                 mov dword ptr [esi], eax
// 0087d717  894604               mov dword ptr [esi + 4], eax
// 0087d71a  683cedac00           push 0xaced3c
// 0087d71f  894608               mov dword ptr [esi + 8], eax
// 0087d722  ff152403a400         call dword ptr [0xa40324]
// 0087d728  89460c               mov dword ptr [esi + 0xc], eax
// 0087d72b  8bc6                 mov eax, esi
// 0087d72d  5e                   pop esi
// 0087d72e  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPWinThemeWrapper.cpp (function ??0CSharedData@CXTPWinDwmWrapper@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPWinThemeWrapper.cpp
