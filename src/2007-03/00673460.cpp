// roc 2007-03 00673460  unit: seg_00670000  size: 759 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00673460
//
// 00673460  83ec1c               sub esp, 0x1c
// 00673463  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00673467  83e010               and eax, 0x10
// 0067346a  890c24               mov dword ptr [esp], ecx
// 0067346d  89442404             mov dword ptr [esp + 4], eax
// 00673471  740a                 je 0x67347d
// 00673473  8b542428             mov edx, dword ptr [esp + 0x28]
// 00673477  2b542438             sub edx, dword ptr [esp + 0x38]
// 0067347b  eb08                 jmp 0x673485
// 0067347d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00673481  2b542434             sub edx, dword ptr [esp + 0x34]
// 00673485  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00673488  53                   push ebx
// 00673489  55                   push ebp
// 0067348a  56                   push esi
// 0067348b  83e801               sub eax, 1
// 0067348e  57                   push edi
// 0067348f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00673493  0f888e000000         js 0x673527
// 00673499  8bf0                 mov esi, eax
// 0067349b  c1e606               shl esi, 6
// 0067349e  03742430             add esi, dword ptr [esp + 0x30]
// 006734a2  837e2800             cmp dword ptr [esi + 0x28], 0
// 006734a6  746b                 je 0x673513
// 006734a8  837e3000             cmp dword ptr [esi + 0x30], 0
// 006734ac  7565                 jne 0x673513
// 006734ae  85c0                 test eax, eax
// 006734b0  7c0d                 jl 0x6734bf
// 006734b2  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 006734b5  7d08                 jge 0x6734bf
// 006734b7  8b7928               mov edi, dword ptr [ecx + 0x28]
// 006734ba  8b0487               mov eax, dword ptr [edi + eax*4]
// 006734bd  eb02                 jmp 0x6734c1
// 006734bf  33c0                 xor eax, eax
// 006734c1  f680d400000001       test byte ptr [eax + 0xd4], 1
// 006734c8  745d                 je 0x673527
// 006734ca  837c241400           cmp dword ptr [esp + 0x14], 0
// 006734cf  8b06                 mov eax, dword ptr [esi]
// 006734d1  8b4e04               mov ecx, dword ptr [esi + 4]
// 006734d4  8b6e08               mov ebp, dword ptr [esi + 8]
// 006734d7  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006734da  7511                 jne 0x6734ed
// 006734dc  2bc5                 sub eax, ebp
// 006734de  8d3c10               lea edi, [eax + edx]
// 006734e1  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 006734e5  7c3c                 jl 0x673523
// 006734e7  53                   push ebx
// 006734e8  52                   push edx
// 006734e9  51                   push ecx
// 006734ea  57                   push edi
// 006734eb  eb0f                 jmp 0x6734fc
// 006734ed  2bcb                 sub ecx, ebx
// 006734ef  8d3c11               lea edi, [ecx + edx]
// 006734f2  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 006734f6  7c2b                 jl 0x673523
// 006734f8  52                   push edx
// 006734f9  55                   push ebp
// 006734fa  57                   push edi
// 006734fb  50                   push eax
// 006734fc  56                   push esi
// 006734fd  ff15b4ed7700         call dword ptr [0x77edb4]
// 00673503  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 00673507  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0067350b  8bd7                 mov edx, edi
// 0067350d  7518                 jne 0x673527
// 0067350f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00673513  83e801               sub eax, 1
// 00673516  83ee40               sub esi, 0x40
// 00673519  85c0                 test eax, eax
// 0067351b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0067351f  7d81                 jge 0x6734a2
// 00673521  eb04                 jmp 0x673527
// 00673523  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00673527  33ed                 xor ebp, ebp
// 00673529  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0067352d  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00673535  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067353d  740a                 je 0x673549
// 0067353f  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00673543  2b7c2448             sub edi, dword ptr [esp + 0x48]
// 00673547  eb08                 jmp 0x673551
// 00673549  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0067354d  2b7c2444             sub edi, dword ptr [esp + 0x44]
// 00673551  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00673554  83c0ff               add eax, -1
// 00673557  85c0                 test eax, eax
// 00673559  89442420             mov dword ptr [esp + 0x20], eax
// 0067355d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00673561  0f8ce6010000         jl 0x67374d
// 00673567  8d48ff               lea ecx, [eax - 1]
// 0067356a  894c2424             mov dword ptr [esp + 0x24], ecx
// 0067356e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00673572  8bd0                 mov edx, eax
// 00673574  c1e206               shl edx, 6
// 00673577  8d4c0a28             lea ecx, [edx + ecx + 0x28]
// 0067357b  894c2428             mov dword ptr [esp + 0x28], ecx
// 0067357f  90                   nop 
// 00673580  833900               cmp dword ptr [ecx], 0
// 00673583  0f848e000000         je 0x673617
// 00673589  8b5908               mov ebx, dword ptr [ecx + 8]
// 0067358c  85db                 test ebx, ebx
// 0067358e  0f8583000000         jne 0x673617
// 00673594  85ed                 test ebp, ebp
// 00673596  8b742410             mov esi, dword ptr [esp + 0x10]
// 0067359a  7529                 jne 0x6735c5
// 0067359c  85c0                 test eax, eax
// 0067359e  7c0d                 jl 0x6735ad
// 006735a0  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 006735a3  7d08                 jge 0x6735ad
// 006735a5  8b5628               mov edx, dword ptr [esi + 0x28]
// 006735a8  8b1482               mov edx, dword ptr [edx + eax*4]
// 006735ab  eb02                 jmp 0x6735af
// 006735ad  33d2                 xor edx, edx
// 006735af  f682d400000001       test byte ptr [edx + 0xd4], 1
// 006735b6  740d                 je 0x6735c5
// 006735b8  8b542424             mov edx, dword ptr [esp + 0x24]
// 006735bc  8b79d8               mov edi, dword ptr [ecx - 0x28]
// 006735bf  89542420             mov dword ptr [esp + 0x20], edx
// 006735c3  eb25                 jmp 0x6735ea
// 006735c5  85c0                 test eax, eax
// 006735c7  7c0d                 jl 0x6735d6
// 006735c9  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 006735cc  7d08                 jge 0x6735d6
// 006735ce  8b5628               mov edx, dword ptr [esi + 0x28]
// 006735d1  8b1482               mov edx, dword ptr [edx + eax*4]
// 006735d4  eb02                 jmp 0x6735d8
// 006735d6  33d2                 xor edx, edx
// 006735d8  f682d400000020       test byte ptr [edx + 0xd4], 0x20
// 006735df  7409                 je 0x6735ea
// 006735e1  bd01000000           mov ebp, 1
// 006735e6  016c2418             add dword ptr [esp + 0x18], ebp
// 006735ea  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 006735ef  751d                 jne 0x67360e
// 006735f1  39442420             cmp dword ptr [esp + 0x20], eax
// 006735f5  7c17                 jl 0x67360e
// 006735f7  837c241400           cmp dword ptr [esp + 0x14], 0
// 006735fc  7505                 jne 0x673603
// 006735fe  8b71e0               mov esi, dword ptr [ecx - 0x20]
// 00673601  eb03                 jmp 0x673606
// 00673603  8b71e4               mov esi, dword ptr [ecx - 0x1c]
// 00673606  8bd7                 mov edx, edi
// 00673608  2bd6                 sub edx, esi
// 0067360a  8954244c             mov dword ptr [esp + 0x4c], edx
// 0067360e  85db                 test ebx, ebx
// 00673610  7505                 jne 0x673617
// 00673612  395904               cmp dword ptr [ecx + 4], ebx
// 00673615  7508                 jne 0x67361f
// 00673617  85c0                 test eax, eax
// 00673619  0f8513010000         jne 0x673732
// 0067361f  837c241800           cmp dword ptr [esp + 0x18], 0
// 00673624  0f8ed2000000         jle 0x6736fc
// 0067362a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0067362f  0f8ec7000000         jle 0x6736fc
// 00673635  33ed                 xor ebp, ebp
// 00673637  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0067363b  89442430             mov dword ptr [esp + 0x30], eax
// 0067363f  0f8fb7000000         jg 0x6736fc
// 00673645  8d59e0               lea ebx, [ecx - 0x20]
// 00673648  eb06                 jmp 0x673650
// 0067364a  8d9b00000000         lea ebx, [ebx]
// 00673650  837b2000             cmp dword ptr [ebx + 0x20], 0
// 00673654  0f848a000000         je 0x6736e4
// 0067365a  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0067365e  0f8580000000         jne 0x6736e4
// 00673664  837c241400           cmp dword ptr [esp + 0x14], 0
// 00673669  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 0067366c  8b53fc               mov edx, dword ptr [ebx - 4]
// 0067366f  8b33                 mov esi, dword ptr [ebx]
// 00673671  8b7b04               mov edi, dword ptr [ebx + 4]
// 00673674  8d43f8               lea eax, [ebx - 8]
// 00673677  7506                 jne 0x67367f
// 00673679  03f5                 add esi, ebp
// 0067367b  03cd                 add ecx, ebp
// 0067367d  eb04                 jmp 0x673683
// 0067367f  03fd                 add edi, ebp
// 00673681  03d5                 add edx, ebp
// 00673683  57                   push edi
// 00673684  56                   push esi
// 00673685  52                   push edx
// 00673686  51                   push ecx
// 00673687  50                   push eax
// 00673688  ff15b4ed7700         call dword ptr [0x77edb4]
// 0067368e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00673692  85c9                 test ecx, ecx
// 00673694  7c11                 jl 0x6736a7
// 00673696  8b442410             mov eax, dword ptr [esp + 0x10]
// 0067369a  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 0067369d  7d08                 jge 0x6736a7
// 0067369f  8b4028               mov eax, dword ptr [eax + 0x28]
// 006736a2  8b0488               mov eax, dword ptr [eax + ecx*4]
// 006736a5  eb02                 jmp 0x6736a9
// 006736a7  33c0                 xor eax, eax
// 006736a9  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 006736b0  742a                 je 0x6736dc
// 006736b2  8b742418             mov esi, dword ptr [esp + 0x18]
// 006736b6  85f6                 test esi, esi
// 006736b8  7e22                 jle 0x6736dc
// 006736ba  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006736be  99                   cdq 
// 006736bf  f7fe                 idiv esi
// 006736c1  837c241400           cmp dword ptr [esp + 0x14], 0
// 006736c6  7504                 jne 0x6736cc
// 006736c8  0103                 add dword ptr [ebx], eax
// 006736ca  eb03                 jmp 0x6736cf
// 006736cc  014304               add dword ptr [ebx + 4], eax
// 006736cf  2944244c             sub dword ptr [esp + 0x4c], eax
// 006736d3  83ee01               sub esi, 1
// 006736d6  89742418             mov dword ptr [esp + 0x18], esi
// 006736da  03e8                 add ebp, eax
// 006736dc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006736e0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006736e4  8b542430             mov edx, dword ptr [esp + 0x30]
// 006736e8  83c201               add edx, 1
// 006736eb  83c340               add ebx, 0x40
// 006736ee  3b542420             cmp edx, dword ptr [esp + 0x20]
// 006736f2  89542430             mov dword ptr [esp + 0x30], edx
// 006736f6  0f8e54ffffff         jle 0x673650
// 006736fc  837c241400           cmp dword ptr [esp + 0x14], 0
// 00673701  740a                 je 0x67370d
// 00673703  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00673707  2b7c2448             sub edi, dword ptr [esp + 0x48]
// 0067370b  eb08                 jmp 0x673715
// 0067370d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00673711  2b7c2444             sub edi, dword ptr [esp + 0x44]
// 00673715  8b542424             mov edx, dword ptr [esp + 0x24]
// 00673719  bd01000000           mov ebp, 1
// 0067371e  89542420             mov dword ptr [esp + 0x20], edx
// 00673722  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0067372a  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00673732  836c242401           sub dword ptr [esp + 0x24], 1
// 00673737  83e801               sub eax, 1
// 0067373a  83e940               sub ecx, 0x40
// 0067373d  85c0                 test eax, eax
// 0067373f  8944241c             mov dword ptr [esp + 0x1c], eax
// 00673743  894c2428             mov dword ptr [esp + 0x28], ecx
// 00673747  0f8d33feffff         jge 0x673580
// 0067374d  5f                   pop edi
// 0067374e  5e                   pop esi
// 0067374f  5d                   pop ebp
// 00673750  5b                   pop ebx
// 00673751  83c41c               add esp, 0x1c
// 00673754  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControls.cpp
