// roc 2008-06 0040a070  unit: RBX::GlobalSettings::Item  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040a070
//
// 0040a070  53                   push ebx
// 0040a071  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0040a077  56                   push esi
// 0040a078  8bf1                 mov esi, ecx
// 0040a07a  8b06                 mov eax, dword ptr [esi]
// 0040a07c  57                   push edi
// 0040a07d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0040a081  85c0                 test eax, eax
// 0040a083  7404                 je 0x40a089
// 0040a085  3b07                 cmp eax, dword ptr [edi]
// 0040a087  7402                 je 0x40a08b
// 0040a089  ffd3                 call ebx
// 0040a08b  8b4604               mov eax, dword ptr [esi + 4]
// 0040a08e  3b4704               cmp eax, dword ptr [edi + 4]
// 0040a091  7536                 jne 0x40a0c9
// 0040a093  8b06                 mov eax, dword ptr [esi]
// 0040a095  85c0                 test eax, eax
// 0040a097  7405                 je 0x40a09e
// 0040a099  3b4608               cmp eax, dword ptr [esi + 8]
// 0040a09c  7402                 je 0x40a0a0
// 0040a09e  ffd3                 call ebx
// 0040a0a0  8b4e04               mov ecx, dword ptr [esi + 4]
// 0040a0a3  3b4e0c               cmp ecx, dword ptr [esi + 0xc]
// 0040a0a6  7416                 je 0x40a0be
// 0040a0a8  8b4610               mov eax, dword ptr [esi + 0x10]
// 0040a0ab  85c0                 test eax, eax
// 0040a0ad  7405                 je 0x40a0b4
// 0040a0af  3b4710               cmp eax, dword ptr [edi + 0x10]
// 0040a0b2  7402                 je 0x40a0b6
// 0040a0b4  ffd3                 call ebx
// 0040a0b6  8b5614               mov edx, dword ptr [esi + 0x14]
// 0040a0b9  3b5714               cmp edx, dword ptr [edi + 0x14]
// 0040a0bc  750b                 jne 0x40a0c9
// 0040a0be  5f                   pop edi
// 0040a0bf  5e                   pop esi
// 0040a0c0  b801000000           mov eax, 1
// 0040a0c5  5b                   pop ebx
// 0040a0c6  c20400               ret 4
// 0040a0c9  5f                   pop edi
// 0040a0ca  5e                   pop esi
// 0040a0cb  33c0                 xor eax, eax
// 0040a0cd  5b                   pop ebx
// 0040a0ce  c20400               ret 4
// library rbxgs/v8datamodel\FlagStand.cpp (function ?equal@named_slot_map_iterator@detail@signals@boost@@QBE_NABV1234@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/FlagStand.cpp
