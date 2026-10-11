// roc 2009-06 0061e3b0  unit: RBX::ChangeHistoryService  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0061e3b0
//
// 0061e3b0  56                   push esi
// 0061e3b1  57                   push edi
// 0061e3b2  8bf9                 mov edi, ecx
// 0061e3b4  807f0400             cmp byte ptr [edi + 4], 0
// 0061e3b8  7520                 jne 0x61e3da
// 0061e3ba  8b0f                 mov ecx, dword ptr [edi]
// 0061e3bc  85c9                 test ecx, ecx
// 0061e3be  7410                 je 0x61e3d0
// 0061e3c0  ff1558e68900         call dword ptr [0x89e658]
// 0061e3c6  83f8ff               cmp eax, -1
// 0061e3c9  7405                 je 0x61e3d0
// 0061e3cb  884705               mov byte ptr [edi + 5], al
// 0061e3ce  eb06                 jmp 0x61e3d6
// 0061e3d0  c70700000000         mov dword ptr [edi], 0
// 0061e3d6  c6470401             mov byte ptr [edi + 4], 1
// 0061e3da  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061e3de  807e0400             cmp byte ptr [esi + 4], 0
// 0061e3e2  7520                 jne 0x61e404
// 0061e3e4  8b0e                 mov ecx, dword ptr [esi]
// 0061e3e6  85c9                 test ecx, ecx
// 0061e3e8  7410                 je 0x61e3fa
// 0061e3ea  ff1558e68900         call dword ptr [0x89e658]
// 0061e3f0  83f8ff               cmp eax, -1
// 0061e3f3  7405                 je 0x61e3fa
// 0061e3f5  884605               mov byte ptr [esi + 5], al
// 0061e3f8  eb06                 jmp 0x61e400
// 0061e3fa  c70600000000         mov dword ptr [esi], 0
// 0061e400  c6460401             mov byte ptr [esi + 4], 1
// 0061e404  833f00               cmp dword ptr [edi], 0
// 0061e407  750c                 jne 0x61e415
// 0061e409  833e00               cmp dword ptr [esi], 0
// 0061e40c  740c                 je 0x61e41a
// 0061e40e  5f                   pop edi
// 0061e40f  33c0                 xor eax, eax
// 0061e411  5e                   pop esi
// 0061e412  c20400               ret 4
// 0061e415  833e00               cmp dword ptr [esi], 0
// 0061e418  74f4                 je 0x61e40e
// 0061e41a  5f                   pop edi
// 0061e41b  b801000000           mov eax, 1
// 0061e420  5e                   pop esi
// 0061e421  c20400               ret 4
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBE_NABV12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
