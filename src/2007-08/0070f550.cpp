// from server: 100% by auto
// roc 2007-08 0070f550  unit: CXTPRichRender::XTextHost  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f550
//
// 0070f550  51                   push ecx
// 0070f551  56                   push esi
// 0070f552  8bf1                 mov esi, ecx
// 0070f554  8b4620               mov eax, dword ptr [esi + 0x20]
// 0070f557  57                   push edi
// 0070f558  33ff                 xor edi, edi
// 0070f55a  3bc7                 cmp eax, edi
// 0070f55c  897e28               mov dword ptr [esi + 0x28], edi
// 0070f55f  897e30               mov dword ptr [esi + 0x30], edi
// 0070f562  740a                 je 0x70f56e
// 0070f564  50                   push eax
// 0070f565  ff15c8d07700         call dword ptr [0x77d0c8]
// 0070f56b  897e20               mov dword ptr [esi + 0x20], edi
// 0070f56e  8b442410             mov eax, dword ptr [esp + 0x10]
// 0070f572  3bc7                 cmp eax, edi
// 0070f574  7508                 jne 0x70f57e
// 0070f576  5f                   pop edi
// 0070f577  33c0                 xor eax, eax
// 0070f579  5e                   pop esi
// 0070f57a  59                   pop ecx
// 0070f57b  c20800               ret 8
// 0070f57e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0070f582  8d4c2408             lea ecx, [esp + 8]
// 0070f586  51                   push ecx
// 0070f587  52                   push edx
// 0070f588  50                   push eax
// 0070f589  897e24               mov dword ptr [esi + 0x24], edi
// 0070f58c  897c2414             mov dword ptr [esp + 0x14], edi
// 0070f590  e85bbbf3ff           call 0x64b0f0
// 0070f595  83c40c               add esp, 0xc
// 0070f598  3bc7                 cmp eax, edi
// 0070f59a  74da                 je 0x70f576
// 0070f59c  397c2408             cmp dword ptr [esp + 8], edi
// 0070f5a0  894620               mov dword ptr [esi + 0x20], eax
// 0070f5a3  7407                 je 0x70f5ac
// 0070f5a5  c7462401000000       mov dword ptr [esi + 0x24], 1
// 0070f5ac  5f                   pop edi
// 0070f5ad  b801000000           mov eax, 1
// 0070f5b2  5e                   pop esi
// 0070f5b3  59                   pop ecx
// 0070f5b4  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPOffice2007Image.cpp (function ?LoadFile@CXTPOffice2007Image@@QAEHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPOffice2007Image.cpp
