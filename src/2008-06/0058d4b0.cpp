// roc 2008-06 0058d4b0  unit: RBX::ChangeHistoryService  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0058d4b0
//
// 0058d4b0  56                   push esi
// 0058d4b1  57                   push edi
// 0058d4b2  8bf9                 mov edi, ecx
// 0058d4b4  807f0400             cmp byte ptr [edi + 4], 0
// 0058d4b8  7520                 jne 0x58d4da
// 0058d4ba  8b0f                 mov ecx, dword ptr [edi]
// 0058d4bc  85c9                 test ecx, ecx
// 0058d4be  7410                 je 0x58d4d0
// 0058d4c0  ff15fc248000         call dword ptr [0x8024fc]
// 0058d4c6  83f8ff               cmp eax, -1
// 0058d4c9  7405                 je 0x58d4d0
// 0058d4cb  884705               mov byte ptr [edi + 5], al
// 0058d4ce  eb06                 jmp 0x58d4d6
// 0058d4d0  c70700000000         mov dword ptr [edi], 0
// 0058d4d6  c6470401             mov byte ptr [edi + 4], 1
// 0058d4da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058d4de  807e0400             cmp byte ptr [esi + 4], 0
// 0058d4e2  7520                 jne 0x58d504
// 0058d4e4  8b0e                 mov ecx, dword ptr [esi]
// 0058d4e6  85c9                 test ecx, ecx
// 0058d4e8  7410                 je 0x58d4fa
// 0058d4ea  ff15fc248000         call dword ptr [0x8024fc]
// 0058d4f0  83f8ff               cmp eax, -1
// 0058d4f3  7405                 je 0x58d4fa
// 0058d4f5  884605               mov byte ptr [esi + 5], al
// 0058d4f8  eb06                 jmp 0x58d500
// 0058d4fa  c70600000000         mov dword ptr [esi], 0
// 0058d500  c6460401             mov byte ptr [esi + 4], 1
// 0058d504  833f00               cmp dword ptr [edi], 0
// 0058d507  750c                 jne 0x58d515
// 0058d509  833e00               cmp dword ptr [esi], 0
// 0058d50c  740c                 je 0x58d51a
// 0058d50e  5f                   pop edi
// 0058d50f  33c0                 xor eax, eax
// 0058d511  5e                   pop esi
// 0058d512  c20400               ret 4
// 0058d515  833e00               cmp dword ptr [esi], 0
// 0058d518  74f4                 je 0x58d50e
// 0058d51a  5f                   pop edi
// 0058d51b  b801000000           mov eax, 1
// 0058d520  5e                   pop esi
// 0058d521  c20400               ret 4
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBE_NABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
