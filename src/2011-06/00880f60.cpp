// roc 2011-06 00880f60  unit: CXTPMouseManager  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880f60
//
// 00880f60  83ec1c               sub esp, 0x1c
// 00880f63  8b442424             mov eax, dword ptr [esp + 0x24]
// 00880f67  53                   push ebx
// 00880f68  55                   push ebp
// 00880f69  56                   push esi
// 00880f6a  57                   push edi
// 00880f6b  8bf9                 mov edi, ecx
// 00880f6d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00880f71  50                   push eax
// 00880f72  51                   push ecx
// 00880f73  ff15a41aa400         call dword ptr [0xa41aa4]
// 00880f79  8b5f28               mov ebx, dword ptr [edi + 0x28]
// 00880f7c  83eb01               sub ebx, 1
// 00880f7f  89442410             mov dword ptr [esp + 0x10], eax
// 00880f83  786a                 js 0x880fef
// 00880f85  85db                 test ebx, ebx
// 00880f87  0f8c1c010000         jl 0x8810a9
// 00880f8d  3b5f28               cmp ebx, dword ptr [edi + 0x28]
// 00880f90  0f8d13010000         jge 0x8810a9
// 00880f96  8b5724               mov edx, dword ptr [edi + 0x24]
// 00880f99  8b349a               mov esi, dword ptr [edx + ebx*4]
// 00880f9c  8b06                 mov eax, dword ptr [esi]
// 00880f9e  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 00880fa4  8bce                 mov ecx, esi
// 00880fa6  ffd2                 call edx
// 00880fa8  85c0                 test eax, eax
// 00880faa  743e                 je 0x880fea
// 00880fac  8b442434             mov eax, dword ptr [esp + 0x34]
// 00880fb0  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00880fb4  56                   push esi
// 00880fb5  8d4c2420             lea ecx, [esp + 0x20]
// 00880fb9  8944241c             mov dword ptr [esp + 0x1c], eax
// 00880fbd  e86ebdfdff           call 0x85cd30
// 00880fc2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00880fc6  51                   push ecx
// 00880fc7  55                   push ebp
// 00880fc8  50                   push eax
// 00880fc9  ff15101ca400         call dword ptr [0xa41c10]
// 00880fcf  85c0                 test eax, eax
// 00880fd1  7417                 je 0x880fea
// 00880fd3  8b4620               mov eax, dword ptr [esi + 0x20]
// 00880fd6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00880fda  3bc1                 cmp eax, ecx
// 00880fdc  743a                 je 0x881018
// 00880fde  51                   push ecx
// 00880fdf  50                   push eax
// 00880fe0  ff15081ca400         call dword ptr [0xa41c08]
// 00880fe6  85c0                 test eax, eax
// 00880fe8  752e                 jne 0x881018
// 00880fea  83eb01               sub ebx, 1
// 00880fed  7996                 jns 0x880f85
// 00880fef  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00880ff2  85c9                 test ecx, ecx
// 00880ff4  7411                 je 0x881007
// 00880ff6  8b01                 mov eax, dword ptr [ecx]
// 00880ff8  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00880ffe  ffd2                 call edx
// 00881000  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00881007  8bcf                 mov ecx, edi
// 00881009  e8f2fdffff           call 0x880e00
// 0088100e  5f                   pop edi
// 0088100f  5e                   pop esi
// 00881010  5d                   pop ebp
// 00881011  5b                   pop ebx
// 00881012  83c41c               add esp, 0x1c
// 00881015  c20800               ret 8
// 00881018  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0088101b  8b1df419a400         mov ebx, dword ptr [0xa419f4]
// 00881021  3bce                 cmp ecx, esi
// 00881023  7528                 jne 0x88104d
// 00881025  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00881028  8d542430             lea edx, [esp + 0x30]
// 0088102c  52                   push edx
// 0088102d  50                   push eax
// 0088102e  ffd3                 call ebx
// 00881030  8b442434             mov eax, dword ptr [esp + 0x34]
// 00881034  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00881037  8b11                 mov edx, dword ptr [ecx]
// 00881039  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 0088103f  50                   push eax
// 00881040  8b442434             mov eax, dword ptr [esp + 0x34]
// 00881044  50                   push eax
// 00881045  8b4704               mov eax, dword ptr [edi + 4]
// 00881048  50                   push eax
// 00881049  ffd2                 call edx
// 0088104b  eb15                 jmp 0x881062
// 0088104d  85c9                 test ecx, ecx
// 0088104f  7411                 je 0x881062
// 00881051  8b01                 mov eax, dword ptr [ecx]
// 00881053  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 00881059  ffd2                 call edx
// 0088105b  c7471000000000       mov dword ptr [edi + 0x10], 0
// 00881062  837f1000             cmp dword ptr [edi + 0x10], 0
// 00881066  759f                 jne 0x881007
// 00881068  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0088106b  8d442430             lea eax, [esp + 0x30]
// 0088106f  50                   push eax
// 00881070  51                   push ecx
// 00881071  ffd3                 call ebx
// 00881073  8b442434             mov eax, dword ptr [esp + 0x34]
// 00881077  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088107b  8b16                 mov edx, dword ptr [esi]
// 0088107d  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 00881083  50                   push eax
// 00881084  8b4704               mov eax, dword ptr [edi + 4]
// 00881087  51                   push ecx
// 00881088  50                   push eax
// 00881089  8bce                 mov ecx, esi
// 0088108b  ffd2                 call edx
// 0088108d  85c0                 test eax, eax
// 0088108f  0f8472ffffff         je 0x881007
// 00881095  8bcf                 mov ecx, edi
// 00881097  897710               mov dword ptr [edi + 0x10], esi
// 0088109a  e861fdffff           call 0x880e00
// 0088109f  5f                   pop edi
// 008810a0  5e                   pop esi
// 008810a1  5d                   pop ebp
// 008810a2  5b                   pop ebx
// 008810a3  83c41c               add esp, 0x1c
// 008810a6  c20800               ret 8
// 008810a9  e85c92f8ff           call 0x80a30a
// copied from an identical function in another client (function ?PickTarget@CXTPCustomizeDropSource@@AAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp