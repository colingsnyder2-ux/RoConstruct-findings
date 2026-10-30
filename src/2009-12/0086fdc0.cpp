// roc 2009-12 0086fdc0  unit: CXTPNewToolbarDlg  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086fdc0
//
// 0086fdc0  83ec1c               sub esp, 0x1c
// 0086fdc3  8b442424             mov eax, dword ptr [esp + 0x24]
// 0086fdc7  53                   push ebx
// 0086fdc8  55                   push ebp
// 0086fdc9  56                   push esi
// 0086fdca  57                   push edi
// 0086fdcb  8bf9                 mov edi, ecx
// 0086fdcd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0086fdd1  50                   push eax
// 0086fdd2  51                   push ecx
// 0086fdd3  ff1528cb9800         call dword ptr [0x98cb28]
// 0086fdd9  8b5f28               mov ebx, dword ptr [edi + 0x28]
// 0086fddc  83eb01               sub ebx, 1
// 0086fddf  89442410             mov dword ptr [esp + 0x10], eax
// 0086fde3  786a                 js 0x86fe4f
// 0086fde5  85db                 test ebx, ebx
// 0086fde7  0f8c1c010000         jl 0x86ff09
// 0086fded  3b5f28               cmp ebx, dword ptr [edi + 0x28]
// 0086fdf0  0f8d13010000         jge 0x86ff09
// 0086fdf6  8b5724               mov edx, dword ptr [edi + 0x24]
// 0086fdf9  8b349a               mov esi, dword ptr [edx + ebx*4]
// 0086fdfc  8b06                 mov eax, dword ptr [esi]
// 0086fdfe  8b9068010000         mov edx, dword ptr [eax + 0x168]
// 0086fe04  8bce                 mov ecx, esi
// 0086fe06  ffd2                 call edx
// 0086fe08  85c0                 test eax, eax
// 0086fe0a  743e                 je 0x86fe4a
// 0086fe0c  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086fe10  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0086fe14  56                   push esi
// 0086fe15  8d4c2420             lea ecx, [esp + 0x20]
// 0086fe19  8944241c             mov dword ptr [esp + 0x1c], eax
// 0086fe1d  e84eb4fdff           call 0x84b270
// 0086fe22  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0086fe26  51                   push ecx
// 0086fe27  55                   push ebp
// 0086fe28  50                   push eax
// 0086fe29  ff155cca9800         call dword ptr [0x98ca5c]
// 0086fe2f  85c0                 test eax, eax
// 0086fe31  7417                 je 0x86fe4a
// 0086fe33  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086fe36  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086fe3a  3bc1                 cmp eax, ecx
// 0086fe3c  743a                 je 0x86fe78
// 0086fe3e  51                   push ecx
// 0086fe3f  50                   push eax
// 0086fe40  ff15f4ca9800         call dword ptr [0x98caf4]
// 0086fe46  85c0                 test eax, eax
// 0086fe48  752e                 jne 0x86fe78
// 0086fe4a  83eb01               sub ebx, 1
// 0086fe4d  7996                 jns 0x86fde5
// 0086fe4f  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0086fe52  85c9                 test ecx, ecx
// 0086fe54  7411                 je 0x86fe67
// 0086fe56  8b01                 mov eax, dword ptr [ecx]
// 0086fe58  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0086fe5e  ffd2                 call edx
// 0086fe60  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0086fe67  8bcf                 mov ecx, edi
// 0086fe69  e862f9ffff           call 0x86f7d0
// 0086fe6e  5f                   pop edi
// 0086fe6f  5e                   pop esi
// 0086fe70  5d                   pop ebp
// 0086fe71  5b                   pop ebx
// 0086fe72  83c41c               add esp, 0x1c
// 0086fe75  c20800               ret 8
// 0086fe78  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0086fe7b  8b1d34cc9800         mov ebx, dword ptr [0x98cc34]
// 0086fe81  3bce                 cmp ecx, esi
// 0086fe83  7528                 jne 0x86fead
// 0086fe85  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0086fe88  8d542430             lea edx, [esp + 0x30]
// 0086fe8c  52                   push edx
// 0086fe8d  50                   push eax
// 0086fe8e  ffd3                 call ebx
// 0086fe90  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086fe94  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0086fe97  8b11                 mov edx, dword ptr [ecx]
// 0086fe99  8b9278010000         mov edx, dword ptr [edx + 0x178]
// 0086fe9f  50                   push eax
// 0086fea0  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086fea4  50                   push eax
// 0086fea5  8b4704               mov eax, dword ptr [edi + 4]
// 0086fea8  50                   push eax
// 0086fea9  ffd2                 call edx
// 0086feab  eb15                 jmp 0x86fec2
// 0086fead  85c9                 test ecx, ecx
// 0086feaf  7411                 je 0x86fec2
// 0086feb1  8b01                 mov eax, dword ptr [ecx]
// 0086feb3  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0086feb9  ffd2                 call edx
// 0086febb  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0086fec2  837f1000             cmp dword ptr [edi + 0x10], 0
// 0086fec6  759f                 jne 0x86fe67
// 0086fec8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0086fecb  8d442430             lea eax, [esp + 0x30]
// 0086fecf  50                   push eax
// 0086fed0  51                   push ecx
// 0086fed1  ffd3                 call ebx
// 0086fed3  8b442434             mov eax, dword ptr [esp + 0x34]
// 0086fed7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0086fedb  8b16                 mov edx, dword ptr [esi]
// 0086fedd  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 0086fee3  50                   push eax
// 0086fee4  8b4704               mov eax, dword ptr [edi + 4]
// 0086fee7  51                   push ecx
// 0086fee8  50                   push eax
// 0086fee9  8bce                 mov ecx, esi
// 0086feeb  ffd2                 call edx
// 0086feed  85c0                 test eax, eax
// 0086feef  0f8472ffffff         je 0x86fe67
// 0086fef5  8bcf                 mov ecx, edi
// 0086fef7  897710               mov dword ptr [edi + 0x10], esi
// 0086fefa  e8d1f8ffff           call 0x86f7d0
// 0086feff  5f                   pop edi
// 0086ff00  5e                   pop esi
// 0086ff01  5d                   pop ebp
// 0086ff02  5b                   pop ebx
// 0086ff03  83c41c               add esp, 0x1c
// 0086ff06  c20800               ret 8
// 0086ff09  e8fe3bf8ff           call 0x7f3b0c
// copied from an identical function in another client (function ?PickTarget@CXTPCustomizeDropSource@@AAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPCustomizeTools.cpp