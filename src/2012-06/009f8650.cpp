// roc 2012-06 009f8650  unit: CXTPResourceManager  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8650
//
// 009f8650  56                   push esi
// 009f8651  8bf1                 mov esi, ecx
// 009f8653  c60600               mov byte ptr [esi], 0
// 009f8656  e8b5feffff           call 0x9f8510
// 009f865b  8bc6                 mov eax, esi
// 009f865d  5e                   pop esi
// 009f865e  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ??0CManageState@CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
