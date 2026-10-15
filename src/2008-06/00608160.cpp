// roc 2008-06 00608160  unit: RBX::BlockBlockContact  size: 1047 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608160
//
// 00608160  83ec48               sub esp, 0x48
// 00608163  53                   push ebx
// 00608164  55                   push ebp
// 00608165  56                   push esi
// 00608166  8b742458             mov esi, dword ptr [esp + 0x58]
// 0060816a  d94604               fld dword ptr [esi + 4]
// 0060816d  57                   push edi
// 0060816e  8bf9                 mov edi, ecx
// 00608170  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00608174  d8591c               fcomp dword ptr [ecx + 0x1c]
// 00608177  8d5918               lea ebx, [ecx + 0x18]
// 0060817a  c644241001           mov byte ptr [esp + 0x10], 1
// 0060817f  c644241101           mov byte ptr [esp + 0x11], 1
// 00608184  c644241201           mov byte ptr [esp + 0x12], 1
// 00608189  dfe0                 fnstsw ax
// 0060818b  c644241301           mov byte ptr [esp + 0x13], 1
// 00608190  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00608198  f6c401               test ah, 1
// 0060819b  7507                 jne 0x6081a4
// 0060819d  c644241b01           mov byte ptr [esp + 0x1b], 1
// 006081a2  eb0a                 jmp 0x6081ae
// 006081a4  c644241b00           mov byte ptr [esp + 0x1b], 0
// 006081a9  c644241300           mov byte ptr [esp + 0x13], 0
// 006081ae  d906                 fld dword ptr [esi]
// 006081b0  d9e0                 fchs 
// 006081b2  d813                 fcom dword ptr [ebx]
// 006081b4  dfe0                 fnstsw ax
// 006081b6  f6c441               test ah, 0x41
// 006081b9  7a07                 jp 0x6081c2
// 006081bb  c644241f01           mov byte ptr [esp + 0x1f], 1
// 006081c0  eb0a                 jmp 0x6081cc
// 006081c2  c644241f00           mov byte ptr [esp + 0x1f], 0
// 006081c7  c644241300           mov byte ptr [esp + 0x13], 0
// 006081cc  d94604               fld dword ptr [esi + 4]
// 006081cf  d9e0                 fchs 
// 006081d1  d85304               fcom dword ptr [ebx + 4]
// 006081d4  dfe0                 fnstsw ax
// 006081d6  f6c441               test ah, 0x41
// 006081d9  7a07                 jp 0x6081e2
// 006081db  c644242301           mov byte ptr [esp + 0x23], 1
// 006081e0  eb0a                 jmp 0x6081ec
// 006081e2  c644242300           mov byte ptr [esp + 0x23], 0
// 006081e7  c644241300           mov byte ptr [esp + 0x13], 0
// 006081ec  d906                 fld dword ptr [esi]
// 006081ee  d81b                 fcomp dword ptr [ebx]
// 006081f0  dfe0                 fnstsw ax
// 006081f2  f6c401               test ah, 1
// 006081f5  7507                 jne 0x6081fe
// 006081f7  c644242701           mov byte ptr [esp + 0x27], 1
// 006081fc  eb0a                 jmp 0x608208
// 006081fe  c644242700           mov byte ptr [esp + 0x27], 0
// 00608203  c644241300           mov byte ptr [esp + 0x13], 0
// 00608208  d94604               fld dword ptr [esi + 4]
// 0060820b  d85bfc               fcomp dword ptr [ebx - 4]
// 0060820e  dfe0                 fnstsw ax
// 00608210  f6c401               test ah, 1
// 00608213  7507                 jne 0x60821c
// 00608215  c644241a01           mov byte ptr [esp + 0x1a], 1
// 0060821a  eb0a                 jmp 0x608226
// 0060821c  c644241a00           mov byte ptr [esp + 0x1a], 0
// 00608221  c644241200           mov byte ptr [esp + 0x12], 0
// 00608226  d9c9                 fxch st(1)
// 00608228  d853f8               fcom dword ptr [ebx - 8]
// 0060822b  dfe0                 fnstsw ax
// 0060822d  f6c441               test ah, 0x41
// 00608230  7a07                 jp 0x608239
// 00608232  c644241e01           mov byte ptr [esp + 0x1e], 1
// 00608237  eb0a                 jmp 0x608243
// 00608239  c644241e00           mov byte ptr [esp + 0x1e], 0
// 0060823e  c644241200           mov byte ptr [esp + 0x12], 0
// 00608243  d9c9                 fxch st(1)
// 00608245  d853fc               fcom dword ptr [ebx - 4]
// 00608248  dfe0                 fnstsw ax
// 0060824a  f6c441               test ah, 0x41
// 0060824d  7a07                 jp 0x608256
// 0060824f  c644242201           mov byte ptr [esp + 0x22], 1
// 00608254  eb0a                 jmp 0x608260
// 00608256  c644242200           mov byte ptr [esp + 0x22], 0
// 0060825b  c644241200           mov byte ptr [esp + 0x12], 0
// 00608260  d906                 fld dword ptr [esi]
// 00608262  d85bf8               fcomp dword ptr [ebx - 8]
// 00608265  dfe0                 fnstsw ax
// 00608267  f6c401               test ah, 1
// 0060826a  7507                 jne 0x608273
// 0060826c  c644242601           mov byte ptr [esp + 0x26], 1
// 00608271  eb0a                 jmp 0x60827d
// 00608273  c644242600           mov byte ptr [esp + 0x26], 0
// 00608278  c644241200           mov byte ptr [esp + 0x12], 0
// 0060827d  d94604               fld dword ptr [esi + 4]
// 00608280  d85bf4               fcomp dword ptr [ebx - 0xc]
// 00608283  dfe0                 fnstsw ax
// 00608285  f6c401               test ah, 1
// 00608288  7507                 jne 0x608291
// 0060828a  c644241901           mov byte ptr [esp + 0x19], 1
// 0060828f  eb0a                 jmp 0x60829b
// 00608291  c644241900           mov byte ptr [esp + 0x19], 0
// 00608296  c644241100           mov byte ptr [esp + 0x11], 0
// 0060829b  d9c9                 fxch st(1)
// 0060829d  d85108               fcom dword ptr [ecx + 8]
// 006082a0  dfe0                 fnstsw ax
// 006082a2  f6c441               test ah, 0x41
// 006082a5  7a07                 jp 0x6082ae
// 006082a7  c644241d01           mov byte ptr [esp + 0x1d], 1
// 006082ac  eb0a                 jmp 0x6082b8
// 006082ae  c644241d00           mov byte ptr [esp + 0x1d], 0
// 006082b3  c644241100           mov byte ptr [esp + 0x11], 0
// 006082b8  d9c9                 fxch st(1)
// 006082ba  d853f4               fcom dword ptr [ebx - 0xc]
// 006082bd  dfe0                 fnstsw ax
// 006082bf  f6c441               test ah, 0x41
// 006082c2  7a07                 jp 0x6082cb
// 006082c4  c644242101           mov byte ptr [esp + 0x21], 1
// 006082c9  eb0a                 jmp 0x6082d5
// 006082cb  c644242100           mov byte ptr [esp + 0x21], 0
// 006082d0  c644241100           mov byte ptr [esp + 0x11], 0
// 006082d5  d906                 fld dword ptr [esi]
// 006082d7  d85908               fcomp dword ptr [ecx + 8]
// 006082da  dfe0                 fnstsw ax
// 006082dc  f6c401               test ah, 1
// 006082df  7507                 jne 0x6082e8
// 006082e1  c644242501           mov byte ptr [esp + 0x25], 1
// 006082e6  eb0a                 jmp 0x6082f2
// 006082e8  c644242500           mov byte ptr [esp + 0x25], 0
// 006082ed  c644241100           mov byte ptr [esp + 0x11], 0
// 006082f2  d94604               fld dword ptr [esi + 4]
// 006082f5  d85bec               fcomp dword ptr [ebx - 0x14]
// 006082f8  dfe0                 fnstsw ax
// 006082fa  f6c401               test ah, 1
// 006082fd  7507                 jne 0x608306
// 006082ff  c644241801           mov byte ptr [esp + 0x18], 1
// 00608304  eb0a                 jmp 0x608310
// 00608306  c644241800           mov byte ptr [esp + 0x18], 0
// 0060830b  c644241000           mov byte ptr [esp + 0x10], 0
// 00608310  d9c9                 fxch st(1)
// 00608312  d819                 fcomp dword ptr [ecx]
// 00608314  dfe0                 fnstsw ax
// 00608316  f6c441               test ah, 0x41
// 00608319  7a07                 jp 0x608322
// 0060831b  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00608320  eb0a                 jmp 0x60832c
// 00608322  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00608327  c644241000           mov byte ptr [esp + 0x10], 0
// 0060832c  d85bec               fcomp dword ptr [ebx - 0x14]
// 0060832f  dfe0                 fnstsw ax
// 00608331  f6c441               test ah, 0x41
// 00608334  7a07                 jp 0x60833d
// 00608336  c644242001           mov byte ptr [esp + 0x20], 1
// 0060833b  eb0a                 jmp 0x608347
// 0060833d  c644242000           mov byte ptr [esp + 0x20], 0
// 00608342  c644241000           mov byte ptr [esp + 0x10], 0
// 00608347  d906                 fld dword ptr [esi]
// 00608349  d819                 fcomp dword ptr [ecx]
// 0060834b  dfe0                 fnstsw ax
// 0060834d  f6c401               test ah, 1
// 00608350  7507                 jne 0x608359
// 00608352  c644242401           mov byte ptr [esp + 0x24], 1
// 00608357  eb0a                 jmp 0x608363
// 00608359  c644242400           mov byte ptr [esp + 0x24], 0
// 0060835e  c644241000           mov byte ptr [esp + 0x10], 0
// 00608363  bd03000000           mov ebp, 3
// 00608368  807c2c1000           cmp byte ptr [esp + ebp + 0x10], 0
// 0060836d  7420                 je 0x60838f
// 0060836f  8b4774               mov eax, dword ptr [edi + 0x74]
// 00608372  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 00608375  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00608378  50                   push eax
// 00608379  8b4770               mov eax, dword ptr [edi + 0x70]
// 0060837c  51                   push ecx
// 0060837d  55                   push ebp
// 0060837e  52                   push edx
// 0060837f  50                   push eax
// 00608380  8bcf                 mov ecx, edi
// 00608382  e809fcffff           call 0x607f90
// 00608387  ff442414             inc dword ptr [esp + 0x14]
// 0060838b  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0060838f  83ed01               sub ebp, 1
// 00608392  79d4                 jns 0x608368
// 00608394  b804000000           mov eax, 4
// 00608399  39442414             cmp dword ptr [esp + 0x14], eax
// 0060839d  0f84ca010000         je 0x60856d
// 006083a3  d94604               fld dword ptr [esi + 4]
// 006083a6  c644245c01           mov byte ptr [esp + 0x5c], 1
// 006083ab  d906                 fld dword ptr [esi]
// 006083ad  c644245d01           mov byte ptr [esp + 0x5d], 1
// 006083b2  d95c2438             fstp dword ptr [esp + 0x38]
// 006083b6  c644245e01           mov byte ptr [esp + 0x5e], 1
// 006083bb  c644245f01           mov byte ptr [esp + 0x5f], 1
// 006083c0  d95c243c             fstp dword ptr [esp + 0x3c]
// 006083c4  8d68ff               lea ebp, [eax - 1]
// 006083c7  d906                 fld dword ptr [esi]
// 006083c9  8bd3                 mov edx, ebx
// 006083cb  d9e0                 fchs 
// 006083cd  d9c0                 fld st(0)
// 006083cf  d94604               fld dword ptr [esi + 4]
// 006083d2  d9c9                 fxch st(1)
// 006083d4  d95c2440             fstp dword ptr [esp + 0x40]
// 006083d8  d95c2444             fstp dword ptr [esp + 0x44]
// 006083dc  d94604               fld dword ptr [esi + 4]
// 006083df  d9e0                 fchs 
// 006083e1  d9c0                 fld st(0)
// 006083e3  d9ca                 fxch st(2)
// 006083e5  d95c2448             fstp dword ptr [esp + 0x48]
// 006083e9  d9c9                 fxch st(1)
// 006083eb  d95c244c             fstp dword ptr [esp + 0x4c]
// 006083ef  d906                 fld dword ptr [esi]
// 006083f1  8d742434             lea esi, [esp + 0x34]
// 006083f5  d95c2450             fstp dword ptr [esp + 0x50]
// 006083f9  d95c2454             fstp dword ptr [esp + 0x54]
// 006083fd  d9ee                 fldz 
// 006083ff  eb04                 jmp 0x608405
// 00608401  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00608405  8d4503               lea eax, [ebp + 3]
// 00608408  2503000080           and eax, 0x80000003
// 0060840d  7905                 jns 0x608414
// 0060840f  48                   dec eax
// 00608410  83c8fc               or eax, 0xfffffffc
// 00608413  40                   inc eax
// 00608414  d904c1               fld dword ptr [ecx + eax*8]
// 00608417  8d04c1               lea eax, [ecx + eax*8]
// 0060841a  d822                 fsub dword ptr [edx]
// 0060841c  33c9                 xor ecx, ecx
// 0060841e  d94004               fld dword ptr [eax + 4]
// 00608421  d86204               fsub dword ptr [edx + 4]
// 00608424  d944cc38             fld dword ptr [esp + ecx*8 + 0x38]
// 00608428  d822                 fsub dword ptr [edx]
// 0060842a  d944cc3c             fld dword ptr [esp + ecx*8 + 0x3c]
// 0060842e  d86204               fsub dword ptr [edx + 4]
// 00608431  d8cb                 fmul st(3)
// 00608433  d9c9                 fxch st(1)
// 00608435  d8ca                 fmul st(2)
// 00608437  dee9                 fsubp st(1)
// 00608439  d8db                 fcomp st(3)
// 0060843b  dfe0                 fnstsw ax
// 0060843d  f6c401               test ah, 1
// 00608440  7506                 jne 0x608448
// 00608442  c6040e01             mov byte ptr [esi + ecx], 1
// 00608446  eb09                 jmp 0x608451
// 00608448  c6040e00             mov byte ptr [esi + ecx], 0
// 0060844c  c6440c5c00           mov byte ptr [esp + ecx + 0x5c], 0
// 00608451  41                   inc ecx
// 00608452  83f904               cmp ecx, 4
// 00608455  7ccd                 jl 0x608424
// 00608457  4d                   dec ebp
// 00608458  ddd9                 fstp st(1)
// 0060845a  83ea08               sub edx, 8
// 0060845d  ddd8                 fstp st(0)
// 0060845f  83ee04               sub esi, 4
// 00608462  85ed                 test ebp, ebp
// 00608464  7d9b                 jge 0x608401
// 00608466  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0060846a  ddd8                 fstp st(0)
// 0060846c  33c9                 xor ecx, ecx
// 0060846e  85db                 test ebx, ebx
// 00608470  0f94c1               sete cl
// 00608473  33f6                 xor esi, esi
// 00608475  8be9                 mov ebp, ecx
// 00608477  807c345c00           cmp byte ptr [esp + esi + 0x5c], 0
// 0060847c  7419                 je 0x608497
// 0060847e  8b5778               mov edx, dword ptr [edi + 0x78]
// 00608481  8b4774               mov eax, dword ptr [edi + 0x74]
// 00608484  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00608487  52                   push edx
// 00608488  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0060848b  50                   push eax
// 0060848c  56                   push esi
// 0060848d  51                   push ecx
// 0060848e  52                   push edx
// 0060848f  8bcf                 mov ecx, edi
// 00608491  e8fafaffff           call 0x607f90
// 00608496  43                   inc ebx
// 00608497  46                   inc esi
// 00608498  83fe04               cmp esi, 4
// 0060849b  7cda                 jl 0x608477
// 0060849d  895c2414             mov dword ptr [esp + 0x14], ebx
// 006084a1  85ed                 test ebp, ebp
// 006084a3  7411                 je 0x6084b6
// 006084a5  83fb04               cmp ebx, 4
// 006084a8  750c                 jne 0x6084b6
// 006084aa  5f                   pop edi
// 006084ab  5e                   pop esi
// 006084ac  5d                   pop ebp
// 006084ad  8bc3                 mov eax, ebx
// 006084af  5b                   pop ebx
// 006084b0  83c448               add esp, 0x48
// 006084b3  c20800               ret 8
// 006084b6  33f6                 xor esi, esi
// 006084b8  eb06                 jmp 0x6084c0
// 006084ba  8d9b00000000         lea ebx, [ebx]
// 006084c0  8d443434             lea eax, [esp + esi + 0x34]
// 006084c4  bb06000000           mov ebx, 6
// 006084c9  c74424600c000000     mov dword ptr [esp + 0x60], 0xc
// 006084d1  8d6cb41b             lea ebp, [esp + esi*4 + 0x1b]
// 006084d5  8944245c             mov dword ptr [esp + 0x5c], eax
// 006084d9  c744241004000000     mov dword ptr [esp + 0x10], 4
// 006084e1  8bc3                 mov eax, ebx
// 006084e3  2503000080           and eax, 0x80000003
// 006084e8  7905                 jns 0x6084ef
// 006084ea  48                   dec eax
// 006084eb  83c8fc               or eax, 0xfffffffc
// 006084ee  40                   inc eax
// 006084ef  8a5500               mov dl, byte ptr [ebp]
// 006084f2  8d0cb0               lea ecx, [eax + esi*4]
// 006084f5  3a540c18             cmp dl, byte ptr [esp + ecx + 0x18]
// 006084f9  744f                 je 0x60854a
// 006084fb  8d4e01               lea ecx, [esi + 1]
// 006084fe  81e103000080         and ecx, 0x80000003
// 00608504  7905                 jns 0x60850b
// 00608506  49                   dec ecx
// 00608507  83c9fc               or ecx, 0xfffffffc
// 0060850a  41                   inc ecx
// 0060850b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0060850f  034c2460             add ecx, dword ptr [esp + 0x60]
// 00608513  8a12                 mov dl, byte ptr [edx]
// 00608515  3a540c28             cmp dl, byte ptr [esp + ecx + 0x28]
// 00608519  742f                 je 0x60854a
// 0060851b  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0060851e  8d148e               lea edx, [esi + ecx*4]
// 00608521  8b0c9528af8400       mov ecx, dword ptr [edx*4 + 0x84af28]
// 00608528  8b5778               mov edx, dword ptr [edi + 0x78]
// 0060852b  51                   push ecx
// 0060852c  8d0490               lea eax, [eax + edx*4]
// 0060852f  8b0c8528af8400       mov ecx, dword ptr [eax*4 + 0x84af28]
// 00608536  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00608539  8b4770               mov eax, dword ptr [edi + 0x70]
// 0060853c  51                   push ecx
// 0060853d  52                   push edx
// 0060853e  50                   push eax
// 0060853f  8bcf                 mov ecx, edi
// 00608541  e8eafaffff           call 0x608030
// 00608546  ff442414             inc dword ptr [esp + 0x14]
// 0060854a  b804000000           mov eax, 4
// 0060854f  29442460             sub dword ptr [esp + 0x60], eax
// 00608553  2944245c             sub dword ptr [esp + 0x5c], eax
// 00608557  4d                   dec ebp
// 00608558  4b                   dec ebx
// 00608559  836c241001           sub dword ptr [esp + 0x10], 1
// 0060855e  7581                 jne 0x6084e1
// 00608560  46                   inc esi
// 00608561  3bf0                 cmp esi, eax
// 00608563  0f8c57ffffff         jl 0x6084c0
// 00608569  8b442414             mov eax, dword ptr [esp + 0x14]
// 0060856d  5f                   pop edi
// 0060856e  5e                   pop esi
// 0060856f  5d                   pop ebp
// 00608570  5b                   pop ebx
// 00608571  83c448               add esp, 0x48
// 00608574  c20800               ret 8
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?intersectRectQuad@BlockBlockContact@RBX@@AAEHAAVVector2@G3D@@AAY03V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
