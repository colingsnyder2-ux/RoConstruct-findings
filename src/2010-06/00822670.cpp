// roc 2010-06 00822670  unit: CXTPResourceManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00822670
//
// 00822670  56                   push esi
// 00822671  8bf1                 mov esi, ecx
// 00822673  6809040000           push 0x409
// 00822678  c7060c4ea600         mov dword ptr [esi], 0xa64e0c
// 0082267e  c7460401000000       mov dword ptr [esi + 4], 1
// 00822685  c7460800000000       mov dword ptr [esi + 8], 0
// 0082268c  e81ffdffff           call 0x8223b0
// 00822691  89460c               mov dword ptr [esi + 0xc], eax
// 00822694  83c404               add esp, 4
// 00822697  8bc6                 mov eax, esi
// 00822699  5e                   pop esi
// 0082269a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ??0CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
