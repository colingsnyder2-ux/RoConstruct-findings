// roc 2011-06 008b73a0  unit: CXTPReportNavigator  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b73a0
//
// 008b73a0  6aff                 push -1
// 008b73a2  6801b8a000           push 0xa0b801
// 008b73a7  64a100000000         mov eax, dword ptr fs:[0]
// 008b73ad  50                   push eax
// 008b73ae  83ec28               sub esp, 0x28
// 008b73b1  56                   push esi
// 008b73b2  57                   push edi
// 008b73b3  a12058c900           mov eax, dword ptr [0xc95820]
// 008b73b8  33c4                 xor eax, esp
// 008b73ba  50                   push eax
// 008b73bb  8d442434             lea eax, [esp + 0x34]
// 008b73bf  64a300000000         mov dword ptr fs:[0], eax
// 008b73c5  8bf1                 mov esi, ecx
// 008b73c7  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b73cb  0f84a2010000         je 0x8b7573
// 008b73d1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b73d4  8b01                 mov eax, dword ptr [ecx]
// 008b73d6  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008b73dc  ffd2                 call edx
// 008b73de  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b73e1  e88ac2f7ff           call 0x833670
// 008b73e6  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b73e9  8b4020               mov eax, dword ptr [eax + 0x20]
// 008b73ec  50                   push eax
// 008b73ed  ff152c1ba400         call dword ptr [0xa41b2c]
// 008b73f3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b73f6  e8e5b2f7ff           call 0x8326e0
// 008b73fb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b73fe  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 008b7405  8bf8                 mov edi, eax
// 008b7407  0f8466010000         je 0x8b7573
// 008b740d  85ff                 test edi, edi
// 008b740f  0f845e010000         je 0x8b7573
// 008b7415  8b17                 mov edx, dword ptr [edi]
// 008b7417  8b4260               mov eax, dword ptr [edx + 0x60]
// 008b741a  8bcf                 mov ecx, edi
// 008b741c  ffd0                 call eax
// 008b741e  85c0                 test eax, eax
// 008b7420  0f844d010000         je 0x8b7573
// 008b7426  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b7429  8b8818020000         mov ecx, dword ptr [eax + 0x218]
// 008b742f  51                   push ecx
// 008b7430  57                   push edi
// 008b7431  50                   push eax
// 008b7432  8d4c241c             lea ecx, [esp + 0x1c]
// 008b7436  e8d578f8ff           call 0x83ed10
// 008b743b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b743f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008b7447  85c9                 test ecx, ecx
// 008b7449  0f8413010000         je 0x8b7562
// 008b744f  8b11                 mov edx, dword ptr [ecx]
// 008b7451  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008b7457  8d442410             lea eax, [esp + 0x10]
// 008b745b  50                   push eax
// 008b745c  ffd2                 call edx
// 008b745e  85c0                 test eax, eax
// 008b7460  0f84fc000000         je 0x8b7562
// 008b7466  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b7469  e852b2f7ff           call 0x8326c0
// 008b746e  85c0                 test eax, eax
// 008b7470  7509                 jne 0x8b747b
// 008b7472  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b7475  57                   push edi
// 008b7476  e805c9f7ff           call 0x833d80
// 008b747b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b747e  8d442410             lea eax, [esp + 0x10]
// 008b7482  50                   push eax
// 008b7483  e8a818f8ff           call 0x838d30
// 008b7488  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b748b  8b8124020000         mov eax, dword ptr [ecx + 0x224]
// 008b7491  85c0                 test eax, eax
// 008b7493  0f84c9000000         je 0x8b7562
// 008b7499  83782000             cmp dword ptr [eax + 0x20], 0
// 008b749d  0f84bf000000         je 0x8b7562
// 008b74a3  8b4064               mov eax, dword ptr [eax + 0x64]
// 008b74a6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b74aa  3bc1                 cmp eax, ecx
// 008b74ac  0f85b0000000         jne 0x8b7562
// 008b74b2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b74b6  52                   push edx
// 008b74b7  e85486f8ff           call 0x83fb10
// 008b74bc  85c0                 test eax, eax
// 008b74be  7435                 je 0x8b74f5
// 008b74c0  83784000             cmp dword ptr [eax + 0x40], 0
// 008b74c4  742f                 je 0x8b74f5
// 008b74c6  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b74c9  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 008b74cf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b74d2  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008b74d8  6aff                 push -1
// 008b74da  6a00                 push 0
// 008b74dc  68b1000000           push 0xb1
// 008b74e1  51                   push ecx
// 008b74e2  ffd7                 call edi
// 008b74e4  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b74e7  6a00                 push 0
// 008b74e9  6a00                 push 0
// 008b74eb  68b7000000           push 0xb7
// 008b74f0  52                   push edx
// 008b74f1  ffd7                 call edi
// 008b74f3  eb6d                 jmp 0x8b7562
// 008b74f5  8d4c240c             lea ecx, [esp + 0xc]
// 008b74f9  ff15b42da400         call dword ptr [0xa42db4]
// 008b74ff  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b7502  8b8824020000         mov ecx, dword ptr [eax + 0x224]
// 008b7508  8d54240c             lea edx, [esp + 0xc]
// 008b750c  52                   push edx
// 008b750d  c644244001           mov byte ptr [esp + 0x40], 1
// 008b7512  e82f31f5ff           call 0x80a646
// 008b7517  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b751a  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 008b7520  8d4c240c             lea ecx, [esp + 0xc]
// 008b7524  ff15a826a400         call dword ptr [0xa426a8]
// 008b752a  8d4c240c             lea ecx, [esp + 0xc]
// 008b752e  8bf8                 mov edi, eax
// 008b7530  ff15a826a400         call dword ptr [0xa426a8]
// 008b7536  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b7539  57                   push edi
// 008b753a  8b3dc019a400         mov edi, dword ptr [0xa419c0]
// 008b7540  50                   push eax
// 008b7541  68b1000000           push 0xb1
// 008b7546  51                   push ecx
// 008b7547  ffd7                 call edi
// 008b7549  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b754c  6a00                 push 0
// 008b754e  6a00                 push 0
// 008b7550  68b7000000           push 0xb7
// 008b7555  52                   push edx
// 008b7556  ffd7                 call edi
// 008b7558  8d4c240c             lea ecx, [esp + 0xc]
// 008b755c  ff15082ea400         call dword ptr [0xa42e08]
// 008b7562  8d4c2410             lea ecx, [esp + 0x10]
// 008b7566  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008b756e  e88d70f8ff           call 0x83e600
// 008b7573  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008b7577  64890d00000000       mov dword ptr fs:[0], ecx
// 008b757e  59                   pop ecx
// 008b757f  5f                   pop edi
// 008b7580  5e                   pop esi
// 008b7581  83c434               add esp, 0x34
// 008b7584  c3                   ret 
// copied from an identical function in another client (function ?BeginEdit@CXTPReportNavigator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportNavigator.cpp