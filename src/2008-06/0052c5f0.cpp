// roc 2008-06 0052c5f0  unit: seg_00520000  size: 1044 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052c5f0
//
// 0052c5f0  83ec24               sub esp, 0x24
// 0052c5f3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052c5f7  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 0052c5fd  83c101               add ecx, 1
// 0052c600  0fb69024010000       movzx edx, byte ptr [eax + 0x124]
// 0052c607  53                   push ebx
// 0052c608  8b5870               mov ebx, dword ptr [eax + 0x70]
// 0052c60b  56                   push esi
// 0052c60c  8db000010000         lea esi, [eax + 0x100]
// 0052c612  8974240c             mov dword ptr [esp + 0xc], esi
// 0052c616  0f84e2030000         je 0x52c9fe
// 0052c61c  85f6                 test esi, esi
// 0052c61e  0f84da030000         je 0x52c9fe
// 0052c624  8b149508958200       mov edx, dword ptr [edx*4 + 0x829508]
// 0052c62b  8b06                 mov eax, dword ptr [esi]
// 0052c62d  0fb6760b             movzx esi, byte ptr [esi + 0xb]
// 0052c631  55                   push ebp
// 0052c632  8be8                 mov ebp, eax
// 0052c634  0fafea               imul ebp, edx
// 0052c637  89542414             mov dword ptr [esp + 0x14], edx
// 0052c63b  8bd6                 mov edx, esi
// 0052c63d  83ea01               sub edx, 1
// 0052c640  57                   push edi
// 0052c641  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052c645  8d7dff               lea edi, [ebp - 1]
// 0052c648  0f8490020000         je 0x52c8de
// 0052c64e  83ea01               sub edx, 1
// 0052c651  0f8483010000         je 0x52c7da
// 0052c657  83ea02               sub edx, 2
// 0052c65a  7476                 je 0x52c6d2
// 0052c65c  c1ee03               shr esi, 3
// 0052c65f  8d58ff               lea ebx, [eax - 1]
// 0052c662  0faffe               imul edi, esi
// 0052c665  0fafde               imul ebx, esi
// 0052c668  03d9                 add ebx, ecx
// 0052c66a  03f9                 add edi, ecx
// 0052c66c  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0052c674  85c0                 test eax, eax
// 0052c676  0f8653030000         jbe 0x52c9cf
// 0052c67c  8d642400             lea esp, [esp]
// 0052c680  56                   push esi
// 0052c681  8d442430             lea eax, [esp + 0x30]
// 0052c685  53                   push ebx
// 0052c686  50                   push eax
// 0052c687  e854511700           call 0x6a17e0
// 0052c68c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052c690  83c40c               add esp, 0xc
// 0052c693  85c0                 test eax, eax
// 0052c695  7e23                 jle 0x52c6ba
// 0052c697  8be8                 mov ebp, eax
// 0052c699  8da42400000000       lea esp, [esp]
// 0052c6a0  56                   push esi
// 0052c6a1  8d4c2430             lea ecx, [esp + 0x30]
// 0052c6a5  51                   push ecx
// 0052c6a6  57                   push edi
// 0052c6a7  e834511700           call 0x6a17e0
// 0052c6ac  83c40c               add esp, 0xc
// 0052c6af  2bfe                 sub edi, esi
// 0052c6b1  83ed01               sub ebp, 1
// 0052c6b4  75ea                 jne 0x52c6a0
// 0052c6b6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052c6ba  8b442438             mov eax, dword ptr [esp + 0x38]
// 0052c6be  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052c6c2  40                   inc eax
// 0052c6c3  2bde                 sub ebx, esi
// 0052c6c5  89442438             mov dword ptr [esp + 0x38], eax
// 0052c6c9  3b02                 cmp eax, dword ptr [edx]
// 0052c6cb  72b3                 jb 0x52c680
// 0052c6cd  e9fd020000           jmp 0x52c9cf
// 0052c6d2  8d50ff               lea edx, [eax - 1]
// 0052c6d5  d1ea                 shr edx, 1
// 0052c6d7  d1ef                 shr edi, 1
// 0052c6d9  03d1                 add edx, ecx
// 0052c6db  03f9                 add edi, ecx
// 0052c6dd  89542420             mov dword ptr [esp + 0x20], edx
// 0052c6e1  f7c300000100         test ebx, 0x10000
// 0052c6e7  7432                 je 0x52c71b
// 0052c6e9  83caff               or edx, 0xffffffff
// 0052c6ec  8d0c8500000000       lea ecx, [eax*4]
// 0052c6f3  2bd1                 sub edx, ecx
// 0052c6f5  83ceff               or esi, 0xffffffff
// 0052c6f8  8d0cad00000000       lea ecx, [ebp*4]
// 0052c6ff  2bf1                 sub esi, ecx
// 0052c701  83e204               and edx, 4
// 0052c704  83e604               and esi, 4
// 0052c707  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 0052c70f  33ed                 xor ebp, ebp
// 0052c711  c7442424fcffffff     mov dword ptr [esp + 0x24], 0xfffffffc
// 0052c719  eb33                 jmp 0x52c74e
// 0052c71b  8d50ff               lea edx, [eax - 1]
// 0052c71e  83e201               and edx, 1
// 0052c721  4d                   dec ebp
// 0052c722  03d2                 add edx, edx
// 0052c724  03d2                 add edx, edx
// 0052c726  83e501               and ebp, 1
// 0052c729  03ed                 add ebp, ebp
// 0052c72b  8bca                 mov ecx, edx
// 0052c72d  ba04000000           mov edx, 4
// 0052c732  03ed                 add ebp, ebp
// 0052c734  be04000000           mov esi, 4
// 0052c739  2bd1                 sub edx, ecx
// 0052c73b  2bf5                 sub esi, ebp
// 0052c73d  bd04000000           mov ebp, 4
// 0052c742  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0052c74a  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052c74e  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0052c756  85c0                 test eax, eax
// 0052c758  0f866d020000         jbe 0x52c9cb
// 0052c75e  8bff                 mov edi, edi
// 0052c760  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052c764  8a00                 mov al, byte ptr [eax]
// 0052c766  8aca                 mov cl, dl
// 0052c768  d2e8                 shr al, cl
// 0052c76a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052c76e  240f                 and al, 0xf
// 0052c770  88442438             mov byte ptr [esp + 0x38], al
// 0052c774  85c9                 test ecx, ecx
// 0052c776  7e3a                 jle 0x52c7b2
// 0052c778  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052c77c  eb06                 jmp 0x52c784
// 0052c77e  8bff                 mov edi, edi
// 0052c780  8a442438             mov al, byte ptr [esp + 0x38]
// 0052c784  b904000000           mov ecx, 4
// 0052c789  2bce                 sub ecx, esi
// 0052c78b  bb0f0f0000           mov ebx, 0xf0f
// 0052c790  d3fb                 sar ebx, cl
// 0052c792  8bce                 mov ecx, esi
// 0052c794  d2e0                 shl al, cl
// 0052c796  221f                 and bl, byte ptr [edi]
// 0052c798  0ad8                 or bl, al
// 0052c79a  881f                 mov byte ptr [edi], bl
// 0052c79c  3bf5                 cmp esi, ebp
// 0052c79e  7507                 jne 0x52c7a7
// 0052c7a0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052c7a4  4f                   dec edi
// 0052c7a5  eb04                 jmp 0x52c7ab
// 0052c7a7  03742424             add esi, dword ptr [esp + 0x24]
// 0052c7ab  836c242801           sub dword ptr [esp + 0x28], 1
// 0052c7b0  75ce                 jne 0x52c780
// 0052c7b2  3bd5                 cmp edx, ebp
// 0052c7b4  750a                 jne 0x52c7c0
// 0052c7b6  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052c7ba  ff4c2420             dec dword ptr [esp + 0x20]
// 0052c7be  eb04                 jmp 0x52c7c4
// 0052c7c0  03542424             add edx, dword ptr [esp + 0x24]
// 0052c7c4  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052c7c8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052c7cc  40                   inc eax
// 0052c7cd  8944242c             mov dword ptr [esp + 0x2c], eax
// 0052c7d1  3b01                 cmp eax, dword ptr [ecx]
// 0052c7d3  728b                 jb 0x52c760
// 0052c7d5  e9f1010000           jmp 0x52c9cb
// 0052c7da  8d50ff               lea edx, [eax - 1]
// 0052c7dd  c1ea02               shr edx, 2
// 0052c7e0  c1ef02               shr edi, 2
// 0052c7e3  03d1                 add edx, ecx
// 0052c7e5  03f9                 add edi, ecx
// 0052c7e7  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052c7eb  f7c300000100         test ebx, 0x10000
// 0052c7f1  7428                 je 0x52c81b
// 0052c7f3  8d5400ff             lea edx, [eax + eax - 1]
// 0052c7f7  8d742dff             lea esi, [ebp + ebp - 1]
// 0052c7fb  83e206               and edx, 6
// 0052c7fe  83e606               and esi, 6
// 0052c801  c744242006000000     mov dword ptr [esp + 0x20], 6
// 0052c809  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0052c811  c7442410feffffff     mov dword ptr [esp + 0x10], 0xfffffffe
// 0052c819  eb36                 jmp 0x52c851
// 0052c81b  8d48ff               lea ecx, [eax - 1]
// 0052c81e  83e103               and ecx, 3
// 0052c821  ba03000000           mov edx, 3
// 0052c826  2bd1                 sub edx, ecx
// 0052c828  8d4dff               lea ecx, [ebp - 1]
// 0052c82b  83e103               and ecx, 3
// 0052c82e  be03000000           mov esi, 3
// 0052c833  2bf1                 sub esi, ecx
// 0052c835  03d2                 add edx, edx
// 0052c837  03f6                 add esi, esi
// 0052c839  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0052c841  c744242406000000     mov dword ptr [esp + 0x24], 6
// 0052c849  c744241002000000     mov dword ptr [esp + 0x10], 2
// 0052c851  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0052c859  85c0                 test eax, eax
// 0052c85b  0f866e010000         jbe 0x52c9cf
// 0052c861  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052c865  8a00                 mov al, byte ptr [eax]
// 0052c867  8aca                 mov cl, dl
// 0052c869  d2e8                 shr al, cl
// 0052c86b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052c86f  2403                 and al, 3
// 0052c871  88442438             mov byte ptr [esp + 0x38], al
// 0052c875  85c9                 test ecx, ecx
// 0052c877  7e3b                 jle 0x52c8b4
// 0052c879  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0052c87d  eb05                 jmp 0x52c884
// 0052c87f  90                   nop 
// 0052c880  8a442438             mov al, byte ptr [esp + 0x38]
// 0052c884  b906000000           mov ecx, 6
// 0052c889  2bce                 sub ecx, esi
// 0052c88b  bb3f3f0000           mov ebx, 0x3f3f
// 0052c890  d3fb                 sar ebx, cl
// 0052c892  8bce                 mov ecx, esi
// 0052c894  d2e0                 shl al, cl
// 0052c896  221f                 and bl, byte ptr [edi]
// 0052c898  0ad8                 or bl, al
// 0052c89a  881f                 mov byte ptr [edi], bl
// 0052c89c  3b742424             cmp esi, dword ptr [esp + 0x24]
// 0052c8a0  7507                 jne 0x52c8a9
// 0052c8a2  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052c8a6  4f                   dec edi
// 0052c8a7  eb04                 jmp 0x52c8ad
// 0052c8a9  03742410             add esi, dword ptr [esp + 0x10]
// 0052c8ad  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0052c8b2  75cc                 jne 0x52c880
// 0052c8b4  3b542424             cmp edx, dword ptr [esp + 0x24]
// 0052c8b8  750a                 jne 0x52c8c4
// 0052c8ba  8b542420             mov edx, dword ptr [esp + 0x20]
// 0052c8be  ff4c241c             dec dword ptr [esp + 0x1c]
// 0052c8c2  eb04                 jmp 0x52c8c8
// 0052c8c4  03542410             add edx, dword ptr [esp + 0x10]
// 0052c8c8  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052c8cc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052c8d0  40                   inc eax
// 0052c8d1  89442428             mov dword ptr [esp + 0x28], eax
// 0052c8d5  3b01                 cmp eax, dword ptr [ecx]
// 0052c8d7  7288                 jb 0x52c861
// 0052c8d9  e9f1000000           jmp 0x52c9cf
// 0052c8de  8d50ff               lea edx, [eax - 1]
// 0052c8e1  c1ea03               shr edx, 3
// 0052c8e4  c1ef03               shr edi, 3
// 0052c8e7  03d1                 add edx, ecx
// 0052c8e9  03f9                 add edi, ecx
// 0052c8eb  89542420             mov dword ptr [esp + 0x20], edx
// 0052c8ef  f7c300000100         test ebx, 0x10000
// 0052c8f5  7420                 je 0x52c917
// 0052c8f7  8d75ff               lea esi, [ebp - 1]
// 0052c8fa  8d50ff               lea edx, [eax - 1]
// 0052c8fd  83e207               and edx, 7
// 0052c900  83e607               and esi, 7
// 0052c903  c744242407000000     mov dword ptr [esp + 0x24], 7
// 0052c90b  33ed                 xor ebp, ebp
// 0052c90d  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0052c915  eb2d                 jmp 0x52c944
// 0052c917  4d                   dec ebp
// 0052c918  8d48ff               lea ecx, [eax - 1]
// 0052c91b  83e107               and ecx, 7
// 0052c91e  ba07000000           mov edx, 7
// 0052c923  83e507               and ebp, 7
// 0052c926  be07000000           mov esi, 7
// 0052c92b  2bd1                 sub edx, ecx
// 0052c92d  2bf5                 sub esi, ebp
// 0052c92f  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0052c937  bd07000000           mov ebp, 7
// 0052c93c  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0052c944  89542438             mov dword ptr [esp + 0x38], edx
// 0052c948  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0052c950  85c0                 test eax, eax
// 0052c952  7677                 jbe 0x52c9cb
// 0052c954  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052c958  8a00                 mov al, byte ptr [eax]
// 0052c95a  8aca                 mov cl, dl
// 0052c95c  d2e8                 shr al, cl
// 0052c95e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052c962  2401                 and al, 1
// 0052c964  85c9                 test ecx, ecx
// 0052c966  7e3c                 jle 0x52c9a4
// 0052c968  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0052c96c  8d642400             lea esp, [esp]
// 0052c970  b907000000           mov ecx, 7
// 0052c975  2bce                 sub ecx, esi
// 0052c977  ba7f7f0000           mov edx, 0x7f7f
// 0052c97c  d3fa                 sar edx, cl
// 0052c97e  8ad8                 mov bl, al
// 0052c980  8bce                 mov ecx, esi
// 0052c982  d2e3                 shl bl, cl
// 0052c984  2217                 and dl, byte ptr [edi]
// 0052c986  0ad3                 or dl, bl
// 0052c988  8817                 mov byte ptr [edi], dl
// 0052c98a  3bf5                 cmp esi, ebp
// 0052c98c  7507                 jne 0x52c995
// 0052c98e  8b742424             mov esi, dword ptr [esp + 0x24]
// 0052c992  4f                   dec edi
// 0052c993  eb04                 jmp 0x52c999
// 0052c995  0374241c             add esi, dword ptr [esp + 0x1c]
// 0052c999  836c242c01           sub dword ptr [esp + 0x2c], 1
// 0052c99e  75d0                 jne 0x52c970
// 0052c9a0  8b542438             mov edx, dword ptr [esp + 0x38]
// 0052c9a4  3bd5                 cmp edx, ebp
// 0052c9a6  750a                 jne 0x52c9b2
// 0052c9a8  8b542424             mov edx, dword ptr [esp + 0x24]
// 0052c9ac  ff4c2420             dec dword ptr [esp + 0x20]
// 0052c9b0  eb04                 jmp 0x52c9b6
// 0052c9b2  0354241c             add edx, dword ptr [esp + 0x1c]
// 0052c9b6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052c9ba  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052c9be  40                   inc eax
// 0052c9bf  89542438             mov dword ptr [esp + 0x38], edx
// 0052c9c3  89442428             mov dword ptr [esp + 0x28], eax
// 0052c9c7  3b01                 cmp eax, dword ptr [ecx]
// 0052c9c9  7289                 jb 0x52c954
// 0052c9cb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0052c9cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052c9d3  8a410b               mov al, byte ptr [ecx + 0xb]
// 0052c9d6  3c08                 cmp al, 8
// 0052c9d8  8929                 mov dword ptr [ecx], ebp
// 0052c9da  0fb6c0               movzx eax, al
// 0052c9dd  7211                 jb 0x52c9f0
// 0052c9df  c1e803               shr eax, 3
// 0052c9e2  0fafc5               imul eax, ebp
// 0052c9e5  5f                   pop edi
// 0052c9e6  5d                   pop ebp
// 0052c9e7  5e                   pop esi
// 0052c9e8  894104               mov dword ptr [ecx + 4], eax
// 0052c9eb  5b                   pop ebx
// 0052c9ec  83c424               add esp, 0x24
// 0052c9ef  c3                   ret 
// 0052c9f0  0fafc5               imul eax, ebp
// 0052c9f3  83c007               add eax, 7
// 0052c9f6  c1e803               shr eax, 3
// 0052c9f9  5f                   pop edi
// 0052c9fa  894104               mov dword ptr [ecx + 4], eax
// 0052c9fd  5d                   pop ebp
// 0052c9fe  5e                   pop esi
// 0052c9ff  5b                   pop ebx
// 0052ca00  83c424               add esp, 0x24
// 0052ca03  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_do_read_interlace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
