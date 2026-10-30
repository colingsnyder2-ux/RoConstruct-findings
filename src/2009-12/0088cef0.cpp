// roc 2009-12 0088cef0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088cef0
//
// 0088cef0  8b442404             mov eax, dword ptr [esp + 4]
// 0088cef4  56                   push esi
// 0088cef5  8bf1                 mov esi, ecx
// 0088cef7  398690010000         cmp dword ptr [esi + 0x190], eax
// 0088cefd  0f84ef000000         je 0x88cff2
// 0088cf03  898690010000         mov dword ptr [esi + 0x190], eax
// 0088cf09  85c0                 test eax, eax
// 0088cf0b  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088cf11  57                   push edi
// 0088cf12  747b                 je 0x88cf8f
// 0088cf14  85c0                 test eax, eax
// 0088cf16  7426                 je 0x88cf3e
// 0088cf18  83782000             cmp dword ptr [eax + 0x20], 0
// 0088cf1c  7420                 je 0x88cf3e
// 0088cf1e  85c0                 test eax, eax
// 0088cf20  7504                 jne 0x88cf26
// 0088cf22  33ff                 xor edi, edi
// 0088cf24  eb03                 jmp 0x88cf29
// 0088cf26  8b7820               mov edi, dword ptr [eax + 0x20]
// 0088cf29  ff15eccb9800         call dword ptr [0x98cbec]
// 0088cf2f  3bc7                 cmp eax, edi
// 0088cf31  740b                 je 0x88cf3e
// 0088cf33  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088cf39  e8c46cf6ff           call 0x7f3c02
// 0088cf3e  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cf44  8b01                 mov eax, dword ptr [ecx]
// 0088cf46  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 0088cf4c  6a00                 push 0
// 0088cf4e  6a00                 push 0
// 0088cf50  6a01                 push 1
// 0088cf52  ffd2                 call edx
// 0088cf54  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cf5a  8b01                 mov eax, dword ptr [ecx]
// 0088cf5c  8b9680000000         mov edx, dword ptr [esi + 0x80]
// 0088cf62  8b8050010000         mov eax, dword ptr [eax + 0x150]
// 0088cf68  6a00                 push 0
// 0088cf6a  52                   push edx
// 0088cf6b  ffd0                 call eax
// 0088cf6d  68b0647f00           push 0x7f64b0
// 0088cf72  b9d0bab900           mov ecx, 0xb9bad0
// 0088cf77  e8c0940900           call 0x92643c
// 0088cf7c  85c0                 test eax, eax
// 0088cf7e  7505                 jne 0x88cf85
// 0088cf80  e8876bf6ff           call 0x7f3b0c
// 0088cf85  ff4004               inc dword ptr [eax + 4]
// 0088cf88  6800010000           push 0x100
// 0088cf8d  eb52                 jmp 0x88cfe1
// 0088cf8f  85c0                 test eax, eax
// 0088cf91  742e                 je 0x88cfc1
// 0088cf93  83782000             cmp dword ptr [eax + 0x20], 0
// 0088cf97  7428                 je 0x88cfc1
// 0088cf99  85c0                 test eax, eax
// 0088cf9b  7504                 jne 0x88cfa1
// 0088cf9d  33ff                 xor edi, edi
// 0088cf9f  eb03                 jmp 0x88cfa4
// 0088cfa1  8b7820               mov edi, dword ptr [eax + 0x20]
// 0088cfa4  ff15eccb9800         call dword ptr [0x98cbec]
// 0088cfaa  3bc7                 cmp eax, edi
// 0088cfac  7513                 jne 0x88cfc1
// 0088cfae  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0088cfb4  8b91d4000000         mov edx, dword ptr [ecx + 0xd4]
// 0088cfba  52                   push edx
// 0088cfbb  ff15c8cb9800         call dword ptr [0x98cbc8]
// 0088cfc1  68b0647f00           push 0x7f64b0
// 0088cfc6  b9d0bab900           mov ecx, 0xb9bad0
// 0088cfcb  e86c940900           call 0x92643c
// 0088cfd0  85c0                 test eax, eax
// 0088cfd2  7505                 jne 0x88cfd9
// 0088cfd4  e8336bf6ff           call 0x7f3b0c
// 0088cfd9  ff4804               dec dword ptr [eax + 4]
// 0088cfdc  6800020000           push 0x200
// 0088cfe1  8bce                 mov ecx, esi
// 0088cfe3  e8a8b5f6ff           call 0x7f8590
// 0088cfe8  6a01                 push 1
// 0088cfea  8bce                 mov ecx, esi
// 0088cfec  e8cf96f6ff           call 0x7f66c0
// 0088cff1  5f                   pop edi
// 0088cff2  5e                   pop esi
// 0088cff3  c20400               ret 4
// copied from an identical function in another client (function ?SetFocused@CXTPControlEdit@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp