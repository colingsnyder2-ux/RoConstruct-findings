// roc 2009-12 0079e4d0  unit: seg_00790000  size: 744 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079e4d0
//
// 0079e4d0  81ec38040000         sub esp, 0x438
// 0079e4d6  53                   push ebx
// 0079e4d7  55                   push ebp
// 0079e4d8  56                   push esi
// 0079e4d9  57                   push edi
// 0079e4da  8bbc244c040000       mov edi, dword ptr [esp + 0x44c]
// 0079e4e1  8d442434             lea eax, [esp + 0x34]
// 0079e4e5  50                   push eax
// 0079e4e6  bd01000000           mov ebp, 1
// 0079e4eb  55                   push ebp
// 0079e4ec  57                   push edi
// 0079e4ed  e87ec2feff           call 0x78a770
// 0079e4f2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0079e4f6  8d542448             lea edx, [esp + 0x48]
// 0079e4fa  8bd8                 mov ebx, eax
// 0079e4fc  52                   push edx
// 0079e4fd  8d3419               lea esi, [ecx + ebx]
// 0079e500  57                   push edi
// 0079e501  8974244c             mov dword ptr [esp + 0x4c], esi
// 0079e505  e826bcfeff           call 0x78a130
// 0079e50a  83c414               add esp, 0x14
// 0079e50d  3bde                 cmp ebx, esi
// 0079e50f  0f8318020000         jae 0x79e72d
// 0079e515  803b25               cmp byte ptr [ebx], 0x25
// 0079e518  742c                 je 0x79e546
// 0079e51a  8d842448020000       lea eax, [esp + 0x248]
// 0079e521  3944243c             cmp dword ptr [esp + 0x3c], eax
// 0079e525  720d                 jb 0x79e534
// 0079e527  8d4c243c             lea ecx, [esp + 0x3c]
// 0079e52b  51                   push ecx
// 0079e52c  e89fbafeff           call 0x789fd0
// 0079e531  83c404               add esp, 4
// 0079e534  8a13                 mov dl, byte ptr [ebx]
// 0079e536  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0079e53a  8810                 mov byte ptr [eax], dl
// 0079e53c  ff44243c             inc dword ptr [esp + 0x3c]
// 0079e540  43                   inc ebx
// 0079e541  e9dd010000           jmp 0x79e723
// 0079e546  43                   inc ebx
// 0079e547  803b25               cmp byte ptr [ebx], 0x25
// 0079e54a  752c                 jne 0x79e578
// 0079e54c  8d8c2448020000       lea ecx, [esp + 0x248]
// 0079e553  394c243c             cmp dword ptr [esp + 0x3c], ecx
// 0079e557  720d                 jb 0x79e566
// 0079e559  8d54243c             lea edx, [esp + 0x3c]
// 0079e55d  52                   push edx
// 0079e55e  e86dbafeff           call 0x789fd0
// 0079e563  83c404               add esp, 4
// 0079e566  8a03                 mov al, byte ptr [ebx]
// 0079e568  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079e56c  8801                 mov byte ptr [ecx], al
// 0079e56e  ff44243c             inc dword ptr [esp + 0x3c]
// 0079e572  43                   inc ebx
// 0079e573  e9ab010000           jmp 0x79e723
// 0079e578  8d542414             lea edx, [esp + 0x14]
// 0079e57c  52                   push edx
// 0079e57d  57                   push edi
// 0079e57e  45                   inc ebp
// 0079e57f  e87cfeffff           call 0x79e400
// 0079e584  8bd8                 mov ebx, eax
// 0079e586  0fbe03               movsx eax, byte ptr [ebx]
// 0079e589  83e845               sub eax, 0x45
// 0079e58c  83c408               add esp, 8
// 0079e58f  43                   inc ebx
// 0079e590  83f833               cmp eax, 0x33
// 0079e593  0f87b1010000         ja 0x79e74a
// 0079e599  0fb68084e77900       movzx eax, byte ptr [eax + 0x79e784]
// 0079e5a0  ff248568e77900       jmp dword ptr [eax*4 + 0x79e768]
// 0079e5a7  55                   push ebp
// 0079e5a8  57                   push edi
// 0079e5a9  e882c2feff           call 0x78a830
// 0079e5ae  e83d670500           call 0x7f4cf0
// 0079e5b3  50                   push eax
// 0079e5b4  8d4c2420             lea ecx, [esp + 0x20]
// 0079e5b8  51                   push ecx
// 0079e5b9  8d942458020000       lea edx, [esp + 0x258]
// 0079e5c0  52                   push edx
// 0079e5c1  ff15dcb79800         call dword ptr [0x98b7dc]
// 0079e5c7  83c414               add esp, 0x14
// 0079e5ca  e92b010000           jmp 0x79e6fa
// 0079e5cf  8d442414             lea eax, [esp + 0x14]
// 0079e5d3  8d5001               lea edx, [eax + 1]
// 0079e5d6  8a08                 mov cl, byte ptr [eax]
// 0079e5d8  40                   inc eax
// 0079e5d9  84c9                 test cl, cl
// 0079e5db  75f9                 jne 0x79e5d6
// 0079e5dd  2bc2                 sub eax, edx
// 0079e5df  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 0079e5e3  ba6c000000           mov edx, 0x6c
// 0079e5e8  6689540413           mov word ptr [esp + eax + 0x13], dx
// 0079e5ed  55                   push ebp
// 0079e5ee  57                   push edi
// 0079e5ef  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 0079e5f3  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 0079e5f8  e833c2feff           call 0x78a830
// 0079e5fd  e8ee660500           call 0x7f4cf0
// 0079e602  50                   push eax
// 0079e603  8d442420             lea eax, [esp + 0x20]
// 0079e607  50                   push eax
// 0079e608  8d8c2458020000       lea ecx, [esp + 0x258]
// 0079e60f  51                   push ecx
// 0079e610  ff15dcb79800         call dword ptr [0x98b7dc]
// 0079e616  83c414               add esp, 0x14
// 0079e619  e9dc000000           jmp 0x79e6fa
// 0079e61e  8d442414             lea eax, [esp + 0x14]
// 0079e622  8d5001               lea edx, [eax + 1]
// 0079e625  8a08                 mov cl, byte ptr [eax]
// 0079e627  40                   inc eax
// 0079e628  84c9                 test cl, cl
// 0079e62a  75f9                 jne 0x79e625
// 0079e62c  2bc2                 sub eax, edx
// 0079e62e  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 0079e632  ba6c000000           mov edx, 0x6c
// 0079e637  6689540413           mov word ptr [esp + eax + 0x13], dx
// 0079e63c  55                   push ebp
// 0079e63d  57                   push edi
// 0079e63e  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 0079e642  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 0079e647  e8e4c1feff           call 0x78a830
// 0079e64c  d97c241a             fnstcw word ptr [esp + 0x1a]
// 0079e650  0fb744241a           movzx eax, word ptr [esp + 0x1a]
// 0079e655  0d000c0000           or eax, 0xc00
// 0079e65a  89442434             mov dword ptr [esp + 0x34], eax
// 0079e65e  d96c2434             fldcw word ptr [esp + 0x34]
// 0079e662  df7c2434             fistp qword ptr [esp + 0x34]
// 0079e666  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079e66a  d96c241a             fldcw word ptr [esp + 0x1a]
// 0079e66e  e940ffffff           jmp 0x79e5b3
// 0079e673  55                   push ebp
// 0079e674  57                   push edi
// 0079e675  e8b6c1feff           call 0x78a830
// 0079e67a  dd1c24               fstp qword ptr [esp]
// 0079e67d  8d44241c             lea eax, [esp + 0x1c]
// 0079e681  50                   push eax
// 0079e682  8d8c2454020000       lea ecx, [esp + 0x254]
// 0079e689  51                   push ecx
// 0079e68a  ff15dcb79800         call dword ptr [0x98b7dc]
// 0079e690  83c410               add esp, 0x10
// 0079e693  eb65                 jmp 0x79e6fa
// 0079e695  8bcd                 mov ecx, ebp
// 0079e697  8d74243c             lea esi, [esp + 0x3c]
// 0079e69b  8bd7                 mov edx, edi
// 0079e69d  e8fefbffff           call 0x79e2a0
// 0079e6a2  e97c000000           jmp 0x79e723
// 0079e6a7  8d542428             lea edx, [esp + 0x28]
// 0079e6ab  52                   push edx
// 0079e6ac  55                   push ebp
// 0079e6ad  57                   push edi
// 0079e6ae  e8bdc0feff           call 0x78a770
// 0079e6b3  8bf0                 mov esi, eax
// 0079e6b5  8d442420             lea eax, [esp + 0x20]
// 0079e6b9  6a2e                 push 0x2e
// 0079e6bb  50                   push eax
// 0079e6bc  ff1530b89800         call dword ptr [0x98b830]
// 0079e6c2  83c414               add esp, 0x14
// 0079e6c5  85c0                 test eax, eax
// 0079e6c7  751a                 jne 0x79e6e3
// 0079e6c9  837c242864           cmp dword ptr [esp + 0x28], 0x64
// 0079e6ce  7213                 jb 0x79e6e3
// 0079e6d0  55                   push ebp
// 0079e6d1  57                   push edi
// 0079e6d2  e889a2feff           call 0x788960
// 0079e6d7  8d4c2444             lea ecx, [esp + 0x44]
// 0079e6db  51                   push ecx
// 0079e6dc  e8cfb9feff           call 0x78a0b0
// 0079e6e1  eb3d                 jmp 0x79e720
// 0079e6e3  56                   push esi
// 0079e6e4  8d542418             lea edx, [esp + 0x18]
// 0079e6e8  52                   push edx
// 0079e6e9  8d842450020000       lea eax, [esp + 0x250]
// 0079e6f0  50                   push eax
// 0079e6f1  ff15dcb79800         call dword ptr [0x98b7dc]
// 0079e6f7  83c40c               add esp, 0xc
// 0079e6fa  8d842448020000       lea eax, [esp + 0x248]
// 0079e701  8d5001               lea edx, [eax + 1]
// 0079e704  8a08                 mov cl, byte ptr [eax]
// 0079e706  40                   inc eax
// 0079e707  84c9                 test cl, cl
// 0079e709  75f9                 jne 0x79e704
// 0079e70b  2bc2                 sub eax, edx
// 0079e70d  50                   push eax
// 0079e70e  8d8c244c020000       lea ecx, [esp + 0x24c]
// 0079e715  51                   push ecx
// 0079e716  8d542444             lea edx, [esp + 0x44]
// 0079e71a  52                   push edx
// 0079e71b  e8f0b8feff           call 0x78a010
// 0079e720  83c40c               add esp, 0xc
// 0079e723  3b5c2438             cmp ebx, dword ptr [esp + 0x38]
// 0079e727  0f82e8fdffff         jb 0x79e515
// 0079e72d  8d4c243c             lea ecx, [esp + 0x3c]
// 0079e731  51                   push ecx
// 0079e732  e839b9feff           call 0x78a070
// 0079e737  83c404               add esp, 4
// 0079e73a  5f                   pop edi
// 0079e73b  5e                   pop esi
// 0079e73c  5d                   pop ebp
// 0079e73d  b801000000           mov eax, 1
// 0079e742  5b                   pop ebx
// 0079e743  81c438040000         add esp, 0x438
// 0079e749  c3                   ret 
// 0079e74a  0fbe43ff             movsx eax, byte ptr [ebx - 1]
// 0079e74e  50                   push eax
// 0079e74f  686cb29e00           push 0x9eb26c
// 0079e754  57                   push edi
// 0079e755  e896b5feff           call 0x789cf0
// 0079e75a  83c40c               add esp, 0xc
// 0079e75d  5f                   pop edi
// 0079e75e  5e                   pop esi
// 0079e75f  5d                   pop ebp
// 0079e760  5b                   pop ebx
// 0079e761  81c438040000         add esp, 0x438
// 0079e767  c3                   ret 
// 0079e768  73e6                 jae 0x79e750
// 0079e76a  7900                 jns 0x79e76c
// 0079e76c  1e                   push ds
// 0079e76d  e679                 out 0x79, al
// 0079e76f  00a7e57900cf         add byte ptr [edi - 0x30ff861b], ah
// 0079e775  e579                 in eax, 0x79
// 0079e777  0095e67900a7         add byte ptr [ebp - 0x58ff861a], dl
// 0079e77d  e679                 out 0x79, al
// 0079e77f  004ae7               add byte ptr [edx - 0x19], cl
// 0079e782  7900                 jns 0x79e784
// 0079e784  0006                 add byte ptr [esi], al
// 0079e786  0006                 add byte ptr [esi], al
// 0079e788  06                   push es
// 0079e789  06                   push es
// 0079e78a  06                   push es
// 0079e78b  06                   push es
// 0079e78c  06                   push es
// 0079e78d  06                   push es
// 0079e78e  06                   push es
// 0079e78f  06                   push es
// 0079e790  06                   push es
// 0079e791  06                   push es
// 0079e792  06                   push es
// 0079e793  06                   push es
// 0079e794  06                   push es
// 0079e795  06                   push es
// 0079e796  06                   push es
// 0079e797  0106                 add dword ptr [esi], eax
// 0079e799  06                   push es
// 0079e79a  06                   push es
// 0079e79b  06                   push es
// 0079e79c  06                   push es
// 0079e79d  06                   push es
// 0079e79e  06                   push es
// 0079e79f  06                   push es
// 0079e7a0  06                   push es
// 0079e7a1  06                   push es
// 0079e7a2  0203                 add al, byte ptr [ebx]
// 0079e7a4  0000                 add byte ptr [eax], al
// 0079e7a6  0006                 add byte ptr [esi], al
// 0079e7a8  0306                 add eax, dword ptr [esi]
// 0079e7aa  06                   push es
// 0079e7ab  06                   push es
// 0079e7ac  06                   push es
// 0079e7ad  06                   push es
// 0079e7ae  0106                 add dword ptr [esi], eax
// 0079e7b0  0406                 add al, 6
// 0079e7b2  0506010606           add eax, 0x6060106
// copied from an identical function in another client (function _str_format)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c