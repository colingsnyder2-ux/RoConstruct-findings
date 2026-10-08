// roc 2007-03 00592fa0  unit: seg_00590000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00592fa0
//
// 00592fa0  56                   push esi
// 00592fa1  8bf1                 mov esi, ecx
// 00592fa3  807e5400             cmp byte ptr [esi + 0x54], 0
// 00592fa7  7543                 jne 0x592fec
// 00592fa9  8b4644               mov eax, dword ptr [esi + 0x44]
// 00592fac  83f8fe               cmp eax, -2
// 00592faf  57                   push edi
// 00592fb0  8d7e44               lea edi, [esi + 0x44]
// 00592fb3  740f                 je 0x592fc4
// 00592fb5  85c0                 test eax, eax
// 00592fb7  7405                 je 0x592fbe
// 00592fb9  3b464c               cmp eax, dword ptr [esi + 0x4c]
// 00592fbc  7406                 je 0x592fc4
// 00592fbe  ff1544e97700         call dword ptr [0x77e944]
// 00592fc4  8b4704               mov eax, dword ptr [edi + 4]
// 00592fc7  3b4650               cmp eax, dword ptr [esi + 0x50]
// 00592fca  741a                 je 0x592fe6
// 00592fcc  8b5650               mov edx, dword ptr [esi + 0x50]
// 00592fcf  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00592fd2  8d4e58               lea ecx, [esi + 0x58]
// 00592fd5  51                   push ecx
// 00592fd6  52                   push edx
// 00592fd7  50                   push eax
// 00592fd8  57                   push edi
// 00592fd9  8bce                 mov ecx, esi
// 00592fdb  e820f6ffff           call 0x592600
// 00592fe0  5f                   pop edi
// 00592fe1  884654               mov byte ptr [esi + 0x54], al
// 00592fe4  5e                   pop esi
// 00592fe5  c3                   ret 
// 00592fe6  32c0                 xor al, al
// 00592fe8  884654               mov byte ptr [esi + 0x54], al
// 00592feb  5f                   pop edi
// 00592fec  5e                   pop esi
// 00592fed  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?initialize@?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
