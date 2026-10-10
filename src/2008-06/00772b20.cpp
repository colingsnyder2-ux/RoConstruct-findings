// roc 2008-06 00772b20  unit: CXTPControlCustom  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772b20
//
// 00772b20  56                   push esi
// 00772b21  8bf1                 mov esi, ecx
// 00772b23  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 00772b29  85c0                 test eax, eax
// 00772b2b  740a                 je 0x772b37
// 00772b2d  83784000             cmp dword ptr [eax + 0x40], 0
// 00772b31  0f8582000000         jne 0x772bb9
// 00772b37  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00772b3d  85c0                 test eax, eax
// 00772b3f  7478                 je 0x772bb9
// 00772b41  57                   push edi
// 00772b42  8b7820               mov edi, dword ptr [eax + 0x20]
// 00772b45  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00772b4b  50                   push eax
// 00772b4c  ff15f82d8000         call dword ptr [0x802df8]
// 00772b52  3bc7                 cmp eax, edi
// 00772b54  5f                   pop edi
// 00772b55  7562                 jne 0x772bb9
// 00772b57  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00772b5e  7459                 je 0x772bb9
// 00772b60  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 00772b67  7430                 je 0x772b99
// 00772b69  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 00772b70  7427                 je 0x772b99
// 00772b72  8b16                 mov edx, dword ptr [esi]
// 00772b74  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00772b7a  6a00                 push 0
// 00772b7c  8bce                 mov ecx, esi
// 00772b7e  ffd0                 call eax
// 00772b80  85c0                 test eax, eax
// 00772b82  7415                 je 0x772b99
// 00772b84  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00772b8a  85c0                 test eax, eax
// 00772b8c  740b                 je 0x772b99
// 00772b8e  83782000             cmp dword ptr [eax + 0x20], 0
// 00772b92  b840000000           mov eax, 0x40
// 00772b97  7505                 jne 0x772b9e
// 00772b99  b880000000           mov eax, 0x80
// 00772b9e  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00772ba4  83c817               or eax, 0x17
// 00772ba7  50                   push eax
// 00772ba8  6a00                 push 0
// 00772baa  6a00                 push 0
// 00772bac  6a00                 push 0
// 00772bae  6a00                 push 0
// 00772bb0  6a00                 push 0
// 00772bb2  51                   push ecx
// 00772bb3  ff15b02b8000         call dword ptr [0x802bb0]
// 00772bb9  5e                   pop esi
// 00772bba  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlCustom.cpp (function ?ShowHideChildControl@CXTPControlCustom@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlCustom.cpp
