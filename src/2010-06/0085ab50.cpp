// roc 2010-06 0085ab50  unit: CXTPReportNavigator  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085ab50
//
// 0085ab50  6aff                 push -1
// 0085ab52  68a1869b00           push 0x9b86a1
// 0085ab57  64a100000000         mov eax, dword ptr fs:[0]
// 0085ab5d  50                   push eax
// 0085ab5e  83ec28               sub esp, 0x28
// 0085ab61  56                   push esi
// 0085ab62  57                   push edi
// 0085ab63  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085ab68  33c4                 xor eax, esp
// 0085ab6a  50                   push eax
// 0085ab6b  8d442434             lea eax, [esp + 0x34]
// 0085ab6f  64a300000000         mov dword ptr fs:[0], eax
// 0085ab75  8bf1                 mov esi, ecx
// 0085ab77  837e2000             cmp dword ptr [esi + 0x20], 0
// 0085ab7b  0f84a2010000         je 0x85ad23
// 0085ab81  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ab84  8b01                 mov eax, dword ptr [ecx]
// 0085ab86  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0085ab8c  ffd2                 call edx
// 0085ab8e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ab91  e84a89f7ff           call 0x7d34e0
// 0085ab96  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085ab99  8b4020               mov eax, dword ptr [eax + 0x20]
// 0085ab9c  50                   push eax
// 0085ab9d  ff15d8ba9e00         call dword ptr [0x9ebad8]
// 0085aba3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085aba6  e8157af7ff           call 0x7d25c0
// 0085abab  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085abae  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 0085abb5  8bf8                 mov edi, eax
// 0085abb7  0f8466010000         je 0x85ad23
// 0085abbd  85ff                 test edi, edi
// 0085abbf  0f845e010000         je 0x85ad23
// 0085abc5  8b17                 mov edx, dword ptr [edi]
// 0085abc7  8b4260               mov eax, dword ptr [edx + 0x60]
// 0085abca  8bcf                 mov ecx, edi
// 0085abcc  ffd0                 call eax
// 0085abce  85c0                 test eax, eax
// 0085abd0  0f844d010000         je 0x85ad23
// 0085abd6  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085abd9  8b8818020000         mov ecx, dword ptr [eax + 0x218]
// 0085abdf  51                   push ecx
// 0085abe0  57                   push edi
// 0085abe1  50                   push eax
// 0085abe2  8d4c241c             lea ecx, [esp + 0x1c]
// 0085abe6  e8753bf7ff           call 0x7ce760
// 0085abeb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085abef  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0085abf7  85c9                 test ecx, ecx
// 0085abf9  0f8413010000         je 0x85ad12
// 0085abff  8b11                 mov edx, dword ptr [ecx]
// 0085ac01  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 0085ac07  8d442410             lea eax, [esp + 0x10]
// 0085ac0b  50                   push eax
// 0085ac0c  ffd2                 call edx
// 0085ac0e  85c0                 test eax, eax
// 0085ac10  0f84fc000000         je 0x85ad12
// 0085ac16  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ac19  e88279f7ff           call 0x7d25a0
// 0085ac1e  85c0                 test eax, eax
// 0085ac20  7509                 jne 0x85ac2b
// 0085ac22  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ac25  57                   push edi
// 0085ac26  e8c58ff7ff           call 0x7d3bf0
// 0085ac2b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ac2e  8d442410             lea eax, [esp + 0x10]
// 0085ac32  50                   push eax
// 0085ac33  e868dff7ff           call 0x7d8ba0
// 0085ac38  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ac3b  8b8124020000         mov eax, dword ptr [ecx + 0x224]
// 0085ac41  85c0                 test eax, eax
// 0085ac43  0f84c9000000         je 0x85ad12
// 0085ac49  83782000             cmp dword ptr [eax + 0x20], 0
// 0085ac4d  0f84bf000000         je 0x85ad12
// 0085ac53  8b4064               mov eax, dword ptr [eax + 0x64]
// 0085ac56  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085ac5a  3bc1                 cmp eax, ecx
// 0085ac5c  0f85b0000000         jne 0x85ad12
// 0085ac62  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0085ac66  52                   push edx
// 0085ac67  e8f448f7ff           call 0x7cf560
// 0085ac6c  85c0                 test eax, eax
// 0085ac6e  7435                 je 0x85aca5
// 0085ac70  83784000             cmp dword ptr [eax + 0x40], 0
// 0085ac74  742f                 je 0x85aca5
// 0085ac76  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085ac79  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 0085ac7f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ac82  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 0085ac88  6aff                 push -1
// 0085ac8a  6a00                 push 0
// 0085ac8c  68b1000000           push 0xb1
// 0085ac91  51                   push ecx
// 0085ac92  ffd7                 call edi
// 0085ac94  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085ac97  6a00                 push 0
// 0085ac99  6a00                 push 0
// 0085ac9b  68b7000000           push 0xb7
// 0085aca0  52                   push edx
// 0085aca1  ffd7                 call edi
// 0085aca3  eb6d                 jmp 0x85ad12
// 0085aca5  8d4c240c             lea ecx, [esp + 0xc]
// 0085aca9  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0085acaf  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085acb2  8b8824020000         mov ecx, dword ptr [eax + 0x224]
// 0085acb8  8d54240c             lea edx, [esp + 0xc]
// 0085acbc  52                   push edx
// 0085acbd  c644244001           mov byte ptr [esp + 0x40], 1
// 0085acc2  e8c1d2f4ff           call 0x7a7f88
// 0085acc7  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085acca  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 0085acd0  8d4c240c             lea ecx, [esp + 0xc]
// 0085acd4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085acda  8d4c240c             lea ecx, [esp + 0xc]
// 0085acde  8bf8                 mov edi, eax
// 0085ace0  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085ace6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085ace9  57                   push edi
// 0085acea  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 0085acf0  50                   push eax
// 0085acf1  68b1000000           push 0xb1
// 0085acf6  51                   push ecx
// 0085acf7  ffd7                 call edi
// 0085acf9  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085acfc  6a00                 push 0
// 0085acfe  6a00                 push 0
// 0085ad00  68b7000000           push 0xb7
// 0085ad05  52                   push edx
// 0085ad06  ffd7                 call edi
// 0085ad08  8d4c240c             lea ecx, [esp + 0xc]
// 0085ad0c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085ad12  8d4c2410             lea ecx, [esp + 0x10]
// 0085ad16  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 0085ad1e  e83d34f7ff           call 0x7ce160
// 0085ad23  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0085ad27  64890d00000000       mov dword ptr fs:[0], ecx
// 0085ad2e  59                   pop ecx
// 0085ad2f  5f                   pop edi
// 0085ad30  5e                   pop esi
// 0085ad31  83c434               add esp, 0x34
// 0085ad34  c3                   ret 
// copied from an identical function in another client (function ?BeginEdit@CXTPReportNavigator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportNavigator.cpp