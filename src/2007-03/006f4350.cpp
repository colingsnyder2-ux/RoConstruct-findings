// roc 2007-03 006f4350  unit: seg_006f0000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f4350
//
// 006f4350  8b442404             mov eax, dword ptr [esp + 4]
// 006f4354  83f820               cmp eax, 0x20
// 006f4357  56                   push esi
// 006f4358  8bf1                 mov esi, ecx
// 006f435a  743c                 je 0x6f4398
// 006f435c  83f84e               cmp eax, 0x4e
// 006f435f  7437                 je 0x6f4398
// 006f4361  3d11010000           cmp eax, 0x111
// 006f4366  7430                 je 0x6f4398
// 006f4368  83f806               cmp eax, 6
// 006f436b  742b                 je 0x6f4398
// 006f436d  3b0594278c00         cmp eax, dword ptr [0x8c2794]
// 006f4373  751d                 jne 0x6f4392
// 006f4375  a198278c00           mov eax, dword ptr [0x8c2798]
// 006f437a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f437d  6a00                 push 0
// 006f437f  6a00                 push 0
// 006f4381  50                   push eax
// 006f4382  51                   push ecx
// 006f4383  ff1550ee7700         call dword ptr [0x77ee50]
// 006f4389  f7d8                 neg eax
// 006f438b  1bc0                 sbb eax, eax
// 006f438d  f7d8                 neg eax
// 006f438f  89466c               mov dword ptr [esi + 0x6c], eax
// 006f4392  33c0                 xor eax, eax
// 006f4394  5e                   pop esi
// 006f4395  c20400               ret 4
// 006f4398  b801000000           mov eax, 1
// 006f439d  5e                   pop esi
// 006f439e  c20400               ret 4
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinObject.cpp (function ?PreHookMessage@CXTPSkinObject@@MAEHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinObject.cpp
