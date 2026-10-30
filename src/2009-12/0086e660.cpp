// roc 2009-12 0086e660  unit: CXTPResourceManager  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086e660
//
// 0086e660  56                   push esi
// 0086e661  8bf1                 mov esi, ecx
// 0086e663  6809040000           push 0x409
// 0086e668  c7061c0ba000         mov dword ptr [esi], 0xa00b1c
// 0086e66e  c7460401000000       mov dword ptr [esi + 4], 1
// 0086e675  c7460800000000       mov dword ptr [esi + 8], 0
// 0086e67c  e81ffdffff           call 0x86e3a0
// 0086e681  89460c               mov dword ptr [esi + 0xc], eax
// 0086e684  83c404               add esp, 4
// 0086e687  8bc6                 mov eax, esi
// 0086e689  5e                   pop esi
// 0086e68a  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ??0CXTPResourceManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
