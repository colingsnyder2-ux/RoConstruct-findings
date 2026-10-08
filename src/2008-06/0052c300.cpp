// from server: 100% by auto
// roc 2008-06 0052c300  unit: seg_00520000  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052c300
//
// 0052c300  83ec10               sub esp, 0x10
// 0052c303  817c241cff000000     cmp dword ptr [esp + 0x1c], 0xff
// 0052c30b  7544                 jne 0x52c351
// 0052c30d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052c311  8a810b010000         mov al, byte ptr [ecx + 0x10b]
// 0052c317  3c08                 cmp al, 8
// 0052c319  0fb6c0               movzx eax, al
// 0052c31c  720c                 jb 0x52c32a
// 0052c31e  c1e803               shr eax, 3
// 0052c321  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 0052c328  eb0d                 jmp 0x52c337
// 0052c32a  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 0052c331  83c007               add eax, 7
// 0052c334  c1e803               shr eax, 3
// 0052c337  50                   push eax
// 0052c338  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0052c33e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052c342  40                   inc eax
// 0052c343  50                   push eax
// 0052c344  51                   push ecx
// 0052c345  e896541700           call 0x6a17e0
// 0052c34a  83c40c               add esp, 0xc
// 0052c34d  83c410               add esp, 0x10
// 0052c350  c3                   ret 
// 0052c351  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052c355  0fb6880b010000       movzx ecx, byte ptr [eax + 0x10b]
// 0052c35c  53                   push ebx
// 0052c35d  55                   push ebp
// 0052c35e  56                   push esi
// 0052c35f  8bb0ec000000         mov esi, dword ptr [eax + 0xec]
// 0052c365  8bd1                 mov edx, ecx
// 0052c367  46                   inc esi
// 0052c368  83ea01               sub edx, 1
// 0052c36b  57                   push edi
// 0052c36c  0f84c6010000         je 0x52c538
// 0052c372  83ea01               sub edx, 1
// 0052c375  0f8408010000         je 0x52c483
// 0052c37b  83ea02               sub edx, 2
// 0052c37e  7451                 je 0x52c3d1
// 0052c380  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 0052c386  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052c38a  c1e903               shr ecx, 3
// 0052c38d  8bf9                 mov edi, ecx
// 0052c38f  b380                 mov bl, 0x80
// 0052c391  85c0                 test eax, eax
// 0052c393  0f8648020000         jbe 0x52c5e1
// 0052c399  89442410             mov dword ptr [esp + 0x10], eax
// 0052c39d  8d4900               lea ecx, [ecx]
// 0052c3a0  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 0052c3a4  84da                 test dl, bl
// 0052c3a6  740b                 je 0x52c3b3
// 0052c3a8  57                   push edi
// 0052c3a9  56                   push esi
// 0052c3aa  55                   push ebp
// 0052c3ab  e830541700           call 0x6a17e0
// 0052c3b0  83c40c               add esp, 0xc
// 0052c3b3  03f7                 add esi, edi
// 0052c3b5  03ef                 add ebp, edi
// 0052c3b7  80fb01               cmp bl, 1
// 0052c3ba  7504                 jne 0x52c3c0
// 0052c3bc  b380                 mov bl, 0x80
// 0052c3be  eb02                 jmp 0x52c3c2
// 0052c3c0  d0eb                 shr bl, 1
// 0052c3c2  836c241001           sub dword ptr [esp + 0x10], 1
// 0052c3c7  75d7                 jne 0x52c3a0
// 0052c3c9  5f                   pop edi
// 0052c3ca  5e                   pop esi
// 0052c3cb  5d                   pop ebp
// 0052c3cc  5b                   pop ebx
// 0052c3cd  83c410               add esp, 0x10
// 0052c3d0  c3                   ret 
// 0052c3d1  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0052c3d8  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052c3dc  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0052c3e2  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0052c3ea  7411                 je 0x52c3fd
// 0052c3ec  b804000000           mov eax, 4
// 0052c3f1  33ed                 xor ebp, ebp
// 0052c3f3  89442414             mov dword ptr [esp + 0x14], eax
// 0052c3f7  89442418             mov dword ptr [esp + 0x18], eax
// 0052c3fb  eb15                 jmp 0x52c412
// 0052c3fd  bd04000000           mov ebp, 4
// 0052c402  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0052c40a  c7442418fcffffff     mov dword ptr [esp + 0x18], 0xfffffffc
// 0052c412  8bd5                 mov edx, ebp
// 0052c414  85c9                 test ecx, ecx
// 0052c416  0f86c5010000         jbe 0x52c5e1
// 0052c41c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0052c420  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052c424  85442410             test dword ptr [esp + 0x10], eax
// 0052c428  7422                 je 0x52c44c
// 0052c42a  0fb606               movzx eax, byte ptr [esi]
// 0052c42d  8aca                 mov cl, dl
// 0052c42f  d3e8                 shr eax, cl
// 0052c431  b904000000           mov ecx, 4
// 0052c436  2bca                 sub ecx, edx
// 0052c438  bb0f0f0000           mov ebx, 0xf0f
// 0052c43d  d3fb                 sar ebx, cl
// 0052c43f  83e00f               and eax, 0xf
// 0052c442  8bca                 mov ecx, edx
// 0052c444  d2e0                 shl al, cl
// 0052c446  221f                 and bl, byte ptr [edi]
// 0052c448  0ad8                 or bl, al
// 0052c44a  881f                 mov byte ptr [edi], bl
// 0052c44c  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0052c450  7506                 jne 0x52c458
// 0052c452  46                   inc esi
// 0052c453  8bd5                 mov edx, ebp
// 0052c455  47                   inc edi
// 0052c456  eb04                 jmp 0x52c45c
// 0052c458  03542418             add edx, dword ptr [esp + 0x18]
// 0052c45c  b801000000           mov eax, 1
// 0052c461  39442410             cmp dword ptr [esp + 0x10], eax
// 0052c465  750a                 jne 0x52c471
// 0052c467  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0052c46f  eb04                 jmp 0x52c475
// 0052c471  d17c2410             sar dword ptr [esp + 0x10], 1
// 0052c475  2944241c             sub dword ptr [esp + 0x1c], eax
// 0052c479  75a5                 jne 0x52c420
// 0052c47b  5f                   pop edi
// 0052c47c  5e                   pop esi
// 0052c47d  5d                   pop ebp
// 0052c47e  5b                   pop ebx
// 0052c47f  83c410               add esp, 0x10
// 0052c482  c3                   ret 
// 0052c483  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0052c48a  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052c48e  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0052c494  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0052c49c  7414                 je 0x52c4b2
// 0052c49e  33ed                 xor ebp, ebp
// 0052c4a0  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 0052c4a8  c744241802000000     mov dword ptr [esp + 0x18], 2
// 0052c4b0  eb15                 jmp 0x52c4c7
// 0052c4b2  bd06000000           mov ebp, 6
// 0052c4b7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0052c4bf  c7442418feffffff     mov dword ptr [esp + 0x18], 0xfffffffe
// 0052c4c7  8bd5                 mov edx, ebp
// 0052c4c9  85c9                 test ecx, ecx
// 0052c4cb  0f8610010000         jbe 0x52c5e1
// 0052c4d1  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052c4d5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052c4d9  854c2410             test dword ptr [esp + 0x10], ecx
// 0052c4dd  7422                 je 0x52c501
// 0052c4df  0fb606               movzx eax, byte ptr [esi]
// 0052c4e2  8aca                 mov cl, dl
// 0052c4e4  d3e8                 shr eax, cl
// 0052c4e6  b906000000           mov ecx, 6
// 0052c4eb  2bca                 sub ecx, edx
// 0052c4ed  bb3f3f0000           mov ebx, 0x3f3f
// 0052c4f2  d3fb                 sar ebx, cl
// 0052c4f4  83e003               and eax, 3
// 0052c4f7  8bca                 mov ecx, edx
// 0052c4f9  d2e0                 shl al, cl
// 0052c4fb  221f                 and bl, byte ptr [edi]
// 0052c4fd  0ad8                 or bl, al
// 0052c4ff  881f                 mov byte ptr [edi], bl
// 0052c501  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0052c505  7506                 jne 0x52c50d
// 0052c507  46                   inc esi
// 0052c508  8bd5                 mov edx, ebp
// 0052c50a  47                   inc edi
// 0052c50b  eb04                 jmp 0x52c511
// 0052c50d  03542418             add edx, dword ptr [esp + 0x18]
// 0052c511  b801000000           mov eax, 1
// 0052c516  39442410             cmp dword ptr [esp + 0x10], eax
// 0052c51a  750a                 jne 0x52c526
// 0052c51c  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0052c524  eb04                 jmp 0x52c52a
// 0052c526  d17c2410             sar dword ptr [esp + 0x10], 1
// 0052c52a  29442414             sub dword ptr [esp + 0x14], eax
// 0052c52e  75a5                 jne 0x52c4d5
// 0052c530  5f                   pop edi
// 0052c531  5e                   pop esi
// 0052c532  5d                   pop ebp
// 0052c533  5b                   pop ebx
// 0052c534  83c410               add esp, 0x10
// 0052c537  c3                   ret 
// 0052c538  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 0052c53f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0052c543  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 0052c549  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0052c551  7414                 je 0x52c567
// 0052c553  33ed                 xor ebp, ebp
// 0052c555  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0052c55d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0052c565  eb15                 jmp 0x52c57c
// 0052c567  bd07000000           mov ebp, 7
// 0052c56c  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0052c574  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0052c57c  8bd5                 mov edx, ebp
// 0052c57e  85c9                 test ecx, ecx
// 0052c580  765f                 jbe 0x52c5e1
// 0052c582  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052c586  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052c58a  85442410             test dword ptr [esp + 0x10], eax
// 0052c58e  7422                 je 0x52c5b2
// 0052c590  0fb606               movzx eax, byte ptr [esi]
// 0052c593  8aca                 mov cl, dl
// 0052c595  d3e8                 shr eax, cl
// 0052c597  b907000000           mov ecx, 7
// 0052c59c  2bca                 sub ecx, edx
// 0052c59e  bb7f7f0000           mov ebx, 0x7f7f
// 0052c5a3  d3fb                 sar ebx, cl
// 0052c5a5  83e001               and eax, 1
// 0052c5a8  8bca                 mov ecx, edx
// 0052c5aa  d2e0                 shl al, cl
// 0052c5ac  221f                 and bl, byte ptr [edi]
// 0052c5ae  0ad8                 or bl, al
// 0052c5b0  881f                 mov byte ptr [edi], bl
// 0052c5b2  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0052c5b6  7506                 jne 0x52c5be
// 0052c5b8  46                   inc esi
// 0052c5b9  8bd5                 mov edx, ebp
// 0052c5bb  47                   inc edi
// 0052c5bc  eb04                 jmp 0x52c5c2
// 0052c5be  03542418             add edx, dword ptr [esp + 0x18]
// 0052c5c2  b801000000           mov eax, 1
// 0052c5c7  39442410             cmp dword ptr [esp + 0x10], eax
// 0052c5cb  750a                 jne 0x52c5d7
// 0052c5cd  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0052c5d5  eb04                 jmp 0x52c5db
// 0052c5d7  d17c2410             sar dword ptr [esp + 0x10], 1
// 0052c5db  29442414             sub dword ptr [esp + 0x14], eax
// 0052c5df  75a5                 jne 0x52c586
// 0052c5e1  5f                   pop edi
// 0052c5e2  5e                   pop esi
// 0052c5e3  5d                   pop ebp
// 0052c5e4  5b                   pop ebx
// 0052c5e5  83c410               add esp, 0x10
// 0052c5e8  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_combine_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
