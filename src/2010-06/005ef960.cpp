// roc 2010-06 005ef960  unit: RBX::ChangeHistoryService  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ef960
//
// 005ef960  56                   push esi
// 005ef961  57                   push edi
// 005ef962  8bf9                 mov edi, ecx
// 005ef964  807f0400             cmp byte ptr [edi + 4], 0
// 005ef968  7520                 jne 0x5ef98a
// 005ef96a  8b0f                 mov ecx, dword ptr [edi]
// 005ef96c  85c9                 test ecx, ecx
// 005ef96e  7410                 je 0x5ef980
// 005ef970  ff156ca69e00         call dword ptr [0x9ea66c]
// 005ef976  83f8ff               cmp eax, -1
// 005ef979  7405                 je 0x5ef980
// 005ef97b  884705               mov byte ptr [edi + 5], al
// 005ef97e  eb06                 jmp 0x5ef986
// 005ef980  c70700000000         mov dword ptr [edi], 0
// 005ef986  c6470401             mov byte ptr [edi + 4], 1
// 005ef98a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ef98e  807e0400             cmp byte ptr [esi + 4], 0
// 005ef992  7520                 jne 0x5ef9b4
// 005ef994  8b0e                 mov ecx, dword ptr [esi]
// 005ef996  85c9                 test ecx, ecx
// 005ef998  7410                 je 0x5ef9aa
// 005ef99a  ff156ca69e00         call dword ptr [0x9ea66c]
// 005ef9a0  83f8ff               cmp eax, -1
// 005ef9a3  7405                 je 0x5ef9aa
// 005ef9a5  884605               mov byte ptr [esi + 5], al
// 005ef9a8  eb06                 jmp 0x5ef9b0
// 005ef9aa  c70600000000         mov dword ptr [esi], 0
// 005ef9b0  c6460401             mov byte ptr [esi + 4], 1
// 005ef9b4  833f00               cmp dword ptr [edi], 0
// 005ef9b7  750c                 jne 0x5ef9c5
// 005ef9b9  833e00               cmp dword ptr [esi], 0
// 005ef9bc  740c                 je 0x5ef9ca
// 005ef9be  5f                   pop edi
// 005ef9bf  33c0                 xor eax, eax
// 005ef9c1  5e                   pop esi
// 005ef9c2  c20400               ret 4
// 005ef9c5  833e00               cmp dword ptr [esi], 0
// 005ef9c8  74f4                 je 0x5ef9be
// 005ef9ca  5f                   pop edi
// 005ef9cb  b801000000           mov eax, 1
// 005ef9d0  5e                   pop esi
// 005ef9d1  c20400               ret 4
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBE_NABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
