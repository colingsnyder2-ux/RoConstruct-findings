// roc 2007-08 006b30a0  unit: CXTPResourceManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b30a0
//
// 006b30a0  56                   push esi
// 006b30a1  8bf1                 mov esi, ecx
// 006b30a3  c60600               mov byte ptr [esi], 0
// 006b30a6  e885ffffff           call 0x6b3030
// 006b30ab  8bc6                 mov eax, esi
// 006b30ad  5e                   pop esi
// 006b30ae  c3                   ret 
// library xtp-11.2.2-vc8/Source\Common\XTPResourceManager.cpp (function ??0CManageState@CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPResourceManager.cpp
