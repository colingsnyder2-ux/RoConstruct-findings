// roc 2009-12 00475ce0  unit: DxUserInput  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00475ce0
//
// 00475ce0  56                   push esi
// 00475ce1  8bf1                 mov esi, ecx
// 00475ce3  807e5400             cmp byte ptr [esi + 0x54], 0
// 00475ce7  7543                 jne 0x475d2c
// 00475ce9  8b4644               mov eax, dword ptr [esi + 0x44]
// 00475cec  57                   push edi
// 00475ced  8d7e44               lea edi, [esi + 0x44]
// 00475cf0  83f8fc               cmp eax, -4
// 00475cf3  740f                 je 0x475d04
// 00475cf5  85c0                 test eax, eax
// 00475cf7  7405                 je 0x475cfe
// 00475cf9  3b464c               cmp eax, dword ptr [esi + 0x4c]
// 00475cfc  7406                 je 0x475d04
// 00475cfe  ff1560b79800         call dword ptr [0x98b760]
// 00475d04  8b4704               mov eax, dword ptr [edi + 4]
// 00475d07  3b4650               cmp eax, dword ptr [esi + 0x50]
// 00475d0a  741a                 je 0x475d26
// 00475d0c  8b5650               mov edx, dword ptr [esi + 0x50]
// 00475d0f  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00475d12  8d4e58               lea ecx, [esi + 0x58]
// 00475d15  51                   push ecx
// 00475d16  52                   push edx
// 00475d17  50                   push eax
// 00475d18  57                   push edi
// 00475d19  8bce                 mov ecx, esi
// 00475d1b  e8e0f9ffff           call 0x475700
// 00475d20  5f                   pop edi
// 00475d21  884654               mov byte ptr [esi + 0x54], al
// 00475d24  5e                   pop esi
// 00475d25  c3                   ret 
// 00475d26  32c0                 xor al, al
// 00475d28  884654               mov byte ptr [esi + 0x54], al
// 00475d2b  5f                   pop edi
// 00475d2c  5e                   pop esi
// 00475d2d  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?initialize@?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
