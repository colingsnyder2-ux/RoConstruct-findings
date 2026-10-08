// roc 2008-06 005e0160  unit: RBX::P8Lighting::?$GetSetImpl  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0160
//
// 005e0160  56                   push esi
// 005e0161  8bf1                 mov esi, ecx
// 005e0163  807e5400             cmp byte ptr [esi + 0x54], 0
// 005e0167  7543                 jne 0x5e01ac
// 005e0169  8b4644               mov eax, dword ptr [esi + 0x44]
// 005e016c  57                   push edi
// 005e016d  8d7e44               lea edi, [esi + 0x44]
// 005e0170  83f8fc               cmp eax, -4
// 005e0173  740f                 je 0x5e0184
// 005e0175  85c0                 test eax, eax
// 005e0177  7405                 je 0x5e017e
// 005e0179  3b464c               cmp eax, dword ptr [esi + 0x4c]
// 005e017c  7406                 je 0x5e0184
// 005e017e  ff1590288000         call dword ptr [0x802890]
// 005e0184  8b4704               mov eax, dword ptr [edi + 4]
// 005e0187  3b4650               cmp eax, dword ptr [esi + 0x50]
// 005e018a  741a                 je 0x5e01a6
// 005e018c  8b5650               mov edx, dword ptr [esi + 0x50]
// 005e018f  8b464c               mov eax, dword ptr [esi + 0x4c]
// 005e0192  8d4e58               lea ecx, [esi + 0x58]
// 005e0195  51                   push ecx
// 005e0196  52                   push edx
// 005e0197  50                   push eax
// 005e0198  57                   push edi
// 005e0199  8bce                 mov ecx, esi
// 005e019b  e880f8ffff           call 0x5dfa20
// 005e01a0  5f                   pop edi
// 005e01a1  884654               mov byte ptr [esi + 0x54], al
// 005e01a4  5e                   pop esi
// 005e01a5  c3                   ret 
// 005e01a6  32c0                 xor al, al
// 005e01a8  884654               mov byte ptr [esi + 0x54], al
// 005e01ab  5f                   pop edi
// 005e01ac  5e                   pop esi
// 005e01ad  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?initialize@?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
