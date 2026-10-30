// roc 2009-12 008a6a00  unit: CXTPReportNavigator  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a6a00
//
// 008a6a00  6aff                 push -1
// 008a6a02  68f1269600           push 0x9626f1
// 008a6a07  64a100000000         mov eax, dword ptr fs:[0]
// 008a6a0d  50                   push eax
// 008a6a0e  83ec28               sub esp, 0x28
// 008a6a11  56                   push esi
// 008a6a12  57                   push edi
// 008a6a13  a10052b600           mov eax, dword ptr [0xb65200]
// 008a6a18  33c4                 xor eax, esp
// 008a6a1a  50                   push eax
// 008a6a1b  8d442434             lea eax, [esp + 0x34]
// 008a6a1f  64a300000000         mov dword ptr fs:[0], eax
// 008a6a25  8bf1                 mov esi, ecx
// 008a6a27  837e2000             cmp dword ptr [esi + 0x20], 0
// 008a6a2b  0f84a2010000         je 0x8a6bd3
// 008a6a31  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6a34  8b01                 mov eax, dword ptr [ecx]
// 008a6a36  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 008a6a3c  ffd2                 call edx
// 008a6a3e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6a41  e83a8af7ff           call 0x81f480
// 008a6a46  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6a49  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a6a4c  50                   push eax
// 008a6a4d  ff15a4ca9800         call dword ptr [0x98caa4]
// 008a6a53  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6a56  e8057bf7ff           call 0x81e560
// 008a6a5b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6a5e  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 008a6a65  8bf8                 mov edi, eax
// 008a6a67  0f8466010000         je 0x8a6bd3
// 008a6a6d  85ff                 test edi, edi
// 008a6a6f  0f845e010000         je 0x8a6bd3
// 008a6a75  8b17                 mov edx, dword ptr [edi]
// 008a6a77  8b4260               mov eax, dword ptr [edx + 0x60]
// 008a6a7a  8bcf                 mov ecx, edi
// 008a6a7c  ffd0                 call eax
// 008a6a7e  85c0                 test eax, eax
// 008a6a80  0f844d010000         je 0x8a6bd3
// 008a6a86  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6a89  8b8818020000         mov ecx, dword ptr [eax + 0x218]
// 008a6a8f  51                   push ecx
// 008a6a90  57                   push edi
// 008a6a91  50                   push eax
// 008a6a92  8d4c241c             lea ecx, [esp + 0x1c]
// 008a6a96  e8153cf7ff           call 0x81a6b0
// 008a6a9b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a6a9f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008a6aa7  85c9                 test ecx, ecx
// 008a6aa9  0f8413010000         je 0x8a6bc2
// 008a6aaf  8b11                 mov edx, dword ptr [ecx]
// 008a6ab1  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008a6ab7  8d442410             lea eax, [esp + 0x10]
// 008a6abb  50                   push eax
// 008a6abc  ffd2                 call edx
// 008a6abe  85c0                 test eax, eax
// 008a6ac0  0f84fc000000         je 0x8a6bc2
// 008a6ac6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6ac9  e8727af7ff           call 0x81e540
// 008a6ace  85c0                 test eax, eax
// 008a6ad0  7509                 jne 0x8a6adb
// 008a6ad2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6ad5  57                   push edi
// 008a6ad6  e8b590f7ff           call 0x81fb90
// 008a6adb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6ade  8d442410             lea eax, [esp + 0x10]
// 008a6ae2  50                   push eax
// 008a6ae3  e848e0f7ff           call 0x824b30
// 008a6ae8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6aeb  8b8124020000         mov eax, dword ptr [ecx + 0x224]
// 008a6af1  85c0                 test eax, eax
// 008a6af3  0f84c9000000         je 0x8a6bc2
// 008a6af9  83782000             cmp dword ptr [eax + 0x20], 0
// 008a6afd  0f84bf000000         je 0x8a6bc2
// 008a6b03  8b4064               mov eax, dword ptr [eax + 0x64]
// 008a6b06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a6b0a  3bc1                 cmp eax, ecx
// 008a6b0c  0f85b0000000         jne 0x8a6bc2
// 008a6b12  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008a6b16  52                   push edx
// 008a6b17  e89449f7ff           call 0x81b4b0
// 008a6b1c  85c0                 test eax, eax
// 008a6b1e  7435                 je 0x8a6b55
// 008a6b20  83784000             cmp dword ptr [eax + 0x40], 0
// 008a6b24  742f                 je 0x8a6b55
// 008a6b26  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6b29  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 008a6b2f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6b32  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008a6b38  6aff                 push -1
// 008a6b3a  6a00                 push 0
// 008a6b3c  68b1000000           push 0xb1
// 008a6b41  51                   push ecx
// 008a6b42  ffd7                 call edi
// 008a6b44  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a6b47  6a00                 push 0
// 008a6b49  6a00                 push 0
// 008a6b4b  68b7000000           push 0xb7
// 008a6b50  52                   push edx
// 008a6b51  ffd7                 call edi
// 008a6b53  eb6d                 jmp 0x8a6bc2
// 008a6b55  8d4c240c             lea ecx, [esp + 0xc]
// 008a6b59  ff1574de9800         call dword ptr [0x98de74]
// 008a6b5f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6b62  8b8824020000         mov ecx, dword ptr [eax + 0x224]
// 008a6b68  8d54240c             lea edx, [esp + 0xc]
// 008a6b6c  52                   push edx
// 008a6b6d  c644244001           mov byte ptr [esp + 0x40], 1
// 008a6b72  e8d1d2f4ff           call 0x7f3e48
// 008a6b77  8b4620               mov eax, dword ptr [esi + 0x20]
// 008a6b7a  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 008a6b80  8d4c240c             lea ecx, [esp + 0xc]
// 008a6b84  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a6b8a  8d4c240c             lea ecx, [esp + 0xc]
// 008a6b8e  8bf8                 mov edi, eax
// 008a6b90  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008a6b96  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a6b99  57                   push edi
// 008a6b9a  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008a6ba0  50                   push eax
// 008a6ba1  68b1000000           push 0xb1
// 008a6ba6  51                   push ecx
// 008a6ba7  ffd7                 call edi
// 008a6ba9  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a6bac  6a00                 push 0
// 008a6bae  6a00                 push 0
// 008a6bb0  68b7000000           push 0xb7
// 008a6bb5  52                   push edx
// 008a6bb6  ffd7                 call edi
// 008a6bb8  8d4c240c             lea ecx, [esp + 0xc]
// 008a6bbc  ff15c0de9800         call dword ptr [0x98dec0]
// 008a6bc2  8d4c2410             lea ecx, [esp + 0x10]
// 008a6bc6  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008a6bce  e8cd34f7ff           call 0x81a0a0
// 008a6bd3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008a6bd7  64890d00000000       mov dword ptr fs:[0], ecx
// 008a6bde  59                   pop ecx
// 008a6bdf  5f                   pop edi
// 008a6be0  5e                   pop esi
// 008a6be1  83c434               add esp, 0x34
// 008a6be4  c3                   ret 
// copied from an identical function in another client (function ?BeginEdit@CXTPReportNavigator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportNavigator.cpp