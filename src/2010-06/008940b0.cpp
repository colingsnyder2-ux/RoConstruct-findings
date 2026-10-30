// roc 2010-06 008940b0  unit: CXTPRichRender::XTextHost  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008940b0
//
// 008940b0  51                   push ecx
// 008940b1  56                   push esi
// 008940b2  8bf1                 mov esi, ecx
// 008940b4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008940b7  57                   push edi
// 008940b8  33ff                 xor edi, edi
// 008940ba  897e28               mov dword ptr [esi + 0x28], edi
// 008940bd  897e30               mov dword ptr [esi + 0x30], edi
// 008940c0  3bc7                 cmp eax, edi
// 008940c2  740a                 je 0x8940ce
// 008940c4  50                   push eax
// 008940c5  ff15d4a09e00         call dword ptr [0x9ea0d4]
// 008940cb  897e20               mov dword ptr [esi + 0x20], edi
// 008940ce  8b442410             mov eax, dword ptr [esp + 0x10]
// 008940d2  3bc7                 cmp eax, edi
// 008940d4  7508                 jne 0x8940de
// 008940d6  5f                   pop edi
// 008940d7  33c0                 xor eax, eax
// 008940d9  5e                   pop esi
// 008940da  59                   pop ecx
// 008940db  c20800               ret 8
// 008940de  8b542414             mov edx, dword ptr [esp + 0x14]
// 008940e2  8d4c2408             lea ecx, [esp + 8]
// 008940e6  51                   push ecx
// 008940e7  52                   push edx
// 008940e8  50                   push eax
// 008940e9  897e24               mov dword ptr [esi + 0x24], edi
// 008940ec  897c2414             mov dword ptr [esp + 0x14], edi
// 008940f0  e8ebbbf2ff           call 0x7bfce0
// 008940f5  83c40c               add esp, 0xc
// 008940f8  3bc7                 cmp eax, edi
// 008940fa  74da                 je 0x8940d6
// 008940fc  894620               mov dword ptr [esi + 0x20], eax
// 008940ff  397c2408             cmp dword ptr [esp + 8], edi
// 00894103  7407                 je 0x89410c
// 00894105  c7462401000000       mov dword ptr [esi + 0x24], 1
// 0089410c  5f                   pop edi
// 0089410d  b801000000           mov eax, 1
// 00894112  5e                   pop esi
// 00894113  59                   pop ecx
// 00894114  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?LoadFile@CXTPOffice2007Image@@QAEHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
