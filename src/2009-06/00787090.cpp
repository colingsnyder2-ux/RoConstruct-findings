// roc 2009-06 00787090  unit: CXTPToolTipContextToolTip::PAUTOOLITEM::?$CArray  size: 304 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00787090
//
// 00787090  51                   push ecx
// 00787091  8b442408             mov eax, dword ptr [esp + 8]
// 00787095  890c24               mov dword ptr [esp], ecx
// 00787098  85c0                 test eax, eax
// 0078709a  7444                 je 0x7870e0
// 0078709c  53                   push ebx
// 0078709d  56                   push esi
// 0078709e  8b715c               mov esi, dword ptr [ecx + 0x5c]
// 007870a1  33db                 xor ebx, ebx
// 007870a3  85f6                 test esi, esi
// 007870a5  7e37                 jle 0x7870de
// 007870a7  8d5154               lea edx, [ecx + 0x54]
// 007870aa  55                   push ebp
// 007870ab  89542414             mov dword ptr [esp + 0x14], edx
// 007870af  57                   push edi
// 007870b0  85db                 test ebx, ebx
// 007870b2  0f8c03010000         jl 0x7871bb
// 007870b8  3b5a08               cmp ebx, dword ptr [edx + 8]
// 007870bb  0f8dfa000000         jge 0x7871bb
// 007870c1  8b7a04               mov edi, dword ptr [edx + 4]
// 007870c4  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 007870c7  8b6f24               mov ebp, dword ptr [edi + 0x24]
// 007870ca  3b680c               cmp ebp, dword ptr [eax + 0xc]
// 007870cd  7508                 jne 0x7870d7
// 007870cf  8b6f20               mov ebp, dword ptr [edi + 0x20]
// 007870d2  3b6808               cmp ebp, dword ptr [eax + 8]
// 007870d5  740d                 je 0x7870e4
// 007870d7  43                   inc ebx
// 007870d8  3bde                 cmp ebx, esi
// 007870da  7cd4                 jl 0x7870b0
// 007870dc  5f                   pop edi
// 007870dd  5d                   pop ebp
// 007870de  5e                   pop esi
// 007870df  5b                   pop ebx
// 007870e0  59                   pop ecx
// 007870e1  c20400               ret 4
// 007870e4  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007870ea  3bc5                 cmp eax, ebp
// 007870ec  751a                 jne 0x787108
// 007870ee  8b8194000000         mov eax, dword ptr [ecx + 0x94]
// 007870f4  3b4724               cmp eax, dword ptr [edi + 0x24]
// 007870f7  750f                 jne 0x787108
// 007870f9  6a00                 push 0
// 007870fb  e880e6ffff           call 0x785780
// 00787100  8b542418             mov edx, dword ptr [esp + 0x18]
// 00787104  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00787108  8b81c8000000         mov eax, dword ptr [ecx + 0xc8]
// 0078710e  8b2dc8ee8900         mov ebp, dword ptr [0x89eec8]
// 00787114  8db1a8000000         lea esi, [ecx + 0xa8]
// 0078711a  3b4720               cmp eax, dword ptr [edi + 0x20]
// 0078711d  7536                 jne 0x787155
// 0078711f  8b4624               mov eax, dword ptr [esi + 0x24]
// 00787122  3b4724               cmp eax, dword ptr [edi + 0x24]
// 00787125  752e                 jne 0x787155
// 00787127  8bce                 mov ecx, esi
// 00787129  ff15f4ff8900         call dword ptr [0x89fff4]
// 0078712f  33c0                 xor eax, eax
// 00787131  8d4e0c               lea ecx, [esi + 0xc]
// 00787134  51                   push ecx
// 00787135  894608               mov dword ptr [esi + 8], eax
// 00787138  894620               mov dword ptr [esi + 0x20], eax
// 0078713b  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00787142  89461c               mov dword ptr [esi + 0x1c], eax
// 00787145  ffd5                 call ebp
// 00787147  83c628               add esi, 0x28
// 0078714a  56                   push esi
// 0078714b  ffd5                 call ebp
// 0078714d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00787151  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00787155  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 0078715b  8db1e0000000         lea esi, [ecx + 0xe0]
// 00787161  3b4720               cmp eax, dword ptr [edi + 0x20]
// 00787164  7532                 jne 0x787198
// 00787166  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00787169  3b4f24               cmp ecx, dword ptr [edi + 0x24]
// 0078716c  752a                 jne 0x787198
// 0078716e  8bce                 mov ecx, esi
// 00787170  ff15f4ff8900         call dword ptr [0x89fff4]
// 00787176  33c0                 xor eax, eax
// 00787178  8d560c               lea edx, [esi + 0xc]
// 0078717b  52                   push edx
// 0078717c  894608               mov dword ptr [esi + 8], eax
// 0078717f  894620               mov dword ptr [esi + 0x20], eax
// 00787182  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00787189  89461c               mov dword ptr [esi + 0x1c], eax
// 0078718c  ffd5                 call ebp
// 0078718e  83c628               add esi, 0x28
// 00787191  56                   push esi
// 00787192  ffd5                 call ebp
// 00787194  8b542418             mov edx, dword ptr [esp + 0x18]
// 00787198  6a01                 push 1
// 0078719a  53                   push ebx
// 0078719b  8bca                 mov ecx, edx
// 0078719d  e8beb4fcff           call 0x752660
// 007871a2  8bcf                 mov ecx, edi
// 007871a4  ff1510fd8900         call dword ptr [0x89fd10]
// 007871aa  57                   push edi
// 007871ab  e88218f9ff           call 0x718a32
// 007871b0  83c404               add esp, 4
// 007871b3  5f                   pop edi
// 007871b4  5d                   pop ebp
// 007871b5  5e                   pop esi
// 007871b6  5b                   pop ebx
// 007871b7  59                   pop ecx
// 007871b8  c20400               ret 4
// 007871bb  e8241bf9ff           call 0x718ce4
// copied from an identical function in another client (function ?DelTool@CXTPToolTipContextToolTip@@QAEXPAUtagTOOLINFOA@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp