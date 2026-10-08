// roc 2009-06 00805340  unit: CXTPRichRender::XTextHost  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00805340
//
// 00805340  51                   push ecx
// 00805341  56                   push esi
// 00805342  8bf1                 mov esi, ecx
// 00805344  8b4620               mov eax, dword ptr [esi + 0x20]
// 00805347  57                   push edi
// 00805348  33ff                 xor edi, edi
// 0080534a  897e28               mov dword ptr [esi + 0x28], edi
// 0080534d  897e30               mov dword ptr [esi + 0x30], edi
// 00805350  3bc7                 cmp eax, edi
// 00805352  740a                 je 0x80535e
// 00805354  50                   push eax
// 00805355  ff1560e18900         call dword ptr [0x89e160]
// 0080535b  897e20               mov dword ptr [esi + 0x20], edi
// 0080535e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00805362  3bc7                 cmp eax, edi
// 00805364  7508                 jne 0x80536e
// 00805366  5f                   pop edi
// 00805367  33c0                 xor eax, eax
// 00805369  5e                   pop esi
// 0080536a  59                   pop ecx
// 0080536b  c20800               ret 8
// 0080536e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00805372  8d4c2408             lea ecx, [esp + 8]
// 00805376  51                   push ecx
// 00805377  52                   push edx
// 00805378  50                   push eax
// 00805379  897e24               mov dword ptr [esi + 0x24], edi
// 0080537c  897c2414             mov dword ptr [esp + 0x14], edi
// 00805380  e8bbf7f2ff           call 0x734b40
// 00805385  83c40c               add esp, 0xc
// 00805388  3bc7                 cmp eax, edi
// 0080538a  74da                 je 0x805366
// 0080538c  894620               mov dword ptr [esi + 0x20], eax
// 0080538f  397c2408             cmp dword ptr [esp + 8], edi
// 00805393  7407                 je 0x80539c
// 00805395  c7462401000000       mov dword ptr [esi + 0x24], 1
// 0080539c  5f                   pop edi
// 0080539d  b801000000           mov eax, 1
// 008053a2  5e                   pop esi
// 008053a3  59                   pop ecx
// 008053a4  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?LoadFile@CXTPOffice2007Image@@QAEHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
