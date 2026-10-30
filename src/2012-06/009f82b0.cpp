// roc 2012-06 009f82b0  unit: CXTPResourceManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f82b0
//
// 009f82b0  56                   push esi
// 009f82b1  8bf1                 mov esi, ecx
// 009f82b3  6809040000           push 0x409
// 009f82b8  c7066cb0c100         mov dword ptr [esi], 0xc1b06c
// 009f82be  c7460401000000       mov dword ptr [esi + 4], 1
// 009f82c5  c7460800000000       mov dword ptr [esi + 8], 0
// 009f82cc  e81ffdffff           call 0x9f7ff0
// 009f82d1  89460c               mov dword ptr [esi + 0xc], eax
// 009f82d4  83c404               add esp, 4
// 009f82d7  8bc6                 mov eax, esi
// 009f82d9  5e                   pop esi
// 009f82da  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ??0CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
