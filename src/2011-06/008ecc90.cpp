// roc 2011-06 008ecc90  unit: CXTPRichRender::XTextHost  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ecc90
//
// 008ecc90  51                   push ecx
// 008ecc91  56                   push esi
// 008ecc92  8bf1                 mov esi, ecx
// 008ecc94  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ecc97  57                   push edi
// 008ecc98  33ff                 xor edi, edi
// 008ecc9a  897e28               mov dword ptr [esi + 0x28], edi
// 008ecc9d  897e30               mov dword ptr [esi + 0x30], edi
// 008ecca0  3bc7                 cmp eax, edi
// 008ecca2  740a                 je 0x8eccae
// 008ecca4  50                   push eax
// 008ecca5  ff159c01a400         call dword ptr [0xa4019c]
// 008eccab  897e20               mov dword ptr [esi + 0x20], edi
// 008eccae  8b442410             mov eax, dword ptr [esp + 0x10]
// 008eccb2  3bc7                 cmp eax, edi
// 008eccb4  7508                 jne 0x8eccbe
// 008eccb6  5f                   pop edi
// 008eccb7  33c0                 xor eax, eax
// 008eccb9  5e                   pop esi
// 008eccba  59                   pop ecx
// 008eccbb  c20800               ret 8
// 008eccbe  8b542414             mov edx, dword ptr [esp + 0x14]
// 008eccc2  8d4c2408             lea ecx, [esp + 8]
// 008eccc6  51                   push ecx
// 008eccc7  52                   push edx
// 008eccc8  50                   push eax
// 008eccc9  897e24               mov dword ptr [esi + 0x24], edi
// 008ecccc  897c2414             mov dword ptr [esp + 0x14], edi
// 008eccd0  e8bb50f3ff           call 0x821d90
// 008eccd5  83c40c               add esp, 0xc
// 008eccd8  3bc7                 cmp eax, edi
// 008eccda  74da                 je 0x8eccb6
// 008eccdc  894620               mov dword ptr [esi + 0x20], eax
// 008eccdf  397c2408             cmp dword ptr [esp + 8], edi
// 008ecce3  7407                 je 0x8eccec
// 008ecce5  c7462401000000       mov dword ptr [esi + 0x24], 1
// 008eccec  5f                   pop edi
// 008ecced  b801000000           mov eax, 1
// 008eccf2  5e                   pop esi
// 008eccf3  59                   pop ecx
// 008eccf4  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?LoadFile@CXTPOffice2007Image@@QAEHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
