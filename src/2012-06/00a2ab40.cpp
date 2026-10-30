// roc 2012-06 00a2ab40  unit: CXTPReportPaintManager  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2ab40
//
// 00a2ab40  6aff                 push -1
// 00a2ab42  68024eae00           push 0xae4e02
// 00a2ab47  64a100000000         mov eax, dword ptr fs:[0]
// 00a2ab4d  50                   push eax
// 00a2ab4e  83ec4c               sub esp, 0x4c
// 00a2ab51  53                   push ebx
// 00a2ab52  55                   push ebp
// 00a2ab53  56                   push esi
// 00a2ab54  57                   push edi
// 00a2ab55  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2ab5a  33c4                 xor eax, esp
// 00a2ab5c  50                   push eax
// 00a2ab5d  8d442460             lea eax, [esp + 0x60]
// 00a2ab61  64a300000000         mov dword ptr fs:[0], eax
// 00a2ab67  8bf1                 mov esi, ecx
// 00a2ab69  33ed                 xor ebp, ebp
// 00a2ab6b  396e54               cmp dword ptr [esi + 0x54], ebp
// 00a2ab6e  7516                 jne 0xa2ab86
// 00a2ab70  33c0                 xor eax, eax
// 00a2ab72  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a2ab76  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2ab7d  59                   pop ecx
// 00a2ab7e  5f                   pop edi
// 00a2ab7f  5e                   pop esi
// 00a2ab80  5d                   pop ebp
// 00a2ab81  5b                   pop ebx
// 00a2ab82  83c458               add esp, 0x58
// 00a2ab85  c3                   ret 
// 00a2ab86  396e20               cmp dword ptr [esi + 0x20], ebp
// 00a2ab89  74e5                 je 0xa2ab70
// 00a2ab8b  56                   push esi
// 00a2ab8c  8d4c2450             lea ecx, [esp + 0x50]
// 00a2ab90  e80784f5ff           call 0x982f9c
// 00a2ab95  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a2ab98  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00a2ab9e  83c030               add eax, 0x30
// 00a2aba1  50                   push eax
// 00a2aba2  8d4c2450             lea ecx, [esp + 0x50]
// 00a2aba6  51                   push ecx
// 00a2aba7  8d4c2444             lea ecx, [esp + 0x44]
// 00a2abab  896c2470             mov dword ptr [esp + 0x70], ebp
// 00a2abaf  e87ca9faff           call 0x9d5530
// 00a2abb4  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a2abb8  8d542434             lea edx, [esp + 0x34]
// 00a2abbc  52                   push edx
// 00a2abbd  6a01                 push 1
// 00a2abbf  68ecf3b400           push 0xb4f3ec
// 00a2abc4  50                   push eax
// 00a2abc5  c644247801           mov byte ptr [esp + 0x78], 1
// 00a2abca  ff154021b200         call dword ptr [0xb22140]
// 00a2abd0  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2abd3  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a2abd7  8b1d043cb200         mov ebx, dword ptr [0xb23c04]
// 00a2abdd  55                   push ebp
// 00a2abde  55                   push ebp
// 00a2abdf  68a1010000           push 0x1a1
// 00a2abe4  51                   push ecx
// 00a2abe5  83c705               add edi, 5
// 00a2abe8  ffd3                 call ebx
// 00a2abea  3bc7                 cmp eax, edi
// 00a2abec  7410                 je 0xa2abfe
// 00a2abee  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2abf1  0fb7d7               movzx edx, di
// 00a2abf4  52                   push edx
// 00a2abf5  55                   push ebp
// 00a2abf6  68a0010000           push 0x1a0
// 00a2abfb  50                   push eax
// 00a2abfc  ffd3                 call ebx
// 00a2abfe  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a2ac01  8bb9ec000000         mov edi, dword ptr [ecx + 0xec]
// 00a2ac07  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2ac0a  8b5730               mov edx, dword ptr [edi + 0x30]
// 00a2ac0d  55                   push ebp
// 00a2ac0e  55                   push ebp
// 00a2ac0f  688b010000           push 0x18b
// 00a2ac14  50                   push eax
// 00a2ac15  897c242c             mov dword ptr [esp + 0x2c], edi
// 00a2ac19  89542438             mov dword ptr [esp + 0x38], edx
// 00a2ac1d  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a2ac21  ffd3                 call ebx
// 00a2ac23  8be8                 mov ebp, eax
// 00a2ac25  83ed01               sub ebp, 1
// 00a2ac28  7857                 js 0xa2ac81
// 00a2ac2a  8d9b00000000         lea ebx, [ebx]
// 00a2ac30  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2ac33  6a00                 push 0
// 00a2ac35  55                   push ebp
// 00a2ac36  6899010000           push 0x199
// 00a2ac3b  51                   push ecx
// 00a2ac3c  ffd3                 call ebx
// 00a2ac3e  50                   push eax
// 00a2ac3f  8bcf                 mov ecx, edi
// 00a2ac41  e84ab2fcff           call 0x9f5e90
// 00a2ac46  8bf8                 mov edi, eax
// 00a2ac48  85ff                 test edi, edi
// 00a2ac4a  7416                 je 0xa2ac62
// 00a2ac4c  8bcf                 mov ecx, edi
// 00a2ac4e  e8dd270100           call 0xa3d430
// 00a2ac53  85c0                 test eax, eax
// 00a2ac55  750b                 jne 0xa2ac62
// 00a2ac57  8bcf                 mov ecx, edi
// 00a2ac59  e8f25dc6ff           call 0x690a50
// 00a2ac5e  85c0                 test eax, eax
// 00a2ac60  7516                 jne 0xa2ac78
// 00a2ac62  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2ac65  6a00                 push 0
// 00a2ac67  55                   push ebp
// 00a2ac68  6882010000           push 0x182
// 00a2ac6d  52                   push edx
// 00a2ac6e  ffd3                 call ebx
// 00a2ac70  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00a2ac78  83ed01               sub ebp, 1
// 00a2ac7b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a2ac7f  79af                 jns 0xa2ac30
// 00a2ac81  33c0                 xor eax, eax
// 00a2ac83  39442428             cmp dword ptr [esp + 0x28], eax
// 00a2ac87  89442418             mov dword ptr [esp + 0x18], eax
// 00a2ac8b  0f8e74010000         jle 0xa2ae05
// 00a2ac91  85c0                 test eax, eax
// 00a2ac93  0f8c5d010000         jl 0xa2adf6
// 00a2ac99  3b4730               cmp eax, dword ptr [edi + 0x30]
// 00a2ac9c  0f8d54010000         jge 0xa2adf6
// 00a2aca2  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00a2aca5  8b2c81               mov ebp, dword ptr [ecx + eax*4]
// 00a2aca8  8d0c81               lea ecx, [ecx + eax*4]
// 00a2acab  85ed                 test ebp, ebp
// 00a2acad  0f8443010000         je 0xa2adf6
// 00a2acb3  8bcd                 mov ecx, ebp
// 00a2acb5  e876270100           call 0xa3d430
// 00a2acba  85c0                 test eax, eax
// 00a2acbc  0f8530010000         jne 0xa2adf2
// 00a2acc2  8bcd                 mov ecx, ebp
// 00a2acc4  e8875dc6ff           call 0x690a50
// 00a2acc9  85c0                 test eax, eax
// 00a2accb  0f8421010000         je 0xa2adf2
// 00a2acd1  8bcd                 mov ecx, ebp
// 00a2acd3  e848cdf6ff           call 0x997a20
// 00a2acd8  50                   push eax
// 00a2acd9  8bce                 mov ecx, esi
// 00a2acdb  e810feffff           call 0xa2aaf0
// 00a2ace0  85c0                 test eax, eax
// 00a2ace2  0f8d0a010000         jge 0xa2adf2
// 00a2ace8  83be9000000000       cmp dword ptr [esi + 0x90], 0
// 00a2acef  0f84ab000000         je 0xa2ada0
// 00a2acf5  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2acf8  33ff                 xor edi, edi
// 00a2acfa  57                   push edi
// 00a2acfb  57                   push edi
// 00a2acfc  688b010000           push 0x18b
// 00a2ad01  52                   push edx
// 00a2ad02  ffd3                 call ebx
// 00a2ad04  85c0                 test eax, eax
// 00a2ad06  7e71                 jle 0xa2ad79
// 00a2ad08  57                   push edi
// 00a2ad09  8d442424             lea eax, [esp + 0x24]
// 00a2ad0d  50                   push eax
// 00a2ad0e  8bce                 mov ecx, esi
// 00a2ad10  e8bbfcffff           call 0xa2a9d0
// 00a2ad15  8d4c242c             lea ecx, [esp + 0x2c]
// 00a2ad19  51                   push ecx
// 00a2ad1a  8bcd                 mov ecx, ebp
// 00a2ad1c  c644246c02           mov byte ptr [esp + 0x6c], 2
// 00a2ad21  e8da94f8ff           call 0x9b4200
// 00a2ad26  8bc8                 mov ecx, eax
// 00a2ad28  c644246803           mov byte ptr [esp + 0x68], 3
// 00a2ad2d  ff159847b200         call dword ptr [0xb24798]
// 00a2ad33  50                   push eax
// 00a2ad34  8d4c2424             lea ecx, [esp + 0x24]
// 00a2ad38  ff159c47b200         call dword ptr [0xb2479c]
// 00a2ad3e  85c0                 test eax, eax
// 00a2ad40  8d4c242c             lea ecx, [esp + 0x2c]
// 00a2ad44  0f9f442417           setg byte ptr [esp + 0x17]
// 00a2ad49  ff15d047b200         call dword ptr [0xb247d0]
// 00a2ad4f  8d4c2420             lea ecx, [esp + 0x20]
// 00a2ad53  c644246801           mov byte ptr [esp + 0x68], 1
// 00a2ad58  ff15d047b200         call dword ptr [0xb247d0]
// 00a2ad5e  807c241700           cmp byte ptr [esp + 0x17], 0
// 00a2ad63  7514                 jne 0xa2ad79
// 00a2ad65  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2ad68  6a00                 push 0
// 00a2ad6a  6a00                 push 0
// 00a2ad6c  688b010000           push 0x18b
// 00a2ad71  52                   push edx
// 00a2ad72  47                   inc edi
// 00a2ad73  ffd3                 call ebx
// 00a2ad75  3bf8                 cmp edi, eax
// 00a2ad77  7c8f                 jl 0xa2ad08
// 00a2ad79  8d442430             lea eax, [esp + 0x30]
// 00a2ad7d  50                   push eax
// 00a2ad7e  8bcd                 mov ecx, ebp
// 00a2ad80  e87b94f8ff           call 0x9b4200
// 00a2ad85  8bc8                 mov ecx, eax
// 00a2ad87  ff159847b200         call dword ptr [0xb24798]
// 00a2ad8d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2ad90  50                   push eax
// 00a2ad91  57                   push edi
// 00a2ad92  6881010000           push 0x181
// 00a2ad97  51                   push ecx
// 00a2ad98  ffd3                 call ebx
// 00a2ad9a  8d4c2430             lea ecx, [esp + 0x30]
// 00a2ad9e  eb26                 jmp 0xa2adc6
// 00a2ada0  8d542434             lea edx, [esp + 0x34]
// 00a2ada4  52                   push edx
// 00a2ada5  8bcd                 mov ecx, ebp
// 00a2ada7  e85494f8ff           call 0x9b4200
// 00a2adac  8bc8                 mov ecx, eax
// 00a2adae  ff159847b200         call dword ptr [0xb24798]
// 00a2adb4  50                   push eax
// 00a2adb5  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2adb8  6a00                 push 0
// 00a2adba  6880010000           push 0x180
// 00a2adbf  50                   push eax
// 00a2adc0  ffd3                 call ebx
// 00a2adc2  8d4c2434             lea ecx, [esp + 0x34]
// 00a2adc6  8bf8                 mov edi, eax
// 00a2adc8  ff15d047b200         call dword ptr [0xb247d0]
// 00a2adce  85ff                 test edi, edi
// 00a2add0  7c1c                 jl 0xa2adee
// 00a2add2  8bcd                 mov ecx, ebp
// 00a2add4  e847ccf6ff           call 0x997a20
// 00a2add9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2addc  50                   push eax
// 00a2addd  57                   push edi
// 00a2adde  689a010000           push 0x19a
// 00a2ade3  51                   push ecx
// 00a2ade4  ffd3                 call ebx
// 00a2ade6  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00a2adee  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a2adf2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a2adf6  40                   inc eax
// 00a2adf7  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00a2adfb  89442418             mov dword ptr [esp + 0x18], eax
// 00a2adff  0f8c8cfeffff         jl 0xa2ac91
// 00a2ae05  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2ae08  6a00                 push 0
// 00a2ae0a  6a00                 push 0
// 00a2ae0c  688b010000           push 0x18b
// 00a2ae11  52                   push edx
// 00a2ae12  ffd3                 call ebx
// 00a2ae14  33c9                 xor ecx, ecx
// 00a2ae16  85c0                 test eax, eax
// 00a2ae18  0f9fc1               setg cl
// 00a2ae1b  51                   push ecx
// 00a2ae1c  8bce                 mov ecx, esi
// 00a2ae1e  e83979f5ff           call 0x98275c
// 00a2ae23  837c242400           cmp dword ptr [esp + 0x24], 0
// 00a2ae28  740e                 je 0xa2ae38
// 00a2ae2a  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2ae2d  6a01                 push 1
// 00a2ae2f  6a00                 push 0
// 00a2ae31  52                   push edx
// 00a2ae32  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a2ae38  8d4c243c             lea ecx, [esp + 0x3c]
// 00a2ae3c  c644246800           mov byte ptr [esp + 0x68], 0
// 00a2ae41  e86aa7faff           call 0x9d55b0
// 00a2ae46  8d4c244c             lea ecx, [esp + 0x4c]
// 00a2ae4a  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00a2ae52  e83f81f5ff           call 0x982f96
// 00a2ae57  b801000000           mov eax, 1
// 00a2ae5c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a2ae60  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2ae67  59                   pop ecx
// 00a2ae68  5f                   pop edi
// 00a2ae69  5e                   pop esi
// 00a2ae6a  5d                   pop ebp
// 00a2ae6b  5b                   pop ebx
// 00a2ae6c  83c458               add esp, 0x58
// 00a2ae6f  c3                   ret 
// copied from an identical function in another client (function ?UpdateList@CXTPReportSubListControl@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportSubListControl.cpp