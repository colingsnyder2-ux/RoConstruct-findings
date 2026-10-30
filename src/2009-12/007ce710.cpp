// roc 2009-12 007ce710  unit: RBX::PartDropTool  size: 610 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007ce710
//
// 007ce710  55                   push ebp
// 007ce711  8bec                 mov ebp, esp
// 007ce713  83e4c0               and esp, 0xffffffc0
// 007ce716  83ec34               sub esp, 0x34
// 007ce719  53                   push ebx
// 007ce71a  56                   push esi
// 007ce71b  57                   push edi
// 007ce71c  8d642400             lea esp, [esp]
// 007ce720  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 007ce723  8b7d08               mov edi, dword ptr [ebp + 8]
// 007ce726  43                   inc ebx
// 007ce727  c1e304               shl ebx, 4
// 007ce72a  035f0c               add ebx, dword ptr [edi + 0xc]
// 007ce72d  be04000000           mov esi, 4
// 007ce732  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 007ce735  c744241002000000     mov dword ptr [esp + 0x10], 2
// 007ce73d  3bc6                 cmp eax, esi
// 007ce73f  7405                 je 0x7ce746
// 007ce741  83f803               cmp eax, 3
// 007ce744  7571                 jne 0x7ce7b7
// 007ce746  3973f8               cmp dword ptr [ebx - 8], esi
// 007ce749  7447                 je 0x7ce792
// 007ce74b  837bf803             cmp dword ptr [ebx - 8], 3
// 007ce74f  7566                 jne 0x7ce7b7
// 007ce751  dd43f0               fld qword ptr [ebx - 0x10]
// 007ce754  83ec08               sub esp, 8
// 007ce757  dd1c24               fstp qword ptr [esp]
// 007ce75a  8d442428             lea eax, [esp + 0x28]
// 007ce75e  6850ec9e00           push 0x9eec50
// 007ce763  50                   push eax
// 007ce764  ff15dcb79800         call dword ptr [0x98b7dc]
// 007ce76a  8d442430             lea eax, [esp + 0x30]
// 007ce76e  83c410               add esp, 0x10
// 007ce771  8d5001               lea edx, [eax + 1]
// 007ce774  8a08                 mov cl, byte ptr [eax]
// 007ce776  40                   inc eax
// 007ce777  84c9                 test cl, cl
// 007ce779  75f9                 jne 0x7ce774
// 007ce77b  2bc2                 sub eax, edx
// 007ce77d  50                   push eax
// 007ce77e  8d4c2424             lea ecx, [esp + 0x24]
// 007ce782  51                   push ecx
// 007ce783  57                   push edi
// 007ce784  e807240000           call 0x7d0b90
// 007ce789  83c40c               add esp, 0xc
// 007ce78c  8943f0               mov dword ptr [ebx - 0x10], eax
// 007ce78f  8973f8               mov dword ptr [ebx - 8], esi
// 007ce792  8b53f0               mov edx, dword ptr [ebx - 0x10]
// 007ce795  8b420c               mov eax, dword ptr [edx + 0xc]
// 007ce798  85c0                 test eax, eax
// 007ce79a  7567                 jne 0x7ce803
// 007ce79c  3973e8               cmp dword ptr [ebx - 0x18], esi
// 007ce79f  0f84a0010000         je 0x7ce945
// 007ce7a5  83c3e0               add ebx, -0x20
// 007ce7a8  53                   push ebx
// 007ce7a9  57                   push edi
// 007ce7aa  e881f7ffff           call 0x7cdf30
// 007ce7af  83c408               add esp, 8
// 007ce7b2  e98e010000           jmp 0x7ce945
// 007ce7b7  8d73f0               lea esi, [ebx - 0x10]
// 007ce7ba  6a0f                 push 0xf
// 007ce7bc  83c3e0               add ebx, -0x20
// 007ce7bf  53                   push ebx
// 007ce7c0  57                   push edi
// 007ce7c1  e8baf6ffff           call 0x7cde80
// 007ce7c6  83c40c               add esp, 0xc
// 007ce7c9  83780800             cmp dword ptr [eax + 8], 0
// 007ce7cd  7512                 jne 0x7ce7e1
// 007ce7cf  6a0f                 push 0xf
// 007ce7d1  56                   push esi
// 007ce7d2  57                   push edi
// 007ce7d3  e8a8f6ffff           call 0x7cde80
// 007ce7d8  83c40c               add esp, 0xc
// 007ce7db  83780800             cmp dword ptr [eax + 8], 0
// 007ce7df  7415                 je 0x7ce7f6
// 007ce7e1  50                   push eax
// 007ce7e2  57                   push edi
// 007ce7e3  8bce                 mov ecx, esi
// 007ce7e5  8bd3                 mov edx, ebx
// 007ce7e7  8bc3                 mov eax, ebx
// 007ce7e9  e842f8ffff           call 0x7ce030
// 007ce7ee  83c408               add esp, 8
// 007ce7f1  e94f010000           jmp 0x7ce945
// 007ce7f6  56                   push esi
// 007ce7f7  53                   push ebx
// 007ce7f8  57                   push edi
// 007ce7f9  e802cefcff           call 0x79b600
// 007ce7fe  e93f010000           jmp 0x7ce942
// 007ce803  89442414             mov dword ptr [esp + 0x14], eax
// 007ce807  b801000000           mov eax, 1
// 007ce80c  39450c               cmp dword ptr [ebp + 0xc], eax
// 007ce80f  89442410             mov dword ptr [esp + 0x10], eax
// 007ce813  0f8e99000000         jle 0x7ce8b2
// 007ce819  8d73e0               lea esi, [ebx - 0x20]
// 007ce81c  8d642400             lea esp, [esp]
// 007ce820  837e0804             cmp dword ptr [esi + 8], 4
// 007ce824  744d                 je 0x7ce873
// 007ce826  837e0803             cmp dword ptr [esi + 8], 3
// 007ce82a  0f8582000000         jne 0x7ce8b2
// 007ce830  dd06                 fld qword ptr [esi]
// 007ce832  83ec08               sub esp, 8
// 007ce835  dd1c24               fstp qword ptr [esp]
// 007ce838  8d442428             lea eax, [esp + 0x28]
// 007ce83c  6850ec9e00           push 0x9eec50
// 007ce841  50                   push eax
// 007ce842  ff15dcb79800         call dword ptr [0x98b7dc]
// 007ce848  8d442430             lea eax, [esp + 0x30]
// 007ce84c  83c410               add esp, 0x10
// 007ce84f  8d5001               lea edx, [eax + 1]
// 007ce852  8a08                 mov cl, byte ptr [eax]
// 007ce854  40                   inc eax
// 007ce855  84c9                 test cl, cl
// 007ce857  75f9                 jne 0x7ce852
// 007ce859  2bc2                 sub eax, edx
// 007ce85b  50                   push eax
// 007ce85c  8d4c2424             lea ecx, [esp + 0x24]
// 007ce860  51                   push ecx
// 007ce861  57                   push edi
// 007ce862  e829230000           call 0x7d0b90
// 007ce867  83c40c               add esp, 0xc
// 007ce86a  8906                 mov dword ptr [esi], eax
// 007ce86c  c7460804000000       mov dword ptr [esi + 8], 4
// 007ce873  8b16                 mov edx, dword ptr [esi]
// 007ce875  8b7a0c               mov edi, dword ptr [edx + 0xc]
// 007ce878  b8fdffffff           mov eax, 0xfffffffd
// 007ce87d  2b442414             sub eax, dword ptr [esp + 0x14]
// 007ce881  3bf8                 cmp edi, eax
// 007ce883  7211                 jb 0x7ce896
// 007ce885  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007ce888  6888ec9e00           push 0x9eec88
// 007ce88d  51                   push ecx
// 007ce88e  e8adcafcff           call 0x79b340
// 007ce893  83c408               add esp, 8
// 007ce896  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ce89a  017c2414             add dword ptr [esp + 0x14], edi
// 007ce89e  8b7d08               mov edi, dword ptr [ebp + 8]
// 007ce8a1  40                   inc eax
// 007ce8a2  83ee10               sub esi, 0x10
// 007ce8a5  3b450c               cmp eax, dword ptr [ebp + 0xc]
// 007ce8a8  89442410             mov dword ptr [esp + 0x10], eax
// 007ce8ac  0f8c6effffff         jl 0x7ce820
// 007ce8b2  8b542414             mov edx, dword ptr [esp + 0x14]
// 007ce8b6  8b4710               mov eax, dword ptr [edi + 0x10]
// 007ce8b9  52                   push edx
// 007ce8ba  83c034               add eax, 0x34
// 007ce8bd  50                   push eax
// 007ce8be  57                   push edi
// 007ce8bf  e86c290000           call 0x7d1230
// 007ce8c4  89442428             mov dword ptr [esp + 0x28], eax
// 007ce8c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ce8cc  83c40c               add esp, 0xc
// 007ce8cf  33ff                 xor edi, edi
// 007ce8d1  89442418             mov dword ptr [esp + 0x18], eax
// 007ce8d5  85c0                 test eax, eax
// 007ce8d7  7e4c                 jle 0x7ce925
// 007ce8d9  c1e004               shl eax, 4
// 007ce8dc  8bc8                 mov ecx, eax
// 007ce8de  8bc3                 mov eax, ebx
// 007ce8e0  2bc1                 sub eax, ecx
// 007ce8e2  89442414             mov dword ptr [esp + 0x14], eax
// 007ce8e6  eb0c                 jmp 0x7ce8f4
// 007ce8e8  eb06                 jmp 0x7ce8f0
// 007ce8ea  8d9b00000000         lea ebx, [ebx]
// 007ce8f0  8b442414             mov eax, dword ptr [esp + 0x14]
// 007ce8f4  8b00                 mov eax, dword ptr [eax]
// 007ce8f6  8b700c               mov esi, dword ptr [eax + 0xc]
// 007ce8f9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007ce8fd  56                   push esi
// 007ce8fe  83c010               add eax, 0x10
// 007ce901  50                   push eax
// 007ce902  03d7                 add edx, edi
// 007ce904  52                   push edx
// 007ce905  e8dc630200           call 0x7f4ce6
// 007ce90a  8b442424             mov eax, dword ptr [esp + 0x24]
// 007ce90e  8344242010           add dword ptr [esp + 0x20], 0x10
// 007ce913  48                   dec eax
// 007ce914  83c40c               add esp, 0xc
// 007ce917  03fe                 add edi, esi
// 007ce919  89442418             mov dword ptr [esp + 0x18], eax
// 007ce91d  85c0                 test eax, eax
// 007ce91f  7fcf                 jg 0x7ce8f0
// 007ce921  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ce925  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007ce928  c1e004               shl eax, 4
// 007ce92b  2bd8                 sub ebx, eax
// 007ce92d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ce931  57                   push edi
// 007ce932  50                   push eax
// 007ce933  51                   push ecx
// 007ce934  e857220000           call 0x7d0b90
// 007ce939  8903                 mov dword ptr [ebx], eax
// 007ce93b  c7430804000000       mov dword ptr [ebx + 8], 4
// 007ce942  83c40c               add esp, 0xc
// 007ce945  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007ce949  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007ce94c  ba01000000           mov edx, 1
// 007ce951  2bd1                 sub edx, ecx
// 007ce953  03c2                 add eax, edx
// 007ce955  ba01000000           mov edx, 1
// 007ce95a  2bd1                 sub edx, ecx
// 007ce95c  015510               add dword ptr [ebp + 0x10], edx
// 007ce95f  83f801               cmp eax, 1
// 007ce962  89450c               mov dword ptr [ebp + 0xc], eax
// 007ce965  0f8fb5fdffff         jg 0x7ce720
// 007ce96b  5f                   pop edi
// 007ce96c  5e                   pop esi
// 007ce96d  5b                   pop ebx
// 007ce96e  8be5                 mov esp, ebp
// 007ce970  5d                   pop ebp
// 007ce971  c3                   ret 
// copied from an identical function in another client (function _luaV_concat)

// from server: 100% by tester
// roc-lang: c
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4-dll lvm.c