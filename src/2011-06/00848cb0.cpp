// roc 2011-06 00848cb0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848cb0
//
// 00848cb0  53                   push ebx
// 00848cb1  56                   push esi
// 00848cb2  8bf1                 mov esi, ecx
// 00848cb4  33db                 xor ebx, ebx
// 00848cb6  6a0a                 push 0xa
// 00848cb8  8d4e18               lea ecx, [esi + 0x18]
// 00848cbb  c706dc64ac00         mov dword ptr [esi], 0xac64dc
// 00848cc1  895e04               mov dword ptr [esi + 4], ebx
// 00848cc4  c7460801000000       mov dword ptr [esi + 8], 1
// 00848ccb  895e0c               mov dword ptr [esi + 0xc], ebx
// 00848cce  895e10               mov dword ptr [esi + 0x10], ebx
// 00848cd1  895e14               mov dword ptr [esi + 0x14], ebx
// 00848cd4  e8e7fdffff           call 0x848ac0
// 00848cd9  885e38               mov byte ptr [esi + 0x38], bl
// 00848cdc  895e34               mov dword ptr [esi + 0x34], ebx
// 00848cdf  c6463901             mov byte ptr [esi + 0x39], 1
// 00848ce3  8bc6                 mov eax, esi
// 00848ce5  5e                   pop esi
// 00848ce6  5b                   pop ebx
// 00848ce7  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ??0CXTPTreeBase@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
