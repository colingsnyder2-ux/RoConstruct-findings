// roc 2010-06 0047b880  unit: DxUserInput  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047b880
//
// 0047b880  56                   push esi
// 0047b881  8bf1                 mov esi, ecx
// 0047b883  807e5400             cmp byte ptr [esi + 0x54], 0
// 0047b887  7543                 jne 0x47b8cc
// 0047b889  8b4644               mov eax, dword ptr [esi + 0x44]
// 0047b88c  57                   push edi
// 0047b88d  8d7e44               lea edi, [esi + 0x44]
// 0047b890  83f8fc               cmp eax, -4
// 0047b893  740f                 je 0x47b8a4
// 0047b895  85c0                 test eax, eax
// 0047b897  7405                 je 0x47b89e
// 0047b899  3b464c               cmp eax, dword ptr [esi + 0x4c]
// 0047b89c  7406                 je 0x47b8a4
// 0047b89e  ff150ca99e00         call dword ptr [0x9ea90c]
// 0047b8a4  8b4704               mov eax, dword ptr [edi + 4]
// 0047b8a7  3b4650               cmp eax, dword ptr [esi + 0x50]
// 0047b8aa  741a                 je 0x47b8c6
// 0047b8ac  8b5650               mov edx, dword ptr [esi + 0x50]
// 0047b8af  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0047b8b2  8d4e58               lea ecx, [esi + 0x58]
// 0047b8b5  51                   push ecx
// 0047b8b6  52                   push edx
// 0047b8b7  50                   push eax
// 0047b8b8  57                   push edi
// 0047b8b9  8bce                 mov ecx, esi
// 0047b8bb  e8e0f9ffff           call 0x47b2a0
// 0047b8c0  5f                   pop edi
// 0047b8c1  884654               mov byte ptr [esi + 0x54], al
// 0047b8c4  5e                   pop esi
// 0047b8c5  c3                   ret 
// 0047b8c6  32c0                 xor al, al
// 0047b8c8  884654               mov byte ptr [esi + 0x54], al
// 0047b8cb  5f                   pop edi
// 0047b8cc  5e                   pop esi
// 0047b8cd  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?initialize@?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
