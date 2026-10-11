// roc 2007-03 005678d0  unit: seg_00560000  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005678d0
//
// 005678d0  83ec0c               sub esp, 0xc
// 005678d3  53                   push ebx
// 005678d4  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005678d8  8bc3                 mov eax, ebx
// 005678da  8d5001               lea edx, [eax + 1]
// 005678dd  8d4900               lea ecx, [ecx]
// 005678e0  8a08                 mov cl, byte ptr [eax]
// 005678e2  83c001               add eax, 1
// 005678e5  84c9                 test cl, cl
// 005678e7  75f7                 jne 0x5678e0
// 005678e9  2bc2                 sub eax, edx
// 005678eb  0f84c3000000         je 0x5679b4
// 005678f1  55                   push ebp
// 005678f2  56                   push esi
// 005678f3  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005678f7  57                   push edi
// 005678f8  8b3dc8e97700         mov edi, dword ptr [0x77e9c8]
// 005678fe  8be8                 mov ebp, eax
// 00567900  8a03                 mov al, byte ptr [ebx]
// 00567902  83c301               add ebx, 1
// 00567905  3c3c                 cmp al, 0x3c
// 00567907  88442410             mov byte ptr [esp + 0x10], al
// 0056790b  7513                 jne 0x567920
// 0056790d  68e8b07a00           push 0x7ab0e8
// 00567912  56                   push esi
// 00567913  e8283bf0ff           call 0x46b440
// 00567918  83c408               add esp, 8
// 0056791b  e988000000           jmp 0x5679a8
// 00567920  3c3e                 cmp al, 0x3e
// 00567922  7510                 jne 0x567934
// 00567924  68e0b07a00           push 0x7ab0e0
// 00567929  56                   push esi
// 0056792a  e8113bf0ff           call 0x46b440
// 0056792f  83c408               add esp, 8
// 00567932  eb74                 jmp 0x5679a8
// 00567934  3c26                 cmp al, 0x26
// 00567936  7510                 jne 0x567948
// 00567938  68d8b07a00           push 0x7ab0d8
// 0056793d  56                   push esi
// 0056793e  e8fd3af0ff           call 0x46b440
// 00567943  83c408               add esp, 8
// 00567946  eb60                 jmp 0x5679a8
// 00567948  3c22                 cmp al, 0x22
// 0056794a  7510                 jne 0x56795c
// 0056794c  68d0b07a00           push 0x7ab0d0
// 00567951  56                   push esi
// 00567952  e8e93af0ff           call 0x46b440
// 00567957  83c408               add esp, 8
// 0056795a  eb4c                 jmp 0x5679a8
// 0056795c  3c27                 cmp al, 0x27
// 0056795e  7510                 jne 0x567970
// 00567960  68c8b07a00           push 0x7ab0c8
// 00567965  56                   push esi
// 00567966  e8d53af0ff           call 0x46b440
// 0056796b  83c408               add esp, 8
// 0056796e  eb38                 jmp 0x5679a8
// 00567970  8ac8                 mov cl, al
// 00567972  80e920               sub cl, 0x20
// 00567975  80f95e               cmp cl, 0x5e
// 00567978  7710                 ja 0x56798a
// 0056797a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056797e  52                   push edx
// 0056797f  56                   push esi
// 00567980  e8cbd6fdff           call 0x545050
// 00567985  83c408               add esp, 8
// 00567988  eb1e                 jmp 0x5679a8
// 0056798a  0fb6c0               movzx eax, al
// 0056798d  50                   push eax
// 0056798e  8d4c2418             lea ecx, [esp + 0x18]
// 00567992  68c0b07a00           push 0x7ab0c0
// 00567997  51                   push ecx
// 00567998  ffd7                 call edi
// 0056799a  8d542420             lea edx, [esp + 0x20]
// 0056799e  52                   push edx
// 0056799f  56                   push esi
// 005679a0  e89b3af0ff           call 0x46b440
// 005679a5  83c414               add esp, 0x14
// 005679a8  83ed01               sub ebp, 1
// 005679ab  0f854fffffff         jne 0x567900
// 005679b1  5f                   pop edi
// 005679b2  5e                   pop esi
// 005679b3  5d                   pop ebp
// 005679b4  5b                   pop ebx
// 005679b5  83c40c               add esp, 0xc
// 005679b8  c3                   ret 
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?encodedWrite@TextXmlWriter@@SAXAAV?$basic_ostream@DU?$char_traits@D@std@@@std@@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
