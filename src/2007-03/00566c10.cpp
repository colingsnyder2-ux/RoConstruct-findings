// roc 2007-03 00566c10  unit: seg_00560000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00566c10
//
// 00566c10  56                   push esi
// 00566c11  8bf1                 mov esi, ecx
// 00566c13  807e0800             cmp byte ptr [esi + 8], 0
// 00566c17  57                   push edi
// 00566c18  7522                 jne 0x566c3c
// 00566c1a  8b4e04               mov ecx, dword ptr [esi + 4]
// 00566c1d  85c9                 test ecx, ecx
// 00566c1f  7410                 je 0x566c31
// 00566c21  ff15b0e57700         call dword ptr [0x77e5b0]
// 00566c27  83f8ff               cmp eax, -1
// 00566c2a  7405                 je 0x566c31
// 00566c2c  884609               mov byte ptr [esi + 9], al
// 00566c2f  eb07                 jmp 0x566c38
// 00566c31  c7460400000000       mov dword ptr [esi + 4], 0
// 00566c38  c6460801             mov byte ptr [esi + 8], 1
// 00566c3c  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00566c40  807f0800             cmp byte ptr [edi + 8], 0
// 00566c44  7522                 jne 0x566c68
// 00566c46  8b4f04               mov ecx, dword ptr [edi + 4]
// 00566c49  85c9                 test ecx, ecx
// 00566c4b  7410                 je 0x566c5d
// 00566c4d  ff15b0e57700         call dword ptr [0x77e5b0]
// 00566c53  83f8ff               cmp eax, -1
// 00566c56  7405                 je 0x566c5d
// 00566c58  884709               mov byte ptr [edi + 9], al
// 00566c5b  eb07                 jmp 0x566c64
// 00566c5d  c7470400000000       mov dword ptr [edi + 4], 0
// 00566c64  c6470801             mov byte ptr [edi + 8], 1
// 00566c68  8b7604               mov esi, dword ptr [esi + 4]
// 00566c6b  85f6                 test esi, esi
// 00566c6d  7509                 jne 0x566c78
// 00566c6f  397704               cmp dword ptr [edi + 4], esi
// 00566c72  740a                 je 0x566c7e
// 00566c74  85f6                 test esi, esi
// 00566c76  7410                 je 0x566c88
// 00566c78  837f0400             cmp dword ptr [edi + 4], 0
// 00566c7c  740a                 je 0x566c88
// 00566c7e  5f                   pop edi
// 00566c7f  b801000000           mov eax, 1
// 00566c84  5e                   pop esi
// 00566c85  c20400               ret 4
// 00566c88  5f                   pop edi
// 00566c89  33c0                 xor eax, eax
// 00566c8b  5e                   pop esi
// 00566c8c  c20400               ret 4
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBE_NABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
