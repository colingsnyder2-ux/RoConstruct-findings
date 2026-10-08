// roc 2009-06 0046ce60  unit: DxUserInput  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046ce60
//
// 0046ce60  56                   push esi
// 0046ce61  8bf1                 mov esi, ecx
// 0046ce63  807e5400             cmp byte ptr [esi + 0x54], 0
// 0046ce67  7543                 jne 0x46ceac
// 0046ce69  8b4644               mov eax, dword ptr [esi + 0x44]
// 0046ce6c  57                   push edi
// 0046ce6d  8d7e44               lea edi, [esi + 0x44]
// 0046ce70  83f8fc               cmp eax, -4
// 0046ce73  740f                 je 0x46ce84
// 0046ce75  85c0                 test eax, eax
// 0046ce77  7405                 je 0x46ce7e
// 0046ce79  3b464c               cmp eax, dword ptr [esi + 0x4c]
// 0046ce7c  7406                 je 0x46ce84
// 0046ce7e  ff15ace98900         call dword ptr [0x89e9ac]
// 0046ce84  8b4704               mov eax, dword ptr [edi + 4]
// 0046ce87  3b4650               cmp eax, dword ptr [esi + 0x50]
// 0046ce8a  741a                 je 0x46cea6
// 0046ce8c  8b5650               mov edx, dword ptr [esi + 0x50]
// 0046ce8f  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0046ce92  8d4e58               lea ecx, [esi + 0x58]
// 0046ce95  51                   push ecx
// 0046ce96  52                   push edx
// 0046ce97  50                   push eax
// 0046ce98  57                   push edi
// 0046ce99  8bce                 mov ecx, esi
// 0046ce9b  e8e0f9ffff           call 0x46c880
// 0046cea0  5f                   pop edi
// 0046cea1  884654               mov byte ptr [esi + 0x54], al
// 0046cea4  5e                   pop esi
// 0046cea5  c3                   ret 
// 0046cea6  32c0                 xor al, al
// 0046cea8  884654               mov byte ptr [esi + 0x54], al
// 0046ceab  5f                   pop edi
// 0046ceac  5e                   pop esi
// 0046cead  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ?initialize@?$token_iterator@V?$char_separator@DU?$char_traits@D@std@@@boost@@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@boost@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
