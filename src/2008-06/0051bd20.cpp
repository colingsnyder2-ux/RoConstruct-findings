// roc 2008-06 0051bd20  unit: G3D::_internal::DialogTemplate  size: 580 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051bd20
//
// 0051bd20  56                   push esi
// 0051bd21  8b742408             mov esi, dword ptr [esp + 8]
// 0051bd25  83bee400000000       cmp dword ptr [esi + 0xe4], 0
// 0051bd2c  7529                 jne 0x51bd57
// 0051bd2e  80be2401000000       cmp byte ptr [esi + 0x124], 0
// 0051bd35  7520                 jne 0x51bd57
// 0051bd37  f7466800040000       test dword ptr [esi + 0x68], 0x400
// 0051bd3e  750e                 jne 0x51bd4e
// 0051bd40  68d88d8200           push 0x828dd8
// 0051bd45  56                   push esi
// 0051bd46  e865dc0000           call 0x5299b0
// 0051bd4b  83c408               add esp, 8
// 0051bd4e  56                   push esi
// 0051bd4f  e88cb40000           call 0x5271e0
// 0051bd54  83c404               add esp, 4
// 0051bd57  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 0051bd5e  0f84d4000000         je 0x51be38
// 0051bd64  f6467002             test byte ptr [esi + 0x70], 2
// 0051bd68  0f84ca000000         je 0x51be38
// 0051bd6e  0fb68624010000       movzx eax, byte ptr [esi + 0x124]
// 0051bd75  83f806               cmp eax, 6
// 0051bd78  0f87ba000000         ja 0x51be38
// 0051bd7e  ff248548bf5100       jmp dword ptr [eax*4 + 0x51bf48]
// 0051bd85  f686e400000007       test byte ptr [esi + 0xe4], 7
// 0051bd8c  0f84a6000000         je 0x51be38
// 0051bd92  56                   push esi
// 0051bd93  e868cb0000           call 0x528900
// 0051bd98  83c404               add esp, 4
// 0051bd9b  5e                   pop esi
// 0051bd9c  c3                   ret 
// 0051bd9d  f686e400000007       test byte ptr [esi + 0xe4], 7
// 0051bda4  750d                 jne 0x51bdb3
// 0051bda6  83bec800000005       cmp dword ptr [esi + 0xc8], 5
// 0051bdad  0f8385000000         jae 0x51be38
// 0051bdb3  56                   push esi
// 0051bdb4  e847cb0000           call 0x528900
// 0051bdb9  83c404               add esp, 4
// 0051bdbc  5e                   pop esi
// 0051bdbd  c3                   ret 
// 0051bdbe  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0051bdc4  2407                 and al, 7
// 0051bdc6  3c04                 cmp al, 4
// 0051bdc8  746e                 je 0x51be38
// 0051bdca  56                   push esi
// 0051bdcb  e830cb0000           call 0x528900
// 0051bdd0  83c404               add esp, 4
// 0051bdd3  5e                   pop esi
// 0051bdd4  c3                   ret 
// 0051bdd5  b803000000           mov eax, 3
// 0051bdda  8486e4000000         test byte ptr [esi + 0xe4], al
// 0051bde0  7508                 jne 0x51bdea
// 0051bde2  3986c8000000         cmp dword ptr [esi + 0xc8], eax
// 0051bde8  734e                 jae 0x51be38
// 0051bdea  56                   push esi
// 0051bdeb  e810cb0000           call 0x528900
// 0051bdf0  83c404               add esp, 4
// 0051bdf3  5e                   pop esi
// 0051bdf4  c3                   ret 
// 0051bdf5  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0051bdfb  80e103               and cl, 3
// 0051bdfe  80f902               cmp cl, 2
// 0051be01  7435                 je 0x51be38
// 0051be03  56                   push esi
// 0051be04  e8f7ca0000           call 0x528900
// 0051be09  83c404               add esp, 4
// 0051be0c  5e                   pop esi
// 0051be0d  c3                   ret 
// 0051be0e  f686e400000001       test byte ptr [esi + 0xe4], 1
// 0051be15  7509                 jne 0x51be20
// 0051be17  83bec800000002       cmp dword ptr [esi + 0xc8], 2
// 0051be1e  7318                 jae 0x51be38
// 0051be20  56                   push esi
// 0051be21  e8daca0000           call 0x528900
// 0051be26  83c404               add esp, 4
// 0051be29  5e                   pop esi
// 0051be2a  c3                   ret 
// 0051be2b  f686e400000001       test byte ptr [esi + 0xe4], 1
// 0051be32  0f845affffff         je 0x51bd92
// 0051be38  0fb69626010000       movzx edx, byte ptr [esi + 0x126]
// 0051be3f  8a8628010000         mov al, byte ptr [esi + 0x128]
// 0051be45  8b8ed4000000         mov ecx, dword ptr [esi + 0xd4]
// 0051be4b  889608010000         mov byte ptr [esi + 0x108], dl
// 0051be51  8a962b010000         mov dl, byte ptr [esi + 0x12b]
// 0051be57  888609010000         mov byte ptr [esi + 0x109], al
// 0051be5d  f6ea                 imul dl
// 0051be5f  57                   push edi
// 0051be60  8dbe00010000         lea edi, [esi + 0x100]
// 0051be66  88860b010000         mov byte ptr [esi + 0x10b], al
// 0051be6c  3c08                 cmp al, 8
// 0051be6e  890f                 mov dword ptr [edi], ecx
// 0051be70  88960a010000         mov byte ptr [esi + 0x10a], dl
// 0051be76  0fb6c0               movzx eax, al
// 0051be79  7208                 jb 0x51be83
// 0051be7b  c1e803               shr eax, 3
// 0051be7e  0fafc1               imul eax, ecx
// 0051be81  eb09                 jmp 0x51be8c
// 0051be83  0fafc1               imul eax, ecx
// 0051be86  83c007               add eax, 7
// 0051be89  c1e803               shr eax, 3
// 0051be8c  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0051be92  50                   push eax
// 0051be93  898604010000         mov dword ptr [esi + 0x104], eax
// 0051be99  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051be9d  50                   push eax
// 0051be9e  41                   inc ecx
// 0051be9f  51                   push ecx
// 0051bea0  56                   push esi
// 0051bea1  e86ae50000           call 0x52a410
// 0051bea6  83c410               add esp, 0x10
// 0051bea9  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 0051beb0  7436                 je 0x51bee8
// 0051beb2  8a8624010000         mov al, byte ptr [esi + 0x124]
// 0051beb8  3c06                 cmp al, 6
// 0051beba  732c                 jae 0x51bee8
// 0051bebc  f6467002             test byte ptr [esi + 0x70], 2
// 0051bec0  7426                 je 0x51bee8
// 0051bec2  0fb6d0               movzx edx, al
// 0051bec5  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0051becb  52                   push edx
// 0051becc  40                   inc eax
// 0051becd  50                   push eax
// 0051bece  57                   push edi
// 0051becf  e8acb40000           call 0x527380
// 0051bed4  83c40c               add esp, 0xc
// 0051bed7  833f00               cmp dword ptr [edi], 0
// 0051beda  750c                 jne 0x51bee8
// 0051bedc  56                   push esi
// 0051bedd  e81eca0000           call 0x528900
// 0051bee2  83c404               add esp, 4
// 0051bee5  5f                   pop edi
// 0051bee6  5e                   pop esi
// 0051bee7  c3                   ret 
// 0051bee8  837e7000             cmp dword ptr [esi + 0x70], 0
// 0051beec  7409                 je 0x51bef7
// 0051beee  56                   push esi
// 0051beef  e8ece20000           call 0x52a1e0
// 0051bef4  83c404               add esp, 4
// 0051bef7  f6863002000004       test byte ptr [esi + 0x230], 4
// 0051befe  741a                 je 0x51bf1a
// 0051bf00  80be3802000040       cmp byte ptr [esi + 0x238], 0x40
// 0051bf07  7511                 jne 0x51bf1a
// 0051bf09  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0051bf0f  41                   inc ecx
// 0051bf10  51                   push ecx
// 0051bf11  57                   push edi
// 0051bf12  e8e9e10000           call 0x52a100
// 0051bf17  83c408               add esp, 8
// 0051bf1a  57                   push edi
// 0051bf1b  56                   push esi
// 0051bf1c  e87fcc0000           call 0x528ba0
// 0051bf21  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 0051bf27  83c408               add esp, 8
// 0051bf2a  85c0                 test eax, eax
// 0051bf2c  7415                 je 0x51bf43
// 0051bf2e  0fb69624010000       movzx edx, byte ptr [esi + 0x124]
// 0051bf35  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0051bf3b  52                   push edx
// 0051bf3c  51                   push ecx
// 0051bf3d  56                   push esi
// 0051bf3e  ffd0                 call eax
// 0051bf40  83c40c               add esp, 0xc
// 0051bf43  5f                   pop edi
// 0051bf44  5e                   pop esi
// 0051bf45  c3                   ret 
// 0051bf46  8bff                 mov edi, edi
// 0051bf48  85bd51009dbd         test dword ptr [ebp - 0x4262ffaf], edi
// 0051bf4e  51                   push ecx
// 0051bf4f  00bebd5100d5         add byte ptr [esi - 0x2affae43], bh
// 0051bf55  bd5100f5bd           mov ebp, 0xbdf50051
// 0051bf5a  51                   push ecx
// 0051bf5b  000e                 add byte ptr [esi], cl
// 0051bf5d  be51002bbe           mov esi, 0xbe2b0051
// 0051bf62  51                   push ecx
// library libpng-1.2.6/pngwrite.c (function _png_write_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwrite.c
