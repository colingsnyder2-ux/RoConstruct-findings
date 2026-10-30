// roc 2009-12 00874df0  unit: CXTPRibbonTheme  size: 441 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00874df0
//
// 00874df0  83ec40               sub esp, 0x40
// 00874df3  53                   push ebx
// 00874df4  55                   push ebp
// 00874df5  56                   push esi
// 00874df6  8b742454             mov esi, dword ptr [esp + 0x54]
// 00874dfa  8b86fc010000         mov eax, dword ptr [esi + 0x1fc]
// 00874e00  8b9608020000         mov edx, dword ptr [esi + 0x208]
// 00874e06  8bd9                 mov ebx, ecx
// 00874e08  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 00874e0e  8944240c             mov dword ptr [esp + 0xc], eax
// 00874e12  8b8600020000         mov eax, dword ptr [esi + 0x200]
// 00874e18  57                   push edi
// 00874e19  894c2418             mov dword ptr [esp + 0x18], ecx
// 00874e1d  48                   dec eax
// 00874e1e  685416a000           push 0xa01654
// 00874e23  8bcb                 mov ecx, ebx
// 00874e25  89542420             mov dword ptr [esp + 0x20], edx
// 00874e29  89442418             mov dword ptr [esp + 0x18], eax
// 00874e2d  e8ce9e0000           call 0x87ed00
// 00874e32  6a02                 push 2
// 00874e34  8bf8                 mov edi, eax
// 00874e36  33ed                 xor ebp, ebp
// 00874e38  55                   push ebp
// 00874e39  8d442438             lea eax, [esp + 0x38]
// 00874e3d  50                   push eax
// 00874e3e  8bcf                 mov ecx, edi
// 00874e40  e87bba0600           call 0x8e08c0
// 00874e45  83ec10               sub esp, 0x10
// 00874e48  8bcc                 mov ecx, esp
// 00874e4a  8929                 mov dword ptr [ecx], ebp
// 00874e4c  ba05000000           mov edx, 5
// 00874e51  895104               mov dword ptr [ecx + 4], edx
// 00874e54  33d2                 xor edx, edx
// 00874e56  895108               mov dword ptr [ecx + 8], edx
// 00874e59  83ec10               sub esp, 0x10
// 00874e5c  ba03000000           mov edx, 3
// 00874e61  89510c               mov dword ptr [ecx + 0xc], edx
// 00874e64  8b10                 mov edx, dword ptr [eax]
// 00874e66  8bcc                 mov ecx, esp
// 00874e68  8911                 mov dword ptr [ecx], edx
// 00874e6a  8b5004               mov edx, dword ptr [eax + 4]
// 00874e6d  895104               mov dword ptr [ecx + 4], edx
// 00874e70  8b5008               mov edx, dword ptr [eax + 8]
// 00874e73  8b400c               mov eax, dword ptr [eax + 0xc]
// 00874e76  895108               mov dword ptr [ecx + 8], edx
// 00874e79  8b542474             mov edx, dword ptr [esp + 0x74]
// 00874e7d  89410c               mov dword ptr [ecx + 0xc], eax
// 00874e80  8d4c2430             lea ecx, [esp + 0x30]
// 00874e84  51                   push ecx
// 00874e85  52                   push edx
// 00874e86  8bcf                 mov ecx, edi
// 00874e88  e803b30600           call 0x8e0190
// 00874e8d  8bce                 mov ecx, esi
// 00874e8f  e88c070200           call 0x895620
// 00874e94  85c0                 test eax, eax
// 00874e96  0f85df000000         jne 0x874f7b
// 00874e9c  39ae4c020000         cmp dword ptr [esi + 0x24c], ebp
// 00874ea2  0f84d3000000         je 0x874f7b
// 00874ea8  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00874eae  50                   push eax
// 00874eaf  e81c14fdff           call 0x8462d0
// 00874eb4  85c0                 test eax, eax
// 00874eb6  0f8ebf000000         jle 0x874f7b
// 00874ebc  8b8e38020000         mov ecx, dword ptr [esi + 0x238]
// 00874ec2  8b8630020000         mov eax, dword ptr [esi + 0x230]
// 00874ec8  8bbe2c020000         mov edi, dword ptr [esi + 0x22c]
// 00874ece  8bae34020000         mov ebp, dword ptr [esi + 0x234]
// 00874ed4  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00874ed8  8bce                 mov ecx, esi
// 00874eda  89442434             mov dword ptr [esp + 0x34], eax
// 00874ede  e81dff0100           call 0x894e00
// 00874ee3  83c7f1               add edi, -0xf
// 00874ee6  683c16a000           push 0xa0163c
// 00874eeb  8bcb                 mov ecx, ebx
// 00874eed  897c2424             mov dword ptr [esp + 0x24], edi
// 00874ef1  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00874ef9  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00874efd  89442430             mov dword ptr [esp + 0x30], eax
// 00874f01  e8fa9d0000           call 0x87ed00
// 00874f06  8bf8                 mov edi, eax
// 00874f08  85ff                 test edi, edi
// 00874f0a  746f                 je 0x874f7b
// 00874f0c  6a01                 push 1
// 00874f0e  6a00                 push 0
// 00874f10  8d542448             lea edx, [esp + 0x48]
// 00874f14  bd10000000           mov ebp, 0x10
// 00874f19  52                   push edx
// 00874f1a  8bcf                 mov ecx, edi
// 00874f1c  c7472c01000000       mov dword ptr [edi + 0x2c], 1
// 00874f23  896c2444             mov dword ptr [esp + 0x44], ebp
// 00874f27  c744244803000000     mov dword ptr [esp + 0x48], 3
// 00874f2f  e88cb90600           call 0x8e08c0
// 00874f34  83ec10               sub esp, 0x10
// 00874f37  8bcc                 mov ecx, esp
// 00874f39  8929                 mov dword ptr [ecx], ebp
// 00874f3b  ba03000000           mov edx, 3
// 00874f40  895104               mov dword ptr [ecx + 4], edx
// 00874f43  8bd5                 mov edx, ebp
// 00874f45  895108               mov dword ptr [ecx + 8], edx
// 00874f48  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00874f4c  89510c               mov dword ptr [ecx + 0xc], edx
// 00874f4f  8b10                 mov edx, dword ptr [eax]
// 00874f51  83ec10               sub esp, 0x10
// 00874f54  8bcc                 mov ecx, esp
// 00874f56  8911                 mov dword ptr [ecx], edx
// 00874f58  8b5004               mov edx, dword ptr [eax + 4]
// 00874f5b  895104               mov dword ptr [ecx + 4], edx
// 00874f5e  8b5008               mov edx, dword ptr [eax + 8]
// 00874f61  8b400c               mov eax, dword ptr [eax + 0xc]
// 00874f64  895108               mov dword ptr [ecx + 8], edx
// 00874f67  8b542474             mov edx, dword ptr [esp + 0x74]
// 00874f6b  89410c               mov dword ptr [ecx + 0xc], eax
// 00874f6e  8d4c2440             lea ecx, [esp + 0x40]
// 00874f72  51                   push ecx
// 00874f73  52                   push edx
// 00874f74  8bcf                 mov ecx, edi
// 00874f76  e815b20600           call 0x8e0190
// 00874f7b  8bbe84020000         mov edi, dword ptr [esi + 0x284]
// 00874f81  8bcf                 mov ecx, edi
// 00874f83  e8a862f3ff           call 0x7ab230
// 00874f88  85c0                 test eax, eax
// 00874f8a  7413                 je 0x874f9f
// 00874f8c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00874f90  8b03                 mov eax, dword ptr [ebx]
// 00874f92  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00874f98  57                   push edi
// 00874f99  56                   push esi
// 00874f9a  51                   push ecx
// 00874f9b  8bcb                 mov ecx, ebx
// 00874f9d  ffd2                 call edx
// 00874f9f  5f                   pop edi
// 00874fa0  5e                   pop esi
// 00874fa1  5d                   pop ebp
// 00874fa2  5b                   pop ebx
// 00874fa3  83c440               add esp, 0x40
// 00874fa6  c20800               ret 8
// copied from an identical function in another client (function ?DrawRibbonFrameCaptionBar@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp