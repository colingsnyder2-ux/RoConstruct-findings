// roc 2007-08 005cb360  unit: seg_005c0000  size: 760 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cb360
//
// 005cb360  81ec38040000         sub esp, 0x438
// 005cb366  53                   push ebx
// 005cb367  55                   push ebp
// 005cb368  56                   push esi
// 005cb369  57                   push edi
// 005cb36a  8bbc244c040000       mov edi, dword ptr [esp + 0x44c]
// 005cb371  8d442434             lea eax, [esp + 0x34]
// 005cb375  50                   push eax
// 005cb376  bd01000000           mov ebp, 1
// 005cb37b  55                   push ebp
// 005cb37c  57                   push edi
// 005cb37d  e8ce3fffff           call 0x5bf350
// 005cb382  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005cb386  8d542448             lea edx, [esp + 0x48]
// 005cb38a  8bd8                 mov ebx, eax
// 005cb38c  52                   push edx
// 005cb38d  8d3419               lea esi, [ecx + ebx]
// 005cb390  57                   push edi
// 005cb391  8974244c             mov dword ptr [esp + 0x4c], esi
// 005cb395  e8a639ffff           call 0x5bed40
// 005cb39a  83c414               add esp, 0x14
// 005cb39d  3bde                 cmp ebx, esi
// 005cb39f  0f8326020000         jae 0x5cb5cb
// 005cb3a5  803b25               cmp byte ptr [ebx], 0x25
// 005cb3a8  742f                 je 0x5cb3d9
// 005cb3aa  8d842448020000       lea eax, [esp + 0x248]
// 005cb3b1  3944243c             cmp dword ptr [esp + 0x3c], eax
// 005cb3b5  720d                 jb 0x5cb3c4
// 005cb3b7  8d4c243c             lea ecx, [esp + 0x3c]
// 005cb3bb  51                   push ecx
// 005cb3bc  e80f38ffff           call 0x5bebd0
// 005cb3c1  83c404               add esp, 4
// 005cb3c4  8a13                 mov dl, byte ptr [ebx]
// 005cb3c6  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005cb3ca  8810                 mov byte ptr [eax], dl
// 005cb3cc  8344243c01           add dword ptr [esp + 0x3c], 1
// 005cb3d1  83c301               add ebx, 1
// 005cb3d4  e9e8010000           jmp 0x5cb5c1
// 005cb3d9  83c301               add ebx, 1
// 005cb3dc  803b25               cmp byte ptr [ebx], 0x25
// 005cb3df  752f                 jne 0x5cb410
// 005cb3e1  8d8c2448020000       lea ecx, [esp + 0x248]
// 005cb3e8  394c243c             cmp dword ptr [esp + 0x3c], ecx
// 005cb3ec  720d                 jb 0x5cb3fb
// 005cb3ee  8d54243c             lea edx, [esp + 0x3c]
// 005cb3f2  52                   push edx
// 005cb3f3  e8d837ffff           call 0x5bebd0
// 005cb3f8  83c404               add esp, 4
// 005cb3fb  8a03                 mov al, byte ptr [ebx]
// 005cb3fd  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005cb401  8801                 mov byte ptr [ecx], al
// 005cb403  8344243c01           add dword ptr [esp + 0x3c], 1
// 005cb408  83c301               add ebx, 1
// 005cb40b  e9b1010000           jmp 0x5cb5c1
// 005cb410  8d542414             lea edx, [esp + 0x14]
// 005cb414  52                   push edx
// 005cb415  57                   push edi
// 005cb416  83c501               add ebp, 1
// 005cb419  e852feffff           call 0x5cb270
// 005cb41e  8bd8                 mov ebx, eax
// 005cb420  0fbe03               movsx eax, byte ptr [ebx]
// 005cb423  83e845               sub eax, 0x45
// 005cb426  83c408               add esp, 8
// 005cb429  83c301               add ebx, 1
// 005cb42c  83f833               cmp eax, 0x33
// 005cb42f  0f87b3010000         ja 0x5cb5e8
// 005cb435  0fb68024b65c00       movzx eax, byte ptr [eax + 0x5cb624]
// 005cb43c  ff248508b65c00       jmp dword ptr [eax*4 + 0x5cb608]
// 005cb443  55                   push ebp
// 005cb444  57                   push edi
// 005cb445  e8c63fffff           call 0x5bf410
// 005cb44a  e811590600           call 0x630d60
// 005cb44f  50                   push eax
// 005cb450  8d4c2420             lea ecx, [esp + 0x20]
// 005cb454  51                   push ecx
// 005cb455  8d942458020000       lea edx, [esp + 0x258]
// 005cb45c  52                   push edx
// 005cb45d  ff1568e97700         call dword ptr [0x77e968]
// 005cb463  83c414               add esp, 0x14
// 005cb466  e927010000           jmp 0x5cb592
// 005cb46b  8d442414             lea eax, [esp + 0x14]
// 005cb46f  8d5001               lea edx, [eax + 1]
// 005cb472  8a08                 mov cl, byte ptr [eax]
// 005cb474  83c001               add eax, 1
// 005cb477  84c9                 test cl, cl
// 005cb479  75f7                 jne 0x5cb472
// 005cb47b  2bc2                 sub eax, edx
// 005cb47d  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 005cb481  66c74404136c00       mov word ptr [esp + eax + 0x13], 0x6c
// 005cb488  55                   push ebp
// 005cb489  57                   push edi
// 005cb48a  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 005cb48e  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 005cb493  e8783fffff           call 0x5bf410
// 005cb498  e8c3580600           call 0x630d60
// 005cb49d  50                   push eax
// 005cb49e  8d442420             lea eax, [esp + 0x20]
// 005cb4a2  50                   push eax
// 005cb4a3  8d8c2458020000       lea ecx, [esp + 0x258]
// 005cb4aa  51                   push ecx
// 005cb4ab  ff1568e97700         call dword ptr [0x77e968]
// 005cb4b1  83c414               add esp, 0x14
// 005cb4b4  e9d9000000           jmp 0x5cb592
// 005cb4b9  8d442414             lea eax, [esp + 0x14]
// 005cb4bd  8d5001               lea edx, [eax + 1]
// 005cb4c0  8a08                 mov cl, byte ptr [eax]
// 005cb4c2  83c001               add eax, 1
// 005cb4c5  84c9                 test cl, cl
// 005cb4c7  75f7                 jne 0x5cb4c0
// 005cb4c9  2bc2                 sub eax, edx
// 005cb4cb  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 005cb4cf  66c74404136c00       mov word ptr [esp + eax + 0x13], 0x6c
// 005cb4d6  55                   push ebp
// 005cb4d7  57                   push edi
// 005cb4d8  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 005cb4dc  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 005cb4e1  e82a3fffff           call 0x5bf410
// 005cb4e6  d97c241a             fnstcw word ptr [esp + 0x1a]
// 005cb4ea  0fb744241a           movzx eax, word ptr [esp + 0x1a]
// 005cb4ef  0d000c0000           or eax, 0xc00
// 005cb4f4  89442434             mov dword ptr [esp + 0x34], eax
// 005cb4f8  d96c2434             fldcw word ptr [esp + 0x34]
// 005cb4fc  df7c2434             fistp qword ptr [esp + 0x34]
// 005cb500  8b542434             mov edx, dword ptr [esp + 0x34]
// 005cb504  52                   push edx
// 005cb505  d96c241e             fldcw word ptr [esp + 0x1e]
// 005cb509  eb93                 jmp 0x5cb49e
// 005cb50b  55                   push ebp
// 005cb50c  57                   push edi
// 005cb50d  e8fe3effff           call 0x5bf410
// 005cb512  dd1c24               fstp qword ptr [esp]
// 005cb515  8d54241c             lea edx, [esp + 0x1c]
// 005cb519  52                   push edx
// 005cb51a  8d842454020000       lea eax, [esp + 0x254]
// 005cb521  50                   push eax
// 005cb522  ff1568e97700         call dword ptr [0x77e968]
// 005cb528  83c410               add esp, 0x10
// 005cb52b  eb65                 jmp 0x5cb592
// 005cb52d  8bcd                 mov ecx, ebp
// 005cb52f  8d74243c             lea esi, [esp + 0x3c]
// 005cb533  8bd7                 mov edx, edi
// 005cb535  e8d6fbffff           call 0x5cb110
// 005cb53a  e982000000           jmp 0x5cb5c1
// 005cb53f  8d4c2428             lea ecx, [esp + 0x28]
// 005cb543  51                   push ecx
// 005cb544  55                   push ebp
// 005cb545  57                   push edi
// 005cb546  e8053effff           call 0x5bf350
// 005cb54b  8d542420             lea edx, [esp + 0x20]
// 005cb54f  6a2e                 push 0x2e
// 005cb551  52                   push edx
// 005cb552  8bf0                 mov esi, eax
// 005cb554  ff1548e87700         call dword ptr [0x77e848]
// 005cb55a  83c414               add esp, 0x14
// 005cb55d  85c0                 test eax, eax
// 005cb55f  751a                 jne 0x5cb57b
// 005cb561  837c242864           cmp dword ptr [esp + 0x28], 0x64
// 005cb566  7213                 jb 0x5cb57b
// 005cb568  55                   push ebp
// 005cb569  57                   push edi
// 005cb56a  e8d121ffff           call 0x5bd740
// 005cb56f  8d442444             lea eax, [esp + 0x44]
// 005cb573  50                   push eax
// 005cb574  e83737ffff           call 0x5becb0
// 005cb579  eb43                 jmp 0x5cb5be
// 005cb57b  56                   push esi
// 005cb57c  8d4c2418             lea ecx, [esp + 0x18]
// 005cb580  51                   push ecx
// 005cb581  8d942450020000       lea edx, [esp + 0x250]
// 005cb588  52                   push edx
// 005cb589  ff1568e97700         call dword ptr [0x77e968]
// 005cb58f  83c40c               add esp, 0xc
// 005cb592  8d842448020000       lea eax, [esp + 0x248]
// 005cb599  8d5001               lea edx, [eax + 1]
// 005cb59c  8d642400             lea esp, [esp]
// 005cb5a0  8a08                 mov cl, byte ptr [eax]
// 005cb5a2  83c001               add eax, 1
// 005cb5a5  84c9                 test cl, cl
// 005cb5a7  75f7                 jne 0x5cb5a0
// 005cb5a9  2bc2                 sub eax, edx
// 005cb5ab  50                   push eax
// 005cb5ac  8d84244c020000       lea eax, [esp + 0x24c]
// 005cb5b3  50                   push eax
// 005cb5b4  8d4c2444             lea ecx, [esp + 0x44]
// 005cb5b8  51                   push ecx
// 005cb5b9  e85236ffff           call 0x5bec10
// 005cb5be  83c40c               add esp, 0xc
// 005cb5c1  3b5c2438             cmp ebx, dword ptr [esp + 0x38]
// 005cb5c5  0f82dafdffff         jb 0x5cb3a5
// 005cb5cb  8d44243c             lea eax, [esp + 0x3c]
// 005cb5cf  50                   push eax
// 005cb5d0  e89b36ffff           call 0x5bec70
// 005cb5d5  83c404               add esp, 4
// 005cb5d8  5f                   pop edi
// 005cb5d9  5e                   pop esi
// 005cb5da  5d                   pop ebp
// 005cb5db  b801000000           mov eax, 1
// 005cb5e0  5b                   pop ebx
// 005cb5e1  81c438040000         add esp, 0x438
// 005cb5e7  c3                   ret 
// 005cb5e8  0fbe53ff             movsx edx, byte ptr [ebx - 1]
// 005cb5ec  52                   push edx
// 005cb5ed  6874a07b00           push 0x7ba074
// 005cb5f2  57                   push edi
// 005cb5f3  e8e832ffff           call 0x5be8e0
// 005cb5f8  83c40c               add esp, 0xc
// 005cb5fb  5f                   pop edi
// 005cb5fc  5e                   pop esi
// 005cb5fd  5d                   pop ebp
// 005cb5fe  5b                   pop ebx
// 005cb5ff  81c438040000         add esp, 0x438
// 005cb605  c3                   ret 
// 005cb606  8bff                 mov edi, edi
// 005cb608  0bb55c00b9b4         or esi, dword ptr [ebp - 0x4b46ffa4]
// 005cb60e  5c                   pop esp
// 005cb60f  0043b4               add byte ptr [ebx - 0x4c], al
// 005cb612  5c                   pop esp
// 005cb613  006bb4               add byte ptr [ebx - 0x4c], ch
// 005cb616  5c                   pop esp
// 005cb617  002db55c003f         add byte ptr [0x3f005cb5], ch
// 005cb61d  b55c                 mov ch, 0x5c
// 005cb61f  00e8                 add al, ch
// 005cb621  b55c                 mov ch, 0x5c
// 005cb623  0000                 add byte ptr [eax], al
// 005cb625  06                   push es
// 005cb626  0006                 add byte ptr [esi], al
// 005cb628  06                   push es
// 005cb629  06                   push es
// 005cb62a  06                   push es
// 005cb62b  06                   push es
// 005cb62c  06                   push es
// 005cb62d  06                   push es
// 005cb62e  06                   push es
// 005cb62f  06                   push es
// 005cb630  06                   push es
// 005cb631  06                   push es
// 005cb632  06                   push es
// 005cb633  06                   push es
// 005cb634  06                   push es
// 005cb635  06                   push es
// 005cb636  06                   push es
// 005cb637  0106                 add dword ptr [esi], eax
// 005cb639  06                   push es
// 005cb63a  06                   push es
// 005cb63b  06                   push es
// 005cb63c  06                   push es
// 005cb63d  06                   push es
// 005cb63e  06                   push es
// 005cb63f  06                   push es
// 005cb640  06                   push es
// 005cb641  06                   push es
// 005cb642  0203                 add al, byte ptr [ebx]
// 005cb644  0000                 add byte ptr [eax], al
// 005cb646  0006                 add byte ptr [esi], al
// 005cb648  0306                 add eax, dword ptr [esi]
// 005cb64a  06                   push es
// 005cb64b  06                   push es
// 005cb64c  06                   push es
// 005cb64d  06                   push es
// 005cb64e  0106                 add dword ptr [esi], eax
// 005cb650  0406                 add al, 6
// 005cb652  0506010606           add eax, 0x6060106
// copied from an identical function in another client (function _str_format)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lstrlib.c