// roc 2009-06 006c66c0  unit: lua_exception  size: 744 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c66c0
//
// 006c66c0  81ec38040000         sub esp, 0x438
// 006c66c6  53                   push ebx
// 006c66c7  55                   push ebp
// 006c66c8  56                   push esi
// 006c66c9  57                   push edi
// 006c66ca  8bbc244c040000       mov edi, dword ptr [esp + 0x44c]
// 006c66d1  8d442434             lea eax, [esp + 0x34]
// 006c66d5  50                   push eax
// 006c66d6  bd01000000           mov ebp, 1
// 006c66db  55                   push ebp
// 006c66dc  57                   push edi
// 006c66dd  e8de45ffff           call 0x6bacc0
// 006c66e2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006c66e6  8d542448             lea edx, [esp + 0x48]
// 006c66ea  8bd8                 mov ebx, eax
// 006c66ec  52                   push edx
// 006c66ed  8d3419               lea esi, [ecx + ebx]
// 006c66f0  57                   push edi
// 006c66f1  8974244c             mov dword ptr [esp + 0x4c], esi
// 006c66f5  e8863fffff           call 0x6ba680
// 006c66fa  83c414               add esp, 0x14
// 006c66fd  3bde                 cmp ebx, esi
// 006c66ff  0f8318020000         jae 0x6c691d
// 006c6705  803b25               cmp byte ptr [ebx], 0x25
// 006c6708  742c                 je 0x6c6736
// 006c670a  8d842448020000       lea eax, [esp + 0x248]
// 006c6711  3944243c             cmp dword ptr [esp + 0x3c], eax
// 006c6715  720d                 jb 0x6c6724
// 006c6717  8d4c243c             lea ecx, [esp + 0x3c]
// 006c671b  51                   push ecx
// 006c671c  e8ff3dffff           call 0x6ba520
// 006c6721  83c404               add esp, 4
// 006c6724  8a13                 mov dl, byte ptr [ebx]
// 006c6726  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006c672a  8810                 mov byte ptr [eax], dl
// 006c672c  ff44243c             inc dword ptr [esp + 0x3c]
// 006c6730  43                   inc ebx
// 006c6731  e9dd010000           jmp 0x6c6913
// 006c6736  43                   inc ebx
// 006c6737  803b25               cmp byte ptr [ebx], 0x25
// 006c673a  752c                 jne 0x6c6768
// 006c673c  8d8c2448020000       lea ecx, [esp + 0x248]
// 006c6743  394c243c             cmp dword ptr [esp + 0x3c], ecx
// 006c6747  720d                 jb 0x6c6756
// 006c6749  8d54243c             lea edx, [esp + 0x3c]
// 006c674d  52                   push edx
// 006c674e  e8cd3dffff           call 0x6ba520
// 006c6753  83c404               add esp, 4
// 006c6756  8a03                 mov al, byte ptr [ebx]
// 006c6758  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006c675c  8801                 mov byte ptr [ecx], al
// 006c675e  ff44243c             inc dword ptr [esp + 0x3c]
// 006c6762  43                   inc ebx
// 006c6763  e9ab010000           jmp 0x6c6913
// 006c6768  8d542414             lea edx, [esp + 0x14]
// 006c676c  52                   push edx
// 006c676d  57                   push edi
// 006c676e  45                   inc ebp
// 006c676f  e87cfeffff           call 0x6c65f0
// 006c6774  8bd8                 mov ebx, eax
// 006c6776  0fbe03               movsx eax, byte ptr [ebx]
// 006c6779  83e845               sub eax, 0x45
// 006c677c  83c408               add esp, 8
// 006c677f  43                   inc ebx
// 006c6780  83f833               cmp eax, 0x33
// 006c6783  0f87b1010000         ja 0x6c693a
// 006c6789  0fb68074696c00       movzx eax, byte ptr [eax + 0x6c6974]
// 006c6790  ff248558696c00       jmp dword ptr [eax*4 + 0x6c6958]
// 006c6797  55                   push ebp
// 006c6798  57                   push edi
// 006c6799  e8e245ffff           call 0x6bad80
// 006c679e  e81d370500           call 0x719ec0
// 006c67a3  50                   push eax
// 006c67a4  8d4c2420             lea ecx, [esp + 0x20]
// 006c67a8  51                   push ecx
// 006c67a9  8d942458020000       lea edx, [esp + 0x258]
// 006c67b0  52                   push edx
// 006c67b1  ff1538e98900         call dword ptr [0x89e938]
// 006c67b7  83c414               add esp, 0x14
// 006c67ba  e92b010000           jmp 0x6c68ea
// 006c67bf  8d442414             lea eax, [esp + 0x14]
// 006c67c3  8d5001               lea edx, [eax + 1]
// 006c67c6  8a08                 mov cl, byte ptr [eax]
// 006c67c8  40                   inc eax
// 006c67c9  84c9                 test cl, cl
// 006c67cb  75f9                 jne 0x6c67c6
// 006c67cd  2bc2                 sub eax, edx
// 006c67cf  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 006c67d3  ba6c000000           mov edx, 0x6c
// 006c67d8  6689540413           mov word ptr [esp + eax + 0x13], dx
// 006c67dd  55                   push ebp
// 006c67de  57                   push edi
// 006c67df  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 006c67e3  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 006c67e8  e89345ffff           call 0x6bad80
// 006c67ed  e8ce360500           call 0x719ec0
// 006c67f2  50                   push eax
// 006c67f3  8d442420             lea eax, [esp + 0x20]
// 006c67f7  50                   push eax
// 006c67f8  8d8c2458020000       lea ecx, [esp + 0x258]
// 006c67ff  51                   push ecx
// 006c6800  ff1538e98900         call dword ptr [0x89e938]
// 006c6806  83c414               add esp, 0x14
// 006c6809  e9dc000000           jmp 0x6c68ea
// 006c680e  8d442414             lea eax, [esp + 0x14]
// 006c6812  8d5001               lea edx, [eax + 1]
// 006c6815  8a08                 mov cl, byte ptr [eax]
// 006c6817  40                   inc eax
// 006c6818  84c9                 test cl, cl
// 006c681a  75f9                 jne 0x6c6815
// 006c681c  2bc2                 sub eax, edx
// 006c681e  8a4c0413             mov cl, byte ptr [esp + eax + 0x13]
// 006c6822  ba6c000000           mov edx, 0x6c
// 006c6827  6689540413           mov word ptr [esp + eax + 0x13], dx
// 006c682c  55                   push ebp
// 006c682d  57                   push edi
// 006c682e  884c041c             mov byte ptr [esp + eax + 0x1c], cl
// 006c6832  c644041d00           mov byte ptr [esp + eax + 0x1d], 0
// 006c6837  e84445ffff           call 0x6bad80
// 006c683c  d97c241a             fnstcw word ptr [esp + 0x1a]
// 006c6840  0fb744241a           movzx eax, word ptr [esp + 0x1a]
// 006c6845  0d000c0000           or eax, 0xc00
// 006c684a  89442434             mov dword ptr [esp + 0x34], eax
// 006c684e  d96c2434             fldcw word ptr [esp + 0x34]
// 006c6852  df7c2434             fistp qword ptr [esp + 0x34]
// 006c6856  8b442434             mov eax, dword ptr [esp + 0x34]
// 006c685a  d96c241a             fldcw word ptr [esp + 0x1a]
// 006c685e  e940ffffff           jmp 0x6c67a3
// 006c6863  55                   push ebp
// 006c6864  57                   push edi
// 006c6865  e81645ffff           call 0x6bad80
// 006c686a  dd1c24               fstp qword ptr [esp]
// 006c686d  8d44241c             lea eax, [esp + 0x1c]
// 006c6871  50                   push eax
// 006c6872  8d8c2454020000       lea ecx, [esp + 0x254]
// 006c6879  51                   push ecx
// 006c687a  ff1538e98900         call dword ptr [0x89e938]
// 006c6880  83c410               add esp, 0x10
// 006c6883  eb65                 jmp 0x6c68ea
// 006c6885  8bcd                 mov ecx, ebp
// 006c6887  8d74243c             lea esi, [esp + 0x3c]
// 006c688b  8bd7                 mov edx, edi
// 006c688d  e8fefbffff           call 0x6c6490
// 006c6892  e97c000000           jmp 0x6c6913
// 006c6897  8d542428             lea edx, [esp + 0x28]
// 006c689b  52                   push edx
// 006c689c  55                   push ebp
// 006c689d  57                   push edi
// 006c689e  e81d44ffff           call 0x6bacc0
// 006c68a3  8bf0                 mov esi, eax
// 006c68a5  8d442420             lea eax, [esp + 0x20]
// 006c68a9  6a2e                 push 0x2e
// 006c68ab  50                   push eax
// 006c68ac  ff1500e88900         call dword ptr [0x89e800]
// 006c68b2  83c414               add esp, 0x14
// 006c68b5  85c0                 test eax, eax
// 006c68b7  751a                 jne 0x6c68d3
// 006c68b9  837c242864           cmp dword ptr [esp + 0x28], 0x64
// 006c68be  7213                 jb 0x6c68d3
// 006c68c0  55                   push ebp
// 006c68c1  57                   push edi
// 006c68c2  e87926ffff           call 0x6b8f40
// 006c68c7  8d4c2444             lea ecx, [esp + 0x44]
// 006c68cb  51                   push ecx
// 006c68cc  e82f3dffff           call 0x6ba600
// 006c68d1  eb3d                 jmp 0x6c6910
// 006c68d3  56                   push esi
// 006c68d4  8d542418             lea edx, [esp + 0x18]
// 006c68d8  52                   push edx
// 006c68d9  8d842450020000       lea eax, [esp + 0x250]
// 006c68e0  50                   push eax
// 006c68e1  ff1538e98900         call dword ptr [0x89e938]
// 006c68e7  83c40c               add esp, 0xc
// 006c68ea  8d842448020000       lea eax, [esp + 0x248]
// 006c68f1  8d5001               lea edx, [eax + 1]
// 006c68f4  8a08                 mov cl, byte ptr [eax]
// 006c68f6  40                   inc eax
// 006c68f7  84c9                 test cl, cl
// 006c68f9  75f9                 jne 0x6c68f4
// 006c68fb  2bc2                 sub eax, edx
// 006c68fd  50                   push eax
// 006c68fe  8d8c244c020000       lea ecx, [esp + 0x24c]
// 006c6905  51                   push ecx
// 006c6906  8d542444             lea edx, [esp + 0x44]
// 006c690a  52                   push edx
// 006c690b  e8503cffff           call 0x6ba560
// 006c6910  83c40c               add esp, 0xc
// 006c6913  3b5c2438             cmp ebx, dword ptr [esp + 0x38]
// 006c6917  0f82e8fdffff         jb 0x6c6705
// 006c691d  8d4c243c             lea ecx, [esp + 0x3c]
// 006c6921  51                   push ecx
// 006c6922  e8993cffff           call 0x6ba5c0
// 006c6927  83c404               add esp, 4
// 006c692a  5f                   pop edi
// 006c692b  5e                   pop esi
// 006c692c  5d                   pop ebp
// 006c692d  b801000000           mov eax, 1
// 006c6932  5b                   pop ebx
// 006c6933  81c438040000         add esp, 0x438
// 006c6939  c3                   ret 
// 006c693a  0fbe43ff             movsx eax, byte ptr [ebx - 1]
// 006c693e  50                   push eax
// 006c693f  683cbd8e00           push 0x8ebd3c
// 006c6944  57                   push edi
// 006c6945  e8f638ffff           call 0x6ba240
// 006c694a  83c40c               add esp, 0xc
// 006c694d  5f                   pop edi
// 006c694e  5e                   pop esi
// 006c694f  5d                   pop ebp
// 006c6950  5b                   pop ebx
// 006c6951  81c438040000         add esp, 0x438
// 006c6957  c3                   ret 
// 006c6958  63686c               arpl word ptr [eax + 0x6c], bp
// 006c695b  000e                 add byte ptr [esi], cl
// 006c695d  686c009767           push 0x6797006c
// 006c6962  6c                   insb byte ptr es:[edi], dx
// 006c6963  00bf676c0085         add byte ptr [edi - 0x7aff9399], bh
// 006c6969  686c009768           push 0x6897006c
// 006c696e  6c                   insb byte ptr es:[edi], dx
// 006c696f  003a                 add byte ptr [edx], bh
// 006c6971  696c000006000606     imul ebp, dword ptr [eax + eax], 0x6060006
// 006c6979  06                   push es
// 006c697a  06                   push es
// 006c697b  06                   push es
// 006c697c  06                   push es
// 006c697d  06                   push es
// 006c697e  06                   push es
// 006c697f  06                   push es
// 006c6980  06                   push es
// 006c6981  06                   push es
// 006c6982  06                   push es
// 006c6983  06                   push es
// 006c6984  06                   push es
// 006c6985  06                   push es
// 006c6986  06                   push es
// 006c6987  0106                 add dword ptr [esi], eax
// 006c6989  06                   push es
// 006c698a  06                   push es
// 006c698b  06                   push es
// 006c698c  06                   push es
// 006c698d  06                   push es
// 006c698e  06                   push es
// 006c698f  06                   push es
// 006c6990  06                   push es
// 006c6991  06                   push es
// 006c6992  0203                 add al, byte ptr [ebx]
// 006c6994  0000                 add byte ptr [eax], al
// 006c6996  0006                 add byte ptr [esi], al
// 006c6998  0306                 add eax, dword ptr [esi]
// 006c699a  06                   push es
// 006c699b  06                   push es
// 006c699c  06                   push es
// 006c699d  06                   push es
// 006c699e  0106                 add dword ptr [esi], eax
// 006c69a0  0406                 add al, 6
// 006c69a2  0506010606           add eax, 0x6060106
// copied from an identical function in another client (function _str_format)

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lang: c
// roc-lib: lua-5.1.4-dll lstrlib.c