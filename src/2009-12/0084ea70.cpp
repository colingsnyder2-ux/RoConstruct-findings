// roc 2009-12 0084ea70  unit: CXTPPropertyGrid  size: 723 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084ea70
//
// 0084ea70  8b542408             mov edx, dword ptr [esp + 8]
// 0084ea74  83ec44               sub esp, 0x44
// 0084ea77  53                   push ebx
// 0084ea78  55                   push ebp
// 0084ea79  56                   push esi
// 0084ea7a  57                   push edi
// 0084ea7b  8bf9                 mov edi, ecx
// 0084ea7d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0084ea81  8b07                 mov eax, dword ptr [edi]
// 0084ea83  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 0084ea89  51                   push ecx
// 0084ea8a  52                   push edx
// 0084ea8b  8bcf                 mov ecx, edi
// 0084ea8d  ffd0                 call eax
// 0084ea8f  8bf0                 mov esi, eax
// 0084ea91  83feff               cmp esi, -1
// 0084ea94  7441                 je 0x84ead7
// 0084ea96  83fe03               cmp esi, 3
// 0084ea99  7c3c                 jl 0x84ead7
// 0084ea9b  83c6fd               add esi, -3
// 0084ea9e  8bcf                 mov ecx, edi
// 0084eaa0  89b748010000         mov dword ptr [edi + 0x148], esi
// 0084eaa6  c7878001000001000000 mov dword ptr [edi + 0x180], 1
// 0084eab0  e84d51faff           call 0x7f3c02
// 0084eab5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0084eab8  6a00                 push 0
// 0084eaba  6a00                 push 0
// 0084eabc  51                   push ecx
// 0084eabd  c7878001000000000000 mov dword ptr [edi + 0x180], 0
// 0084eac7  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0084eacd  5f                   pop edi
// 0084eace  5e                   pop esi
// 0084eacf  5d                   pop ebp
// 0084ead0  5b                   pop ebx
// 0084ead1  83c444               add esp, 0x44
// 0084ead4  c20c00               ret 0xc
// 0084ead7  8bcf                 mov ecx, edi
// 0084ead9  e82451faff           call 0x7f3c02
// 0084eade  83fe01               cmp esi, 1
// 0084eae1  7416                 je 0x84eaf9
// 0084eae3  83fe02               cmp esi, 2
// 0084eae6  7411                 je 0x84eaf9
// 0084eae8  8bcf                 mov ecx, edi
// 0084eaea  e84153faff           call 0x7f3e30
// 0084eaef  5f                   pop edi
// 0084eaf0  5e                   pop esi
// 0084eaf1  5d                   pop ebp
// 0084eaf2  5b                   pop ebx
// 0084eaf3  83c444               add esp, 0x44
// 0084eaf6  c20c00               ret 0xc
// 0084eaf9  8b5720               mov edx, dword ptr [edi + 0x20]
// 0084eafc  52                   push edx
// 0084eafd  ff152ccc9800         call dword ptr [0x98cc2c]
// 0084eb03  50                   push eax
// 0084eb04  e82150faff           call 0x7f3b2a
// 0084eb09  57                   push edi
// 0084eb0a  8d4c241c             lea ecx, [esp + 0x1c]
// 0084eb0e  e8bdc7ffff           call 0x84b2d0
// 0084eb13  33c0                 xor eax, eax
// 0084eb15  83fe01               cmp esi, 1
// 0084eb18  0f94c0               sete al
// 0084eb1b  33c9                 xor ecx, ecx
// 0084eb1d  89442414             mov dword ptr [esp + 0x14], eax
// 0084eb21  3bc1                 cmp eax, ecx
// 0084eb23  740e                 je 0x84eb33
// 0084eb25  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084eb29  8b542424             mov edx, dword ptr [esp + 0x24]
// 0084eb2d  89442430             mov dword ptr [esp + 0x30], eax
// 0084eb31  eb1d                 jmp 0x84eb50
// 0084eb33  394f60               cmp dword ptr [edi + 0x60], ecx
// 0084eb36  7408                 je 0x84eb40
// 0084eb38  8b4754               mov eax, dword ptr [edi + 0x54]
// 0084eb3b  83c003               add eax, 3
// 0084eb3e  eb02                 jmp 0x84eb42
// 0084eb40  33c0                 xor eax, eax
// 0084eb42  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084eb46  89542430             mov dword ptr [esp + 0x30], edx
// 0084eb4a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0084eb4e  2bd0                 sub edx, eax
// 0084eb50  8d442428             lea eax, [esp + 0x28]
// 0084eb54  894c2428             mov dword ptr [esp + 0x28], ecx
// 0084eb58  89542434             mov dword ptr [esp + 0x34], edx
// 0084eb5c  c744242c2d000000     mov dword ptr [esp + 0x2c], 0x2d
// 0084eb64  8b10                 mov edx, dword ptr [eax]
// 0084eb66  8b6804               mov ebp, dword ptr [eax + 4]
// 0084eb69  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0084eb6c  51                   push ecx
// 0084eb6d  51                   push ecx
// 0084eb6e  89542440             mov dword ptr [esp + 0x40], edx
// 0084eb72  8b5008               mov edx, dword ptr [eax + 8]
// 0084eb75  6800000006           push 0x6000000
// 0084eb7a  8bcf                 mov ecx, edi
// 0084eb7c  8954244c             mov dword ptr [esp + 0x4c], edx
// 0084eb80  e85554faff           call 0x7f3fda
// 0084eb85  8b442460             mov eax, dword ptr [esp + 0x60]
// 0084eb89  8b542420             mov edx, dword ptr [esp + 0x20]
// 0084eb8d  2b542418             sub edx, dword ptr [esp + 0x18]
// 0084eb91  8d4803               lea ecx, [eax + 3]
// 0084eb94  51                   push ecx
// 0084eb95  52                   push edx
// 0084eb96  50                   push eax
// 0084eb97  6a00                 push 0
// 0084eb99  8db770010000         lea esi, [edi + 0x170]
// 0084eb9f  56                   push esi
// 0084eba0  ff1538ca9800         call dword ptr [0x98ca38]
// 0084eba6  8b0e                 mov ecx, dword ptr [esi]
// 0084eba8  8b5604               mov edx, dword ptr [esi + 4]
// 0084ebab  83ec10               sub esp, 0x10
// 0084ebae  8bc4                 mov eax, esp
// 0084ebb0  8908                 mov dword ptr [eax], ecx
// 0084ebb2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084ebb5  895004               mov dword ptr [eax + 4], edx
// 0084ebb8  8b560c               mov edx, dword ptr [esi + 0xc]
// 0084ebbb  894808               mov dword ptr [eax + 8], ecx
// 0084ebbe  8bcf                 mov ecx, edi
// 0084ebc0  89500c               mov dword ptr [eax + 0xc], edx
// 0084ebc3  e898fcffff           call 0x84e860
// 0084ebc8  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0084ebd0  ff1528cc9800         call dword ptr [0x98cc28]
// 0084ebd6  50                   push eax
// 0084ebd7  e84e4ffaff           call 0x7f3b2a
// 0084ebdc  3bc7                 cmp eax, edi
// 0084ebde  0f85f4000000         jne 0x84ecd8
// 0084ebe4  6a00                 push 0
// 0084ebe6  6a00                 push 0
// 0084ebe8  6a00                 push 0
// 0084ebea  8d442444             lea eax, [esp + 0x44]
// 0084ebee  50                   push eax
// 0084ebef  ff15b0ca9800         call dword ptr [0x98cab0]
// 0084ebf5  85c0                 test eax, eax
// 0084ebf7  0f84db000000         je 0x84ecd8
// 0084ebfd  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0084ec01  3d00020000           cmp eax, 0x200
// 0084ec06  0f858c000000         jne 0x84ec98
// 0084ec0c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0084ec10  0fbfc8               movsx ecx, ax
// 0084ec13  c1e810               shr eax, 0x10
// 0084ec16  98                   cwde 
// 0084ec17  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0084ec1b  8d4bec               lea ecx, [ebx - 0x14]
// 0084ec1e  3bc1                 cmp eax, ecx
// 0084ec20  89442460             mov dword ptr [esp + 0x60], eax
// 0084ec24  7c06                 jl 0x84ec2c
// 0084ec26  8bc1                 mov eax, ecx
// 0084ec28  89442460             mov dword ptr [esp + 0x60], eax
// 0084ec2c  3bc5                 cmp eax, ebp
// 0084ec2e  7f06                 jg 0x84ec36
// 0084ec30  8bc5                 mov eax, ebp
// 0084ec32  89442460             mov dword ptr [esp + 0x60], eax
// 0084ec36  398774010000         cmp dword ptr [edi + 0x174], eax
// 0084ec3c  747c                 je 0x84ecba
// 0084ec3e  8b0e                 mov ecx, dword ptr [esi]
// 0084ec40  8b5604               mov edx, dword ptr [esi + 4]
// 0084ec43  83ec10               sub esp, 0x10
// 0084ec46  8bc4                 mov eax, esp
// 0084ec48  8908                 mov dword ptr [eax], ecx
// 0084ec4a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084ec4d  895004               mov dword ptr [eax + 4], edx
// 0084ec50  8b560c               mov edx, dword ptr [esi + 0xc]
// 0084ec53  894808               mov dword ptr [eax + 8], ecx
// 0084ec56  8bcf                 mov ecx, edi
// 0084ec58  89500c               mov dword ptr [eax + 0xc], edx
// 0084ec5b  e800fcffff           call 0x84e860
// 0084ec60  8b442460             mov eax, dword ptr [esp + 0x60]
// 0084ec64  2b8774010000         sub eax, dword ptr [edi + 0x174]
// 0084ec6a  50                   push eax
// 0084ec6b  6a00                 push 0
// 0084ec6d  56                   push esi
// 0084ec6e  ff156ccc9800         call dword ptr [0x98cc6c]
// 0084ec74  8b0e                 mov ecx, dword ptr [esi]
// 0084ec76  8b5604               mov edx, dword ptr [esi + 4]
// 0084ec79  83ec10               sub esp, 0x10
// 0084ec7c  8bc4                 mov eax, esp
// 0084ec7e  8908                 mov dword ptr [eax], ecx
// 0084ec80  8b4e08               mov ecx, dword ptr [esi + 8]
// 0084ec83  895004               mov dword ptr [eax + 4], edx
// 0084ec86  8b560c               mov edx, dword ptr [esi + 0xc]
// 0084ec89  894808               mov dword ptr [eax + 8], ecx
// 0084ec8c  8bcf                 mov ecx, edi
// 0084ec8e  89500c               mov dword ptr [eax + 0xc], edx
// 0084ec91  e8cafbffff           call 0x84e860
// 0084ec96  eb22                 jmp 0x84ecba
// 0084ec98  3d00010000           cmp eax, 0x100
// 0084ec9d  7509                 jne 0x84eca8
// 0084ec9f  837c24401b           cmp dword ptr [esp + 0x40], 0x1b
// 0084eca4  7432                 je 0x84ecd8
// 0084eca6  eb07                 jmp 0x84ecaf
// 0084eca8  3d02020000           cmp eax, 0x202
// 0084ecad  7421                 je 0x84ecd0
// 0084ecaf  8d442438             lea eax, [esp + 0x38]
// 0084ecb3  50                   push eax
// 0084ecb4  ff1594ca9800         call dword ptr [0x98ca94]
// 0084ecba  ff1528cc9800         call dword ptr [0x98cc28]
// 0084ecc0  50                   push eax
// 0084ecc1  e8644efaff           call 0x7f3b2a
// 0084ecc6  3bc7                 cmp eax, edi
// 0084ecc8  0f8416ffffff         je 0x84ebe4
// 0084ecce  eb08                 jmp 0x84ecd8
// 0084ecd0  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0084ecd8  ff1520cc9800         call dword ptr [0x98cc20]
// 0084ecde  837c241000           cmp dword ptr [esp + 0x10], 0
// 0084ece3  7436                 je 0x84ed1b
// 0084ece5  2b9f74010000         sub ebx, dword ptr [edi + 0x174]
// 0084eceb  83eb02               sub ebx, 2
// 0084ecee  837c241400           cmp dword ptr [esp + 0x14], 0
// 0084ecf3  7405                 je 0x84ecfa
// 0084ecf5  895f54               mov dword ptr [edi + 0x54], ebx
// 0084ecf8  eb03                 jmp 0x84ecfd
// 0084ecfa  895f58               mov dword ptr [edi + 0x58], ebx
// 0084ecfd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0084ed01  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 0084ed05  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084ed09  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0084ed0d  8b17                 mov edx, dword ptr [edi]
// 0084ed0f  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 0084ed15  50                   push eax
// 0084ed16  51                   push ecx
// 0084ed17  8bcf                 mov ecx, edi
// 0084ed19  ffd2                 call edx
// 0084ed1b  8b4720               mov eax, dword ptr [edi + 0x20]
// 0084ed1e  6a00                 push 0
// 0084ed20  6a00                 push 0
// 0084ed22  50                   push eax
// 0084ed23  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0084ed29  6a00                 push 0
// 0084ed2b  6800000006           push 0x6000000
// 0084ed30  6a00                 push 0
// 0084ed32  8bcf                 mov ecx, edi
// 0084ed34  e8a152faff           call 0x7f3fda
// 0084ed39  5f                   pop edi
// 0084ed3a  5e                   pop esi
// 0084ed3b  5d                   pop ebp
// 0084ed3c  5b                   pop ebx
// 0084ed3d  83c444               add esp, 0x44
// 0084ed40  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPPropertyGrid@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp