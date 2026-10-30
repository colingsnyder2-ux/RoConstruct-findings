// from server: 100% by auto
// roc 2011-06 008800a0  unit: CXTPResourceManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008800a0
//
// 008800a0  56                   push esi
// 008800a1  8bf1                 mov esi, ecx
// 008800a3  c60600               mov byte ptr [esi], 0
// 008800a6  e8b5feffff           call 0x87ff60
// 008800ab  8bc6                 mov eax, esi
// 008800ad  5e                   pop esi
// 008800ae  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ??0CManageState@CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
