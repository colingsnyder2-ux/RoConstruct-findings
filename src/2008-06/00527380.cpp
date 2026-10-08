// from server: 100% by auto
// roc 2008-06 00527380  unit: G3D::Line  size: 557 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527380
//
// 00527380  51                   push ecx
// 00527381  8b442410             mov eax, dword ptr [esp + 0x10]
// 00527385  83f806               cmp eax, 6
// 00527388  0f8d1d020000         jge 0x5275ab
// 0052738e  53                   push ebx
// 0052738f  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00527393  0fb64b0b             movzx ecx, byte ptr [ebx + 0xb]
// 00527397  55                   push ebp
// 00527398  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052739c  56                   push esi
// 0052739d  8bd1                 mov edx, ecx
// 0052739f  83ea01               sub edx, 1
// 005273a2  57                   push edi
// 005273a3  8d348500000000       lea esi, [eax*4]
// 005273aa  0f844c010000         je 0x5274fc
// 005273b0  83ea01               sub edx, 1
// 005273b3  0f84c7000000         je 0x527480
// 005273b9  83ea02               sub edx, 2
// 005273bc  7453                 je 0x527411
// 005273be  8b13                 mov edx, dword ptr [ebx]
// 005273c0  8bbeec948200         mov edi, dword ptr [esi + 0x8294ec]
// 005273c6  c1e903               shr ecx, 3
// 005273c9  89542410             mov dword ptr [esp + 0x10], edx
// 005273cd  894c2420             mov dword ptr [esp + 0x20], ecx
// 005273d1  3bfa                 cmp edi, edx
// 005273d3  0f838e010000         jae 0x527567
// 005273d9  8da42400000000       lea esp, [esp]
// 005273e0  8bc7                 mov eax, edi
// 005273e2  0fafc1               imul eax, ecx
// 005273e5  0344241c             add eax, dword ptr [esp + 0x1c]
// 005273e9  3be8                 cmp ebp, eax
// 005273eb  7413                 je 0x527400
// 005273ed  51                   push ecx
// 005273ee  50                   push eax
// 005273ef  55                   push ebp
// 005273f0  e8eba31700           call 0x6a17e0
// 005273f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005273f9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005273fd  83c40c               add esp, 0xc
// 00527400  03be08958200         add edi, dword ptr [esi + 0x829508]
// 00527406  03e9                 add ebp, ecx
// 00527408  3bfa                 cmp edi, edx
// 0052740a  72d4                 jb 0x5273e0
// 0052740c  e956010000           jmp 0x527567
// 00527411  8b0b                 mov ecx, dword ptr [ebx]
// 00527413  8b86ec948200         mov eax, dword ptr [esi + 0x8294ec]
// 00527419  33d2                 xor edx, edx
// 0052741b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052741f  896c2420             mov dword ptr [esp + 0x20], ebp
// 00527423  bf04000000           mov edi, 4
// 00527428  3bc1                 cmp eax, ecx
// 0052742a  0f8337010000         jae 0x527567
// 00527430  8ad8                 mov bl, al
// 00527432  80e301               and bl, 1
// 00527435  02db                 add bl, bl
// 00527437  02db                 add bl, bl
// 00527439  b904000000           mov ecx, 4
// 0052743e  2acb                 sub cl, bl
// 00527440  8bd8                 mov ebx, eax
// 00527442  d1eb                 shr ebx, 1
// 00527444  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 00527448  d3eb                 shr ebx, cl
// 0052744a  8bcf                 mov ecx, edi
// 0052744c  83e30f               and ebx, 0xf
// 0052744f  d3e3                 shl ebx, cl
// 00527451  0bd3                 or edx, ebx
// 00527453  85ff                 test edi, edi
// 00527455  7512                 jne 0x527469
// 00527457  8d7904               lea edi, [ecx + 4]
// 0052745a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052745e  8811                 mov byte ptr [ecx], dl
// 00527460  41                   inc ecx
// 00527461  894c2420             mov dword ptr [esp + 0x20], ecx
// 00527465  33d2                 xor edx, edx
// 00527467  eb03                 jmp 0x52746c
// 00527469  83ef04               sub edi, 4
// 0052746c  038608958200         add eax, dword ptr [esi + 0x829508]
// 00527472  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00527476  72b8                 jb 0x527430
// 00527478  83ff04               cmp edi, 4
// 0052747b  e9db000000           jmp 0x52755b
// 00527480  8b0b                 mov ecx, dword ptr [ebx]
// 00527482  8b86ec948200         mov eax, dword ptr [esi + 0x8294ec]
// 00527488  33d2                 xor edx, edx
// 0052748a  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052748e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00527492  bf06000000           mov edi, 6
// 00527497  3bc1                 cmp eax, ecx
// 00527499  0f83c8000000         jae 0x527567
// 0052749f  90                   nop 
// 005274a0  8ad8                 mov bl, al
// 005274a2  80e303               and bl, 3
// 005274a5  b903000000           mov ecx, 3
// 005274aa  2acb                 sub cl, bl
// 005274ac  8bd8                 mov ebx, eax
// 005274ae  c1eb02               shr ebx, 2
// 005274b1  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 005274b5  02c9                 add cl, cl
// 005274b7  d3eb                 shr ebx, cl
// 005274b9  8bcf                 mov ecx, edi
// 005274bb  83e303               and ebx, 3
// 005274be  d3e3                 shl ebx, cl
// 005274c0  0bd3                 or edx, ebx
// 005274c2  85ff                 test edi, edi
// 005274c4  7512                 jne 0x5274d8
// 005274c6  8d7906               lea edi, [ecx + 6]
// 005274c9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005274cd  8811                 mov byte ptr [ecx], dl
// 005274cf  41                   inc ecx
// 005274d0  894c2420             mov dword ptr [esp + 0x20], ecx
// 005274d4  33d2                 xor edx, edx
// 005274d6  eb03                 jmp 0x5274db
// 005274d8  83ef02               sub edi, 2
// 005274db  038608958200         add eax, dword ptr [esi + 0x829508]
// 005274e1  3b442410             cmp eax, dword ptr [esp + 0x10]
// 005274e5  72b9                 jb 0x5274a0
// 005274e7  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005274eb  83ff06               cmp edi, 6
// 005274ee  0f8473000000         je 0x527567
// 005274f4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005274f8  8811                 mov byte ptr [ecx], dl
// 005274fa  eb6b                 jmp 0x527567
// 005274fc  8b0b                 mov ecx, dword ptr [ebx]
// 005274fe  8b86ec948200         mov eax, dword ptr [esi + 0x8294ec]
// 00527504  33d2                 xor edx, edx
// 00527506  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052750a  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052750e  8d7a07               lea edi, [edx + 7]
// 00527511  3bc1                 cmp eax, ecx
// 00527513  7352                 jae 0x527567
// 00527515  8ad8                 mov bl, al
// 00527517  80e307               and bl, 7
// 0052751a  b907000000           mov ecx, 7
// 0052751f  2acb                 sub cl, bl
// 00527521  8bd8                 mov ebx, eax
// 00527523  c1eb03               shr ebx, 3
// 00527526  0fb61c2b             movzx ebx, byte ptr [ebx + ebp]
// 0052752a  d3eb                 shr ebx, cl
// 0052752c  8bcf                 mov ecx, edi
// 0052752e  83e301               and ebx, 1
// 00527531  d3e3                 shl ebx, cl
// 00527533  0bd3                 or edx, ebx
// 00527535  85ff                 test edi, edi
// 00527537  7512                 jne 0x52754b
// 00527539  8d7907               lea edi, [ecx + 7]
// 0052753c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00527540  8811                 mov byte ptr [ecx], dl
// 00527542  41                   inc ecx
// 00527543  894c2420             mov dword ptr [esp + 0x20], ecx
// 00527547  33d2                 xor edx, edx
// 00527549  eb01                 jmp 0x52754c
// 0052754b  4f                   dec edi
// 0052754c  038608958200         add eax, dword ptr [esi + 0x829508]
// 00527552  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00527556  72bd                 jb 0x527515
// 00527558  83ff07               cmp edi, 7
// 0052755b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0052755f  7406                 je 0x527567
// 00527561  8b442420             mov eax, dword ptr [esp + 0x20]
// 00527565  8810                 mov byte ptr [eax], dl
// 00527567  8b8e08958200         mov ecx, dword ptr [esi + 0x829508]
// 0052756d  8b03                 mov eax, dword ptr [ebx]
// 0052756f  8bd1                 mov edx, ecx
// 00527571  2b96ec948200         sub edx, dword ptr [esi + 0x8294ec]
// 00527577  8d4402ff             lea eax, [edx + eax - 1]
// 0052757b  33d2                 xor edx, edx
// 0052757d  f7f1                 div ecx
// 0052757f  8a4b0b               mov cl, byte ptr [ebx + 0xb]
// 00527582  80f908               cmp cl, 8
// 00527585  0fb6c9               movzx ecx, cl
// 00527588  8903                 mov dword ptr [ebx], eax
// 0052758a  720f                 jb 0x52759b
// 0052758c  c1e903               shr ecx, 3
// 0052758f  0fafc8               imul ecx, eax
// 00527592  5f                   pop edi
// 00527593  5e                   pop esi
// 00527594  5d                   pop ebp
// 00527595  894b04               mov dword ptr [ebx + 4], ecx
// 00527598  5b                   pop ebx
// 00527599  59                   pop ecx
// 0052759a  c3                   ret 
// 0052759b  0fafc8               imul ecx, eax
// 0052759e  5f                   pop edi
// 0052759f  83c107               add ecx, 7
// 005275a2  5e                   pop esi
// 005275a3  c1e903               shr ecx, 3
// 005275a6  5d                   pop ebp
// 005275a7  894b04               mov dword ptr [ebx + 4], ecx
// 005275aa  5b                   pop ebx
// 005275ab  59                   pop ecx
// 005275ac  c3                   ret 
// library libpng-1.2.6/pngwutil.c (function _png_do_write_interlace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngwutil.c
