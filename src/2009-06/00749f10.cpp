// roc 2009-06 00749f10  unit: CXTPReportControl  size: 595 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00749f10
//
// 00749f10  6aff                 push -1
// 00749f12  68fc708700           push 0x8770fc
// 00749f17  64a100000000         mov eax, dword ptr fs:[0]
// 00749f1d  50                   push eax
// 00749f1e  83ec3c               sub esp, 0x3c
// 00749f21  53                   push ebx
// 00749f22  55                   push ebp
// 00749f23  56                   push esi
// 00749f24  57                   push edi
// 00749f25  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00749f2a  33c4                 xor eax, esp
// 00749f2c  50                   push eax
// 00749f2d  8d442450             lea eax, [esp + 0x50]
// 00749f31  64a300000000         mov dword ptr fs:[0], eax
// 00749f37  8be9                 mov ebp, ecx
// 00749f39  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 00749f3f  33f6                 xor esi, esi
// 00749f41  3bc6                 cmp eax, esi
// 00749f43  0f846c010000         je 0x74a0b5
// 00749f49  8d4c243c             lea ecx, [esp + 0x3c]
// 00749f4d  e806221000           call 0x84c158
// 00749f52  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00749f56  8d44243c             lea eax, [esp + 0x3c]
// 00749f5a  50                   push eax
// 00749f5b  685c758b00           push 0x8b755c
// 00749f60  51                   push ecx
// 00749f61  89742464             mov dword ptr [esp + 0x64], esi
// 00749f65  e886a4ffff           call 0x7443f0
// 00749f6a  8b5500               mov edx, dword ptr [ebp]
// 00749f6d  8b92fc010000         mov edx, dword ptr [edx + 0x1fc]
// 00749f73  83c40c               add esp, 0xc
// 00749f76  8d442414             lea eax, [esp + 0x14]
// 00749f7a  50                   push eax
// 00749f7b  8d4c2440             lea ecx, [esp + 0x40]
// 00749f7f  51                   push ecx
// 00749f80  8bcd                 mov ecx, ebp
// 00749f82  8974241c             mov dword ptr [esp + 0x1c], esi
// 00749f86  ffd2                 call edx
// 00749f88  3bc6                 cmp eax, esi
// 00749f8a  0f85a1010000         jne 0x74a131
// 00749f90  39742414             cmp dword ptr [esp + 0x14], esi
// 00749f94  0f8597010000         jne 0x74a131
// 00749f9a  6a54                 push 0x54
// 00749f9c  e8ef67ffff           call 0x740790
// 00749fa1  89442460             mov dword ptr [esp + 0x60], eax
// 00749fa5  c644245801           mov byte ptr [esp + 0x58], 1
// 00749faa  3bc6                 cmp eax, esi
// 00749fac  7409                 je 0x749fb7
// 00749fae  8bc8                 mov ecx, eax
// 00749fb0  e84b600000           call 0x750000
// 00749fb5  eb02                 jmp 0x749fb9
// 00749fb7  33c0                 xor eax, eax
// 00749fb9  c644245800           mov byte ptr [esp + 0x58], 0
// 00749fbe  89442414             mov dword ptr [esp + 0x14], eax
// 00749fc2  3bc6                 cmp eax, esi
// 00749fc4  0f84da000000         je 0x74a0a4
// 00749fca  8b85ec000000         mov eax, dword ptr [ebp + 0xec]
// 00749fd0  8b7830               mov edi, dword ptr [eax + 0x30]
// 00749fd3  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00749fd7  895c2460             mov dword ptr [esp + 0x60], ebx
// 00749fdb  85ff                 test edi, edi
// 00749fdd  7e6d                 jle 0x74a04c
// 00749fdf  b302                 mov bl, 2
// 00749fe1  33c0                 xor eax, eax
// 00749fe3  6816d28a00           push 0x8ad216
// 00749fe8  8d4c2420             lea ecx, [esp + 0x20]
// 00749fec  6689442420           mov word ptr [esp + 0x20], ax
// 00749ff1  e832211000           call 0x84c128
// 00749ff6  688c000000           push 0x8c
// 00749ffb  885c245c             mov byte ptr [esp + 0x5c], bl
// 00749fff  e88c67ffff           call 0x740790
// 0074a004  89442418             mov dword ptr [esp + 0x18], eax
// 0074a008  c644245803           mov byte ptr [esp + 0x58], 3
// 0074a00d  85c0                 test eax, eax
// 0074a00f  740e                 je 0x74a01f
// 0074a011  8d4c241c             lea ecx, [esp + 0x1c]
// 0074a015  51                   push ecx
// 0074a016  8bc8                 mov ecx, eax
// 0074a018  e873700000           call 0x751090
// 0074a01d  eb02                 jmp 0x74a021
// 0074a01f  33c0                 xor eax, eax
// 0074a021  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074a025  885c2458             mov byte ptr [esp + 0x58], bl
// 0074a029  85c0                 test eax, eax
// 0074a02b  745b                 je 0x74a088
// 0074a02d  50                   push eax
// 0074a02e  e86d600000           call 0x7500a0
// 0074a033  8d54241c             lea edx, [esp + 0x1c]
// 0074a037  52                   push edx
// 0074a038  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0074a03d  ff1528ea8900         call dword ptr [0x89ea28]
// 0074a043  46                   inc esi
// 0074a044  3bf7                 cmp esi, edi
// 0074a046  7c99                 jl 0x749fe1
// 0074a048  8b5c2460             mov ebx, dword ptr [esp + 0x60]
// 0074a04c  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 0074a052  e889830400           call 0x7923e0
// 0074a057  8bf8                 mov edi, eax
// 0074a059  33f6                 xor esi, esi
// 0074a05b  85ff                 test edi, edi
// 0074a05d  0f8ece000000         jle 0x74a131
// 0074a063  3bf3                 cmp esi, ebx
// 0074a065  7d55                 jge 0x74a0bc
// 0074a067  85f6                 test esi, esi
// 0074a069  0f8cef000000         jl 0x74a15e
// 0074a06f  3b742444             cmp esi, dword ptr [esp + 0x44]
// 0074a073  0f8de5000000         jge 0x74a15e
// 0074a079  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0074a07d  8d0cb1               lea ecx, [ecx + esi*4]
// 0074a080  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0074a086  eb39                 jmp 0x74a0c1
// 0074a088  85c9                 test ecx, ecx
// 0074a08a  740d                 je 0x74a099
// 0074a08c  e817effcff           call 0x718fa8
// 0074a091  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0074a099  8d44241c             lea eax, [esp + 0x1c]
// 0074a09d  50                   push eax
// 0074a09e  ff1528ea8900         call dword ptr [0x89ea28]
// 0074a0a4  8d4c243c             lea ecx, [esp + 0x3c]
// 0074a0a8  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0074a0b0  e89d201000           call 0x84c152
// 0074a0b5  33c0                 xor eax, eax
// 0074a0b7  e98c000000           jmp 0x74a148
// 0074a0bc  b816d28a00           mov eax, 0x8ad216
// 0074a0c1  33d2                 xor edx, edx
// 0074a0c3  50                   push eax
// 0074a0c4  8d4c2430             lea ecx, [esp + 0x30]
// 0074a0c8  6689542430           mov word ptr [esp + 0x30], dx
// 0074a0cd  e856201000           call 0x84c128
// 0074a0d2  8b8dec000000         mov ecx, dword ptr [ebp + 0xec]
// 0074a0d8  56                   push esi
// 0074a0d9  c644245c04           mov byte ptr [esp + 0x5c], 4
// 0074a0de  e8fd830400           call 0x7924e0
// 0074a0e3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0074a0e7  50                   push eax
// 0074a0e8  e8835e0000           call 0x74ff70
// 0074a0ed  85c0                 test eax, eax
// 0074a0ef  7507                 jne 0x74a0f8
// 0074a0f1  8d44242c             lea eax, [esp + 0x2c]
// 0074a0f5  50                   push eax
// 0074a0f6  eb25                 jmp 0x74a11d
// 0074a0f8  50                   push eax
// 0074a0f9  e842690000           call 0x750a40
// 0074a0fe  50                   push eax
// 0074a0ff  e8c2eefcff           call 0x718fc6
// 0074a104  83c408               add esp, 8
// 0074a107  85c0                 test eax, eax
// 0074a109  740d                 je 0x74a118
// 0074a10b  8d4c242c             lea ecx, [esp + 0x2c]
// 0074a10f  51                   push ecx
// 0074a110  8d487c               lea ecx, [eax + 0x7c]
// 0074a113  e84c201000           call 0x84c164
// 0074a118  8d54242c             lea edx, [esp + 0x2c]
// 0074a11c  52                   push edx
// 0074a11d  c644245c00           mov byte ptr [esp + 0x5c], 0
// 0074a122  ff1528ea8900         call dword ptr [0x89ea28]
// 0074a128  46                   inc esi
// 0074a129  3bf7                 cmp esi, edi
// 0074a12b  0f8c32ffffff         jl 0x74a063
// 0074a131  8b742414             mov esi, dword ptr [esp + 0x14]
// 0074a135  8d4c243c             lea ecx, [esp + 0x3c]
// 0074a139  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0074a141  e80c201000           call 0x84c152
// 0074a146  8bc6                 mov eax, esi
// 0074a148  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0074a14c  64890d00000000       mov dword ptr fs:[0], ecx
// 0074a153  59                   pop ecx
// 0074a154  5f                   pop edi
// 0074a155  5e                   pop esi
// 0074a156  5d                   pop ebp
// 0074a157  5b                   pop ebx
// 0074a158  83c448               add esp, 0x48
// 0074a15b  c20400               ret 4
// 0074a15e  e881ebfcff           call 0x718ce4
// copied from an identical function in another client (function ?_CreateRecodFromText@CXTPReportControl@@MAEPAVCXTPReportRecord@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp