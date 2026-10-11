// roc 2007-08 005656b0  unit: RBX::Verb  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005656b0
//
// 005656b0  56                   push esi
// 005656b1  8bf1                 mov esi, ecx
// 005656b3  807e0800             cmp byte ptr [esi + 8], 0
// 005656b7  57                   push edi
// 005656b8  7522                 jne 0x5656dc
// 005656ba  8b4e04               mov ecx, dword ptr [esi + 4]
// 005656bd  85c9                 test ecx, ecx
// 005656bf  7410                 je 0x5656d1
// 005656c1  ff15bce47700         call dword ptr [0x77e4bc]
// 005656c7  83f8ff               cmp eax, -1
// 005656ca  7405                 je 0x5656d1
// 005656cc  884609               mov byte ptr [esi + 9], al
// 005656cf  eb07                 jmp 0x5656d8
// 005656d1  c7460400000000       mov dword ptr [esi + 4], 0
// 005656d8  c6460801             mov byte ptr [esi + 8], 1
// 005656dc  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005656e0  807f0800             cmp byte ptr [edi + 8], 0
// 005656e4  7522                 jne 0x565708
// 005656e6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005656e9  85c9                 test ecx, ecx
// 005656eb  7410                 je 0x5656fd
// 005656ed  ff15bce47700         call dword ptr [0x77e4bc]
// 005656f3  83f8ff               cmp eax, -1
// 005656f6  7405                 je 0x5656fd
// 005656f8  884709               mov byte ptr [edi + 9], al
// 005656fb  eb07                 jmp 0x565704
// 005656fd  c7470400000000       mov dword ptr [edi + 4], 0
// 00565704  c6470801             mov byte ptr [edi + 8], 1
// 00565708  8b7604               mov esi, dword ptr [esi + 4]
// 0056570b  85f6                 test esi, esi
// 0056570d  7509                 jne 0x565718
// 0056570f  397704               cmp dword ptr [edi + 4], esi
// 00565712  740a                 je 0x56571e
// 00565714  85f6                 test esi, esi
// 00565716  7410                 je 0x565728
// 00565718  837f0400             cmp dword ptr [edi + 4], 0
// 0056571c  740a                 je 0x565728
// 0056571e  5f                   pop edi
// 0056571f  b801000000           mov eax, 1
// 00565724  5e                   pop esi
// 00565725  c20400               ret 4
// 00565728  5f                   pop edi
// 00565729  33c0                 xor eax, eax
// 0056572b  5e                   pop esi
// 0056572c  c20400               ret 4
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QBE_NABV12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
