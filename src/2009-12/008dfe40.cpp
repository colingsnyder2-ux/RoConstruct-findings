// roc 2009-12 008dfe40  unit: CXTPRichRender::XTextHost  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dfe40
//
// 008dfe40  51                   push ecx
// 008dfe41  56                   push esi
// 008dfe42  8bf1                 mov esi, ecx
// 008dfe44  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dfe47  57                   push edi
// 008dfe48  33ff                 xor edi, edi
// 008dfe4a  897e28               mov dword ptr [esi + 0x28], edi
// 008dfe4d  897e30               mov dword ptr [esi + 0x30], edi
// 008dfe50  3bc7                 cmp eax, edi
// 008dfe52  740a                 je 0x8dfe5e
// 008dfe54  50                   push eax
// 008dfe55  ff153cb19800         call dword ptr [0x98b13c]
// 008dfe5b  897e20               mov dword ptr [esi + 0x20], edi
// 008dfe5e  8b442410             mov eax, dword ptr [esp + 0x10]
// 008dfe62  3bc7                 cmp eax, edi
// 008dfe64  7508                 jne 0x8dfe6e
// 008dfe66  5f                   pop edi
// 008dfe67  33c0                 xor eax, eax
// 008dfe69  5e                   pop esi
// 008dfe6a  59                   pop ecx
// 008dfe6b  c20800               ret 8
// 008dfe6e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008dfe72  8d4c2408             lea ecx, [esp + 8]
// 008dfe76  51                   push ecx
// 008dfe77  52                   push edx
// 008dfe78  50                   push eax
// 008dfe79  897e24               mov dword ptr [esi + 0x24], edi
// 008dfe7c  897c2414             mov dword ptr [esp + 0x14], edi
// 008dfe80  e86bbdf2ff           call 0x80bbf0
// 008dfe85  83c40c               add esp, 0xc
// 008dfe88  3bc7                 cmp eax, edi
// 008dfe8a  74da                 je 0x8dfe66
// 008dfe8c  894620               mov dword ptr [esi + 0x20], eax
// 008dfe8f  397c2408             cmp dword ptr [esp + 8], edi
// 008dfe93  7407                 je 0x8dfe9c
// 008dfe95  c7462401000000       mov dword ptr [esi + 0x24], 1
// 008dfe9c  5f                   pop edi
// 008dfe9d  b801000000           mov eax, 1
// 008dfea2  5e                   pop esi
// 008dfea3  59                   pop ecx
// 008dfea4  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?LoadFile@CXTPOffice2007Image@@QAEHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
