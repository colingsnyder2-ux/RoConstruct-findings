// roc 2010-06 00577850  unit: seg_00570000  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00577850
//
// 00577850  83ec10               sub esp, 0x10
// 00577853  817c241cff000000     cmp dword ptr [esp + 0x1c], 0xff
// 0057785b  7544                 jne 0x5778a1
// 0057785d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00577861  8a810b010000         mov al, byte ptr [ecx + 0x10b]
// 00577867  3c08                 cmp al, 8
// 00577869  0fb6c0               movzx eax, al
// 0057786c  720c                 jb 0x57787a
// 0057786e  c1e803               shr eax, 3
// 00577871  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 00577878  eb0d                 jmp 0x577887
// 0057787a  0faf81c8000000       imul eax, dword ptr [ecx + 0xc8]
// 00577881  83c007               add eax, 7
// 00577884  c1e803               shr eax, 3
// 00577887  50                   push eax
// 00577888  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 0057788e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00577892  40                   inc eax
// 00577893  50                   push eax
// 00577894  51                   push ecx
// 00577895  e88c152300           call 0x7a8e26
// 0057789a  83c40c               add esp, 0xc
// 0057789d  83c410               add esp, 0x10
// 005778a0  c3                   ret 
// 005778a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 005778a5  0fb6880b010000       movzx ecx, byte ptr [eax + 0x10b]
// 005778ac  53                   push ebx
// 005778ad  55                   push ebp
// 005778ae  56                   push esi
// 005778af  8bb0ec000000         mov esi, dword ptr [eax + 0xec]
// 005778b5  8bd1                 mov edx, ecx
// 005778b7  46                   inc esi
// 005778b8  83ea01               sub edx, 1
// 005778bb  57                   push edi
// 005778bc  0f84c6010000         je 0x577a88
// 005778c2  83ea01               sub edx, 1
// 005778c5  0f8408010000         je 0x5779d3
// 005778cb  83ea02               sub edx, 2
// 005778ce  7451                 je 0x577921
// 005778d0  8b80c8000000         mov eax, dword ptr [eax + 0xc8]
// 005778d6  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005778da  c1e903               shr ecx, 3
// 005778dd  8bf9                 mov edi, ecx
// 005778df  b380                 mov bl, 0x80
// 005778e1  85c0                 test eax, eax
// 005778e3  0f8648020000         jbe 0x577b31
// 005778e9  89442410             mov dword ptr [esp + 0x10], eax
// 005778ed  8d4900               lea ecx, [ecx]
// 005778f0  8a54242c             mov dl, byte ptr [esp + 0x2c]
// 005778f4  84da                 test dl, bl
// 005778f6  740b                 je 0x577903
// 005778f8  57                   push edi
// 005778f9  56                   push esi
// 005778fa  55                   push ebp
// 005778fb  e826152300           call 0x7a8e26
// 00577900  83c40c               add esp, 0xc
// 00577903  03f7                 add esi, edi
// 00577905  03ef                 add ebp, edi
// 00577907  80fb01               cmp bl, 1
// 0057790a  7504                 jne 0x577910
// 0057790c  b380                 mov bl, 0x80
// 0057790e  eb02                 jmp 0x577912
// 00577910  d0eb                 shr bl, 1
// 00577912  836c241001           sub dword ptr [esp + 0x10], 1
// 00577917  75d7                 jne 0x5778f0
// 00577919  5f                   pop edi
// 0057791a  5e                   pop esi
// 0057791b  5d                   pop ebp
// 0057791c  5b                   pop ebx
// 0057791d  83c410               add esp, 0x10
// 00577920  c3                   ret 
// 00577921  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 00577928  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0057792c  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00577932  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 0057793a  7411                 je 0x57794d
// 0057793c  b804000000           mov eax, 4
// 00577941  33ed                 xor ebp, ebp
// 00577943  89442414             mov dword ptr [esp + 0x14], eax
// 00577947  89442418             mov dword ptr [esp + 0x18], eax
// 0057794b  eb15                 jmp 0x577962
// 0057794d  bd04000000           mov ebp, 4
// 00577952  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057795a  c7442418fcffffff     mov dword ptr [esp + 0x18], 0xfffffffc
// 00577962  8bd5                 mov edx, ebp
// 00577964  85c9                 test ecx, ecx
// 00577966  0f86c5010000         jbe 0x577b31
// 0057796c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00577970  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00577974  85442410             test dword ptr [esp + 0x10], eax
// 00577978  7422                 je 0x57799c
// 0057797a  0fb606               movzx eax, byte ptr [esi]
// 0057797d  8aca                 mov cl, dl
// 0057797f  d3e8                 shr eax, cl
// 00577981  b904000000           mov ecx, 4
// 00577986  2bca                 sub ecx, edx
// 00577988  bb0f0f0000           mov ebx, 0xf0f
// 0057798d  d3fb                 sar ebx, cl
// 0057798f  83e00f               and eax, 0xf
// 00577992  8bca                 mov ecx, edx
// 00577994  d2e0                 shl al, cl
// 00577996  221f                 and bl, byte ptr [edi]
// 00577998  0ad8                 or bl, al
// 0057799a  881f                 mov byte ptr [edi], bl
// 0057799c  3b542414             cmp edx, dword ptr [esp + 0x14]
// 005779a0  7506                 jne 0x5779a8
// 005779a2  46                   inc esi
// 005779a3  8bd5                 mov edx, ebp
// 005779a5  47                   inc edi
// 005779a6  eb04                 jmp 0x5779ac
// 005779a8  03542418             add edx, dword ptr [esp + 0x18]
// 005779ac  b801000000           mov eax, 1
// 005779b1  39442410             cmp dword ptr [esp + 0x10], eax
// 005779b5  750a                 jne 0x5779c1
// 005779b7  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 005779bf  eb04                 jmp 0x5779c5
// 005779c1  d17c2410             sar dword ptr [esp + 0x10], 1
// 005779c5  2944241c             sub dword ptr [esp + 0x1c], eax
// 005779c9  75a5                 jne 0x577970
// 005779cb  5f                   pop edi
// 005779cc  5e                   pop esi
// 005779cd  5d                   pop ebp
// 005779ce  5b                   pop ebx
// 005779cf  83c410               add esp, 0x10
// 005779d2  c3                   ret 
// 005779d3  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 005779da  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005779de  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 005779e4  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 005779ec  7414                 je 0x577a02
// 005779ee  33ed                 xor ebp, ebp
// 005779f0  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 005779f8  c744241802000000     mov dword ptr [esp + 0x18], 2
// 00577a00  eb15                 jmp 0x577a17
// 00577a02  bd06000000           mov ebp, 6
// 00577a07  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00577a0f  c7442418feffffff     mov dword ptr [esp + 0x18], 0xfffffffe
// 00577a17  8bd5                 mov edx, ebp
// 00577a19  85c9                 test ecx, ecx
// 00577a1b  0f8610010000         jbe 0x577b31
// 00577a21  894c2414             mov dword ptr [esp + 0x14], ecx
// 00577a25  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00577a29  854c2410             test dword ptr [esp + 0x10], ecx
// 00577a2d  7422                 je 0x577a51
// 00577a2f  0fb606               movzx eax, byte ptr [esi]
// 00577a32  8aca                 mov cl, dl
// 00577a34  d3e8                 shr eax, cl
// 00577a36  b906000000           mov ecx, 6
// 00577a3b  2bca                 sub ecx, edx
// 00577a3d  bb3f3f0000           mov ebx, 0x3f3f
// 00577a42  d3fb                 sar ebx, cl
// 00577a44  83e003               and eax, 3
// 00577a47  8bca                 mov ecx, edx
// 00577a49  d2e0                 shl al, cl
// 00577a4b  221f                 and bl, byte ptr [edi]
// 00577a4d  0ad8                 or bl, al
// 00577a4f  881f                 mov byte ptr [edi], bl
// 00577a51  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00577a55  7506                 jne 0x577a5d
// 00577a57  46                   inc esi
// 00577a58  8bd5                 mov edx, ebp
// 00577a5a  47                   inc edi
// 00577a5b  eb04                 jmp 0x577a61
// 00577a5d  03542418             add edx, dword ptr [esp + 0x18]
// 00577a61  b801000000           mov eax, 1
// 00577a66  39442410             cmp dword ptr [esp + 0x10], eax
// 00577a6a  750a                 jne 0x577a76
// 00577a6c  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00577a74  eb04                 jmp 0x577a7a
// 00577a76  d17c2410             sar dword ptr [esp + 0x10], 1
// 00577a7a  29442414             sub dword ptr [esp + 0x14], eax
// 00577a7e  75a5                 jne 0x577a25
// 00577a80  5f                   pop edi
// 00577a81  5e                   pop esi
// 00577a82  5d                   pop ebp
// 00577a83  5b                   pop ebx
// 00577a84  83c410               add esp, 0x10
// 00577a87  c3                   ret 
// 00577a88  f7407000000100       test dword ptr [eax + 0x70], 0x10000
// 00577a8f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00577a93  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00577a99  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00577aa1  7414                 je 0x577ab7
// 00577aa3  33ed                 xor ebp, ebp
// 00577aa5  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00577aad  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00577ab5  eb15                 jmp 0x577acc
// 00577ab7  bd07000000           mov ebp, 7
// 00577abc  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00577ac4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00577acc  8bd5                 mov edx, ebp
// 00577ace  85c9                 test ecx, ecx
// 00577ad0  765f                 jbe 0x577b31
// 00577ad2  894c2414             mov dword ptr [esp + 0x14], ecx
// 00577ad6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00577ada  85442410             test dword ptr [esp + 0x10], eax
// 00577ade  7422                 je 0x577b02
// 00577ae0  0fb606               movzx eax, byte ptr [esi]
// 00577ae3  8aca                 mov cl, dl
// 00577ae5  d3e8                 shr eax, cl
// 00577ae7  b907000000           mov ecx, 7
// 00577aec  2bca                 sub ecx, edx
// 00577aee  bb7f7f0000           mov ebx, 0x7f7f
// 00577af3  d3fb                 sar ebx, cl
// 00577af5  83e001               and eax, 1
// 00577af8  8bca                 mov ecx, edx
// 00577afa  d2e0                 shl al, cl
// 00577afc  221f                 and bl, byte ptr [edi]
// 00577afe  0ad8                 or bl, al
// 00577b00  881f                 mov byte ptr [edi], bl
// 00577b02  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 00577b06  7506                 jne 0x577b0e
// 00577b08  46                   inc esi
// 00577b09  8bd5                 mov edx, ebp
// 00577b0b  47                   inc edi
// 00577b0c  eb04                 jmp 0x577b12
// 00577b0e  03542418             add edx, dword ptr [esp + 0x18]
// 00577b12  b801000000           mov eax, 1
// 00577b17  39442410             cmp dword ptr [esp + 0x10], eax
// 00577b1b  750a                 jne 0x577b27
// 00577b1d  c744241080000000     mov dword ptr [esp + 0x10], 0x80
// 00577b25  eb04                 jmp 0x577b2b
// 00577b27  d17c2410             sar dword ptr [esp + 0x10], 1
// 00577b2b  29442414             sub dword ptr [esp + 0x14], eax
// 00577b2f  75a5                 jne 0x577ad6
// 00577b31  5f                   pop edi
// 00577b32  5e                   pop esi
// 00577b33  5d                   pop ebp
// 00577b34  5b                   pop ebx
// 00577b35  83c410               add esp, 0x10
// 00577b38  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_combine_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
