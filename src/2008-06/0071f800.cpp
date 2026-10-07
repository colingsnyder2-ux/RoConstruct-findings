// roc 2008-06 0071f800  unit: CXTPResourceManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f800
//
// 0071f800  56                   push esi
// 0071f801  8bf1                 mov esi, ecx
// 0071f803  6809040000           push 0x409
// 0071f808  c7061c018600         mov dword ptr [esi], 0x86011c
// 0071f80e  c7460401000000       mov dword ptr [esi + 4], 1
// 0071f815  c7460800000000       mov dword ptr [esi + 8], 0
// 0071f81c  e81ffdffff           call 0x71f540
// 0071f821  89460c               mov dword ptr [esi + 0xc], eax
// 0071f824  83c404               add esp, 4
// 0071f827  8bc6                 mov eax, esi
// 0071f829  5e                   pop esi
// 0071f82a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ??0CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
