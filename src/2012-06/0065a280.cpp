// roc 2012-06 0065a280  unit: seg_00650000  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065a280
//
// 0065a280  83ec10               sub esp, 0x10
// 0065a283  817c241cff000000     cmp dword ptr [esp + 0x1c], 0xff
// 0065a28b  7544                 jne 0x65a2d1
// 0065a28d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a291  8a810b010000         mov al, byte ptr [ecx + 0x10b]
// 0065a297  3c08                 cmp al, 8
// 0065a299  0fb6c0               movzx eax, al
// 0065a29c  720c                 jb 0x65a2aa
// 0065a29e  c1e803               shr eax, 3
// 0065a2a1  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 0065a2a8  eb0d                 jmp 0x65a2b7
// 0065a2aa  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 0065a2b1  83c007               add eax, 7
// 0065a2b4  c1e803               shr eax, 3
// 0065a2b7  50                   push eax
// 0065a2b8  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0065a2be  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0065a2c2  40                   inc eax
// 0065a2c3  50                   push eax
// 0065a2c4  51                   push ecx
// 0065a2c5  e892933200           call 0x98365c
// 0065a2ca  83c40c               add esp, 0xc
// 0065a2cd  83c410               add esp, 0x10
// 0065a2d0  c3                   ret 
// 0065a2d1  8b442414             mov eax, dword ptr [esp + 0x14]
// 0065a2d5  0fb6880b010000       movzx ecx, byte ptr [eax + 0x10b]
// 0065a2dc  53                   push ebx
// 0065a2dd  55                   push ebp
// 0065a2de  56                   push esi
// 0065a2df  8bb0ec000000         mov esi, dword ptr [eax + 0xec]
// 0065a2e5  8bd1                 mov edx, ecx
// 0065a2e7  46                   inc esi
// 0065a2e8  83ea01               sub edx, 1
// 0065a2eb  57                   push edi
// 0065a2ec  0f84c6010000         je 0x65a4b8
// 0065a2f2  83ea01               sub edx, 1
// 0065a2f5  0f8408010000         je 0x65a403
// 0065a2fb  83ea02               sub edx, 2
// 0065a2fe  7451                 je 0x65a351
// 0065a300  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 0065a306  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0065a30a  c1e903               shr ecx, 3
// 0065a30d  8bf9                 mov edi, ecx
// 0065a30f  b380                 mov bl, 0x80
// 0065a311  85c0                 test eax, eax
// 0065a313  0f8648020000         jbe 0x65a561
// 0065a319  89442410             mov dword ptr [esp + 0x10], eax
// 0065a31d  8d4900               lea ecx, [ecx]
// 0065a320  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 0065a324  84da                 test dl, bl
// 0065a326  740b                 je 0x65a333
// 0065a328  57                   push edi
// 0065a329  56                   push esi
// 0065a32a  55                   push ebp
// 0065a32b  e82c933200           call 0x98365c
// 0065a330  83c40c               add esp, 0xc
// 0065a333  03f7                 add esi, edi
// 0065a335  03ef                 add ebp, edi
// 0065a337  80fb01               cmp bl, 1
// 0065a33a  7504                 jne 0x65a340
// 0065a33c  b380                 mov bl, 0x80
// 0065a33e  eb02                 jmp 0x65a342
// 0065a340  d0eb                 shr bl, 1
// 0065a342  836c241001           sub dword ptr [esp + 0x10], 1
// 0065a347  75d7                 jne 0x65a320
// 0065a349  5f                   pop edi
// 0065a34a  5e                   pop esi
// 0065a34b  5d                   pop ebp
// 0065a34c  5b                   pop ebx
// 0065a34d  83c410               add esp, 0x10
// 0065a350  c3                   ret 
// 0065a351  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0065a358  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0065a35c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0065a362  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0065a36a  7411                 je 0x65a37d
// 0065a36c  b804000000           mov eax, 4
// 0065a371  33ed                 xor ebp, ebp
// 0065a373  89442414             mov dword ptr [esp + 0x14], eax
// 0065a377  89442418             mov dword ptr [esp + 0x18], eax
// 0065a37b  eb15                 jmp 0x65a392
// 0065a37d  bd04000000           mov ebp, 4
// 0065a382  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0065a38a  c7442418fcffffff     mov dword ptr [esp + 0x18], 0xfffffffc
// 0065a392  8bd5                 mov edx, ebp
// 0065a394  85c9                 test ecx, ecx
// 0065a396  0f86c5010000         jbe 0x65a561
// 0065a39c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0065a3a0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065a3a4  85442410             test dword ptr [esp + 0x10], eax
// 0065a3a8  7422                 je 0x65a3cc
// 0065a3aa  0fb606               movzx eax, byte ptr [esi]
// 0065a3ad  8aca                 mov cl, dl
// 0065a3af  d3e8                 shr eax, cl
// 0065a3b1  b904000000           mov ecx, 4
// 0065a3b6  2bca                 sub ecx, edx
// 0065a3b8  bb0f0f0000           mov ebx, 0xf0f
// 0065a3bd  d3fb                 sar ebx, cl
// 0065a3bf  83e00f               and eax, 0xf
// 0065a3c2  8bca                 mov ecx, edx
// 0065a3c4  d2e0                 shl al, cl
// 0065a3c6  221f                 and bl, byte ptr [edi]
// 0065a3c8  0ad8                 or bl, al
// 0065a3ca  881f                 mov byte ptr [edi], bl
// 0065a3cc  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0065a3d0  7506                 jne 0x65a3d8
// 0065a3d2  46                   inc esi
// 0065a3d3  8bd5                 mov edx, ebp
// 0065a3d5  47                   inc edi
// 0065a3d6  eb04                 jmp 0x65a3dc
// 0065a3d8  03542418             add edx, dword ptr [esp + 0x18]
// 0065a3dc  b801000000           mov eax, 1
// 0065a3e1  39442410             cmp dword ptr [esp + 0x10], eax
// 0065a3e5  750a                 jne 0x65a3f1
// 0065a3e7  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0065a3ef  eb04                 jmp 0x65a3f5
// 0065a3f1  d17c2410             sar dword ptr [esp + 0x10], 1
// 0065a3f5  2944241c             sub dword ptr [esp + 0x1c], eax
// 0065a3f9  75a5                 jne 0x65a3a0
// 0065a3fb  5f                   pop edi
// 0065a3fc  5e                   pop esi
// 0065a3fd  5d                   pop ebp
// 0065a3fe  5b                   pop ebx
// 0065a3ff  83c410               add esp, 0x10
// 0065a402  c3                   ret 
// 0065a403  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0065a40a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0065a40e  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0065a414  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0065a41c  7414                 je 0x65a432
// 0065a41e  33ed                 xor ebp, ebp
// 0065a420  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 0065a428  c744241802000000     mov dword ptr [esp + 0x18], 2
// 0065a430  eb15                 jmp 0x65a447
// 0065a432  bd06000000           mov ebp, 6
// 0065a437  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0065a43f  c7442418feffffff     mov dword ptr [esp + 0x18], 0xfffffffe
// 0065a447  8bd5                 mov edx, ebp
// 0065a449  85c9                 test ecx, ecx
// 0065a44b  0f8610010000         jbe 0x65a561
// 0065a451  894c2414             mov dword ptr [esp + 0x14], ecx
// 0065a455  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0065a459  854c2410             test dword ptr [esp + 0x10], ecx
// 0065a45d  7422                 je 0x65a481
// 0065a45f  0fb606               movzx eax, byte ptr [esi]
// 0065a462  8aca                 mov cl, dl
// 0065a464  d3e8                 shr eax, cl
// 0065a466  b906000000           mov ecx, 6
// 0065a46b  2bca                 sub ecx, edx
// 0065a46d  bb3f3f0000           mov ebx, 0x3f3f
// 0065a472  d3fb                 sar ebx, cl
// 0065a474  83e003               and eax, 3
// 0065a477  8bca                 mov ecx, edx
// 0065a479  d2e0                 shl al, cl
// 0065a47b  221f                 and bl, byte ptr [edi]
// 0065a47d  0ad8                 or bl, al
// 0065a47f  881f                 mov byte ptr [edi], bl
// 0065a481  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0065a485  7506                 jne 0x65a48d
// 0065a487  46                   inc esi
// 0065a488  8bd5                 mov edx, ebp
// 0065a48a  47                   inc edi
// 0065a48b  eb04                 jmp 0x65a491
// 0065a48d  03542418             add edx, dword ptr [esp + 0x18]
// 0065a491  b801000000           mov eax, 1
// 0065a496  39442410             cmp dword ptr [esp + 0x10], eax
// 0065a49a  750a                 jne 0x65a4a6
// 0065a49c  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0065a4a4  eb04                 jmp 0x65a4aa
// 0065a4a6  d17c2410             sar dword ptr [esp + 0x10], 1
// 0065a4aa  29442414             sub dword ptr [esp + 0x14], eax
// 0065a4ae  75a5                 jne 0x65a455
// 0065a4b0  5f                   pop edi
// 0065a4b1  5e                   pop esi
// 0065a4b2  5d                   pop ebp
// 0065a4b3  5b                   pop ebx
// 0065a4b4  83c410               add esp, 0x10
// 0065a4b7  c3                   ret 
// 0065a4b8  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0065a4bf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0065a4c3  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0065a4c9  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0065a4d1  7414                 je 0x65a4e7
// 0065a4d3  33ed                 xor ebp, ebp
// 0065a4d5  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0065a4dd  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0065a4e5  eb15                 jmp 0x65a4fc
// 0065a4e7  bd07000000           mov ebp, 7
// 0065a4ec  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0065a4f4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0065a4fc  8bd5                 mov edx, ebp
// 0065a4fe  85c9                 test ecx, ecx
// 0065a500  765f                 jbe 0x65a561
// 0065a502  894c2414             mov dword ptr [esp + 0x14], ecx
// 0065a506  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065a50a  85442410             test dword ptr [esp + 0x10], eax
// 0065a50e  7422                 je 0x65a532
// 0065a510  0fb606               movzx eax, byte ptr [esi]
// 0065a513  8aca                 mov cl, dl
// 0065a515  d3e8                 shr eax, cl
// 0065a517  b907000000           mov ecx, 7
// 0065a51c  2bca                 sub ecx, edx
// 0065a51e  bb7f7f0000           mov ebx, 0x7f7f
// 0065a523  d3fb                 sar ebx, cl
// 0065a525  83e001               and eax, 1
// 0065a528  8bca                 mov ecx, edx
// 0065a52a  d2e0                 shl al, cl
// 0065a52c  221f                 and bl, byte ptr [edi]
// 0065a52e  0ad8                 or bl, al
// 0065a530  881f                 mov byte ptr [edi], bl
// 0065a532  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0065a536  7506                 jne 0x65a53e
// 0065a538  46                   inc esi
// 0065a539  8bd5                 mov edx, ebp
// 0065a53b  47                   inc edi
// 0065a53c  eb04                 jmp 0x65a542
// 0065a53e  03542418             add edx, dword ptr [esp + 0x18]
// 0065a542  b801000000           mov eax, 1
// 0065a547  39442410             cmp dword ptr [esp + 0x10], eax
// 0065a54b  750a                 jne 0x65a557
// 0065a54d  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0065a555  eb04                 jmp 0x65a55b
// 0065a557  d17c2410             sar dword ptr [esp + 0x10], 1
// 0065a55b  29442414             sub dword ptr [esp + 0x14], eax
// 0065a55f  75a5                 jne 0x65a506
// 0065a561  5f                   pop edi
// 0065a562  5e                   pop esi
// 0065a563  5d                   pop ebp
// 0065a564  5b                   pop ebx
// 0065a565  83c410               add esp, 0x10
// 0065a568  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_combine_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
