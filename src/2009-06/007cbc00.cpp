// roc 2009-06 007cbc00  unit: CXTPReportNavigator  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007cbc00
//
// 007cbc00  6aff                 push -1
// 007cbc02  6881e58700           push 0x87e581
// 007cbc07  64a100000000         mov eax, dword ptr fs:[0]
// 007cbc0d  50                   push eax
// 007cbc0e  83ec28               sub esp, 0x28
// 007cbc11  56                   push esi
// 007cbc12  57                   push edi
// 007cbc13  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007cbc18  33c4                 xor eax, esp
// 007cbc1a  50                   push eax
// 007cbc1b  8d442434             lea eax, [esp + 0x34]
// 007cbc1f  64a300000000         mov dword ptr fs:[0], eax
// 007cbc25  8bf1                 mov esi, ecx
// 007cbc27  837e2000             cmp dword ptr [esi + 0x20], 0
// 007cbc2b  0f84a2010000         je 0x7cbdd3
// 007cbc31  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbc34  8b01                 mov eax, dword ptr [ecx]
// 007cbc36  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 007cbc3c  ffd2                 call edx
// 007cbc3e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbc41  e82a8af7ff           call 0x744670
// 007cbc46  8b4620               mov eax, dword ptr [esi + 0x20]
// 007cbc49  8b4020               mov eax, dword ptr [eax + 0x20]
// 007cbc4c  50                   push eax
// 007cbc4d  ff15b4ee8900         call dword ptr [0x89eeb4]
// 007cbc53  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbc56  e8457af7ff           call 0x7436a0
// 007cbc5b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbc5e  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 007cbc65  8bf8                 mov edi, eax
// 007cbc67  0f8466010000         je 0x7cbdd3
// 007cbc6d  85ff                 test edi, edi
// 007cbc6f  0f845e010000         je 0x7cbdd3
// 007cbc75  8b17                 mov edx, dword ptr [edi]
// 007cbc77  8b4260               mov eax, dword ptr [edx + 0x60]
// 007cbc7a  8bcf                 mov ecx, edi
// 007cbc7c  ffd0                 call eax
// 007cbc7e  85c0                 test eax, eax
// 007cbc80  0f844d010000         je 0x7cbdd3
// 007cbc86  8b4620               mov eax, dword ptr [esi + 0x20]
// 007cbc89  8b8818020000         mov ecx, dword ptr [eax + 0x218]
// 007cbc8f  51                   push ecx
// 007cbc90  57                   push edi
// 007cbc91  50                   push eax
// 007cbc92  8d4c241c             lea ecx, [esp + 0x1c]
// 007cbc96  e8053bf7ff           call 0x73f7a0
// 007cbc9b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007cbc9f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 007cbca7  85c9                 test ecx, ecx
// 007cbca9  0f8413010000         je 0x7cbdc2
// 007cbcaf  8b11                 mov edx, dword ptr [ecx]
// 007cbcb1  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 007cbcb7  8d442410             lea eax, [esp + 0x10]
// 007cbcbb  50                   push eax
// 007cbcbc  ffd2                 call edx
// 007cbcbe  85c0                 test eax, eax
// 007cbcc0  0f84fc000000         je 0x7cbdc2
// 007cbcc6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbcc9  e8b279f7ff           call 0x743680
// 007cbcce  85c0                 test eax, eax
// 007cbcd0  7509                 jne 0x7cbcdb
// 007cbcd2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbcd5  57                   push edi
// 007cbcd6  e8a590f7ff           call 0x744d80
// 007cbcdb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbcde  8d442410             lea eax, [esp + 0x10]
// 007cbce2  50                   push eax
// 007cbce3  e858e0f7ff           call 0x749d40
// 007cbce8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbceb  8b8124020000         mov eax, dword ptr [ecx + 0x224]
// 007cbcf1  85c0                 test eax, eax
// 007cbcf3  0f84c9000000         je 0x7cbdc2
// 007cbcf9  83782000             cmp dword ptr [eax + 0x20], 0
// 007cbcfd  0f84bf000000         je 0x7cbdc2
// 007cbd03  8b4064               mov eax, dword ptr [eax + 0x64]
// 007cbd06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007cbd0a  3bc1                 cmp eax, ecx
// 007cbd0c  0f85b0000000         jne 0x7cbdc2
// 007cbd12  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007cbd16  52                   push edx
// 007cbd17  e88448f7ff           call 0x7405a0
// 007cbd1c  85c0                 test eax, eax
// 007cbd1e  7435                 je 0x7cbd55
// 007cbd20  83784000             cmp dword ptr [eax + 0x40], 0
// 007cbd24  742f                 je 0x7cbd55
// 007cbd26  8b4620               mov eax, dword ptr [esi + 0x20]
// 007cbd29  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 007cbd2f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbd32  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 007cbd38  6aff                 push -1
// 007cbd3a  6a00                 push 0
// 007cbd3c  68b1000000           push 0xb1
// 007cbd41  51                   push ecx
// 007cbd42  ffd7                 call edi
// 007cbd44  8b5620               mov edx, dword ptr [esi + 0x20]
// 007cbd47  6a00                 push 0
// 007cbd49  6a00                 push 0
// 007cbd4b  68b7000000           push 0xb7
// 007cbd50  52                   push edx
// 007cbd51  ffd7                 call edi
// 007cbd53  eb6d                 jmp 0x7cbdc2
// 007cbd55  8d4c240c             lea ecx, [esp + 0xc]
// 007cbd59  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007cbd5f  8b4620               mov eax, dword ptr [esi + 0x20]
// 007cbd62  8b8824020000         mov ecx, dword ptr [eax + 0x224]
// 007cbd68  8d54240c             lea edx, [esp + 0xc]
// 007cbd6c  52                   push edx
// 007cbd6d  c644244001           mov byte ptr [esp + 0x40], 1
// 007cbd72  e8a9d2f4ff           call 0x719020
// 007cbd77  8b4620               mov eax, dword ptr [esi + 0x20]
// 007cbd7a  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 007cbd80  8d4c240c             lea ecx, [esp + 0xc]
// 007cbd84  ff1554fb8900         call dword ptr [0x89fb54]
// 007cbd8a  8d4c240c             lea ecx, [esp + 0xc]
// 007cbd8e  8bf8                 mov edi, eax
// 007cbd90  ff1554fb8900         call dword ptr [0x89fb54]
// 007cbd96  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007cbd99  57                   push edi
// 007cbd9a  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 007cbda0  50                   push eax
// 007cbda1  68b1000000           push 0xb1
// 007cbda6  51                   push ecx
// 007cbda7  ffd7                 call edi
// 007cbda9  8b5620               mov edx, dword ptr [esi + 0x20]
// 007cbdac  6a00                 push 0
// 007cbdae  6a00                 push 0
// 007cbdb0  68b7000000           push 0xb7
// 007cbdb5  52                   push edx
// 007cbdb6  ffd7                 call edi
// 007cbdb8  8d4c240c             lea ecx, [esp + 0xc]
// 007cbdbc  ff1510fd8900         call dword ptr [0x89fd10]
// 007cbdc2  8d4c2410             lea ecx, [esp + 0x10]
// 007cbdc6  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 007cbdce  e8ad33f7ff           call 0x73f180
// 007cbdd3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007cbdd7  64890d00000000       mov dword ptr fs:[0], ecx
// 007cbdde  59                   pop ecx
// 007cbddf  5f                   pop edi
// 007cbde0  5e                   pop esi
// 007cbde1  83c434               add esp, 0x34
// 007cbde4  c3                   ret 
// copied from an identical function in another client (function ?BeginEdit@CXTPReportNavigator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportNavigator.cpp