// roc 2010-06 007bea20  unit: CXTPImageManagerResource::CBitmapDC  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bea20
//
// 007bea20  83ec2c               sub esp, 0x2c
// 007bea23  56                   push esi
// 007bea24  8b742438             mov esi, dword ptr [esp + 0x38]
// 007bea28  85f6                 test esi, esi
// 007bea2a  7507                 jne 0x7bea33
// 007bea2c  33c0                 xor eax, eax
// 007bea2e  5e                   pop esi
// 007bea2f  83c42c               add esp, 0x2c
// 007bea32  c3                   ret 
// 007bea33  53                   push ebx
// 007bea34  6a2c                 push 0x2c
// 007bea36  8d44240c             lea eax, [esp + 0xc]
// 007bea3a  6a00                 push 0
// 007bea3c  50                   push eax
// 007bea3d  e8a2a1feff           call 0x7a8be4
// 007bea42  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 007bea46  83c40c               add esp, 0xc
// 007bea49  c744240828000000     mov dword ptr [esp + 8], 0x28
// 007bea51  85db                 test ebx, ebx
// 007bea53  7504                 jne 0x7bea59
// 007bea55  33c0                 xor eax, eax
// 007bea57  eb03                 jmp 0x7bea5c
// 007bea59  8b4304               mov eax, dword ptr [ebx + 4]
// 007bea5c  55                   push ebp
// 007bea5d  8b2dcca09e00         mov ebp, dword ptr [0x9ea0cc]
// 007bea63  6a00                 push 0
// 007bea65  8d4c2410             lea ecx, [esp + 0x10]
// 007bea69  51                   push ecx
// 007bea6a  6a00                 push 0
// 007bea6c  6a00                 push 0
// 007bea6e  6a00                 push 0
// 007bea70  56                   push esi
// 007bea71  50                   push eax
// 007bea72  ffd5                 call ebp
// 007bea74  85c0                 test eax, eax
// 007bea76  7408                 je 0x7bea80
// 007bea78  66837c241a20         cmp word ptr [esp + 0x1a], 0x20
// 007bea7e  7409                 je 0x7bea89
// 007bea80  5d                   pop ebp
// 007bea81  5b                   pop ebx
// 007bea82  33c0                 xor eax, eax
// 007bea84  5e                   pop esi
// 007bea85  83c42c               add esp, 0x2c
// 007bea88  c3                   ret 
// 007bea89  8b442410             mov eax, dword ptr [esp + 0x10]
// 007bea8d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 007bea92  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007bea96  03c0                 add eax, eax
// 007bea98  03c0                 add eax, eax
// 007bea9a  57                   push edi
// 007bea9b  8b3dc8a89e00         mov edi, dword ptr [0x9ea8c8]
// 007beaa1  50                   push eax
// 007beaa2  8902                 mov dword ptr [edx], eax
// 007beaa4  ffd7                 call edi
// 007beaa6  8b742450             mov esi, dword ptr [esp + 0x50]
// 007beaaa  83c404               add esp, 4
// 007beaad  8906                 mov dword ptr [esi], eax
// 007beaaf  85c0                 test eax, eax
// 007beab1  0f8494000000         je 0x7beb4b
// 007beab7  6a34                 push 0x34
// 007beab9  ffd7                 call edi
// 007beabb  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 007beabf  83c404               add esp, 4
// 007beac2  8907                 mov dword ptr [edi], eax
// 007beac4  85c0                 test eax, eax
// 007beac6  7520                 jne 0x7beae8
// 007beac8  8b06                 mov eax, dword ptr [esi]
// 007beaca  85c0                 test eax, eax
// 007beacc  7410                 je 0x7beade
// 007beace  50                   push eax
// 007beacf  ff1508aa9e00         call dword ptr [0x9eaa08]
// 007bead5  83c404               add esp, 4
// 007bead8  c70600000000         mov dword ptr [esi], 0
// 007beade  5f                   pop edi
// 007beadf  5d                   pop ebp
// 007beae0  5b                   pop ebx
// 007beae1  33c0                 xor eax, eax
// 007beae3  5e                   pop esi
// 007beae4  83c42c               add esp, 0x2c
// 007beae7  c3                   ret 
// 007beae8  6a28                 push 0x28
// 007beaea  8d4c2414             lea ecx, [esp + 0x14]
// 007beaee  51                   push ecx
// 007beaef  6a28                 push 0x28
// 007beaf1  50                   push eax
// 007beaf2  ff15c4a89e00         call dword ptr [0x9ea8c4]
// 007beaf8  83c410               add esp, 0x10
// 007beafb  85db                 test ebx, ebx
// 007beafd  7504                 jne 0x7beb03
// 007beaff  33c0                 xor eax, eax
// 007beb01  eb03                 jmp 0x7beb06
// 007beb03  8b4304               mov eax, dword ptr [ebx + 4]
// 007beb06  8b17                 mov edx, dword ptr [edi]
// 007beb08  8b0e                 mov ecx, dword ptr [esi]
// 007beb0a  6a00                 push 0
// 007beb0c  52                   push edx
// 007beb0d  8b542420             mov edx, dword ptr [esp + 0x20]
// 007beb11  51                   push ecx
// 007beb12  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007beb16  52                   push edx
// 007beb17  6a00                 push 0
// 007beb19  51                   push ecx
// 007beb1a  50                   push eax
// 007beb1b  ffd5                 call ebp
// 007beb1d  85c0                 test eax, eax
// 007beb1f  7534                 jne 0x7beb55
// 007beb21  8b06                 mov eax, dword ptr [esi]
// 007beb23  8b1d08aa9e00         mov ebx, dword ptr [0x9eaa08]
// 007beb29  85c0                 test eax, eax
// 007beb2b  740c                 je 0x7beb39
// 007beb2d  50                   push eax
// 007beb2e  ffd3                 call ebx
// 007beb30  83c404               add esp, 4
// 007beb33  c70600000000         mov dword ptr [esi], 0
// 007beb39  8b07                 mov eax, dword ptr [edi]
// 007beb3b  85c0                 test eax, eax
// 007beb3d  740c                 je 0x7beb4b
// 007beb3f  50                   push eax
// 007beb40  ffd3                 call ebx
// 007beb42  83c404               add esp, 4
// 007beb45  c70700000000         mov dword ptr [edi], 0
// 007beb4b  5f                   pop edi
// 007beb4c  5d                   pop ebp
// 007beb4d  5b                   pop ebx
// 007beb4e  33c0                 xor eax, eax
// 007beb50  5e                   pop esi
// 007beb51  83c42c               add esp, 0x2c
// 007beb54  c3                   ret 
// 007beb55  5f                   pop edi
// 007beb56  5d                   pop ebp
// 007beb57  5b                   pop ebx
// 007beb58  b801000000           mov eax, 1
// 007beb5d  5e                   pop esi
// 007beb5e  83c42c               add esp, 0x2c
// 007beb61  c3                   ret 
// copied from an identical function in another client (function ?GetBitmapBits@CXTPImageManagerIcon@@SAHAAVCDC@@PAUHBITMAP__@@AAPAUtagBITMAPINFO@@AAPAXAAI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp