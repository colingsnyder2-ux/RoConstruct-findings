// from server: 100% by auto
// roc 2008-06 0078ccb0  unit: CXTPRichRender::XTextHost  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078ccb0
//
// 0078ccb0  51                   push ecx
// 0078ccb1  56                   push esi
// 0078ccb2  8bf1                 mov esi, ecx
// 0078ccb4  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078ccb7  57                   push edi
// 0078ccb8  33ff                 xor edi, edi
// 0078ccba  897e28               mov dword ptr [esi + 0x28], edi
// 0078ccbd  897e30               mov dword ptr [esi + 0x30], edi
// 0078ccc0  3bc7                 cmp eax, edi
// 0078ccc2  740a                 je 0x78ccce
// 0078ccc4  50                   push eax
// 0078ccc5  ff1550218000         call dword ptr [0x802150]
// 0078cccb  897e20               mov dword ptr [esi + 0x20], edi
// 0078ccce  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078ccd2  3bc7                 cmp eax, edi
// 0078ccd4  7508                 jne 0x78ccde
// 0078ccd6  5f                   pop edi
// 0078ccd7  33c0                 xor eax, eax
// 0078ccd9  5e                   pop esi
// 0078ccda  59                   pop ecx
// 0078ccdb  c20800               ret 8
// 0078ccde  8b542414             mov edx, dword ptr [esp + 0x14]
// 0078cce2  8d4c2408             lea ecx, [esp + 8]
// 0078cce6  51                   push ecx
// 0078cce7  52                   push edx
// 0078cce8  50                   push eax
// 0078cce9  897e24               mov dword ptr [esi + 0x24], edi
// 0078ccec  897c2414             mov dword ptr [esp + 0x14], edi
// 0078ccf0  e87bf9f2ff           call 0x6bc670
// 0078ccf5  83c40c               add esp, 0xc
// 0078ccf8  3bc7                 cmp eax, edi
// 0078ccfa  74da                 je 0x78ccd6
// 0078ccfc  894620               mov dword ptr [esi + 0x20], eax
// 0078ccff  397c2408             cmp dword ptr [esp + 8], edi
// 0078cd03  7407                 je 0x78cd0c
// 0078cd05  c7462401000000       mov dword ptr [esi + 0x24], 1
// 0078cd0c  5f                   pop edi
// 0078cd0d  b801000000           mov eax, 1
// 0078cd12  5e                   pop esi
// 0078cd13  59                   pop ecx
// 0078cd14  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?LoadFile@CXTPOffice2007Image@@QAEHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
