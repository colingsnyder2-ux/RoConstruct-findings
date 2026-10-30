// roc 2010-06 0085ba20  unit: CXTRegistryManager  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085ba20
//
// 0085ba20  55                   push ebp
// 0085ba21  8b6c2408             mov ebp, dword ptr [esp + 8]
// 0085ba25  56                   push esi
// 0085ba26  8bf1                 mov esi, ecx
// 0085ba28  85ed                 test ebp, ebp
// 0085ba2a  7507                 jne 0x85ba33
// 0085ba2c  5e                   pop esi
// 0085ba2d  33c0                 xor eax, eax
// 0085ba2f  5d                   pop ebp
// 0085ba30  c20c00               ret 0xc
// 0085ba33  b94c62c200           mov ecx, 0xc2624c
// 0085ba38  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0085ba3e  84c0                 test al, al
// 0085ba40  0f84a8000000         je 0x85baee
// 0085ba46  8bce                 mov ecx, esi
// 0085ba48  e873feffff           call 0x85b8c0
// 0085ba4d  85c0                 test eax, eax
// 0085ba4f  74db                 je 0x85ba2c
// 0085ba51  837c241000           cmp dword ptr [esp + 0x10], 0
// 0085ba56  53                   push ebx
// 0085ba57  57                   push edi
// 0085ba58  8bce                 mov ecx, esi
// 0085ba5a  752e                 jne 0x85ba8a
// 0085ba5c  8b06                 mov eax, dword ptr [esi]
// 0085ba5e  8b5004               mov edx, dword ptr [eax + 4]
// 0085ba61  6a00                 push 0
// 0085ba63  ffd2                 call edx
// 0085ba65  8bf8                 mov edi, eax
// 0085ba67  85ff                 test edi, edi
// 0085ba69  7416                 je 0x85ba81
// 0085ba6b  55                   push ebp
// 0085ba6c  57                   push edi
// 0085ba6d  ff1508a09e00         call dword ptr [0x9ea008]
// 0085ba73  57                   push edi
// 0085ba74  894610               mov dword ptr [esi + 0x10], eax
// 0085ba77  85c0                 test eax, eax
// 0085ba79  7461                 je 0x85badc
// 0085ba7b  ff1510a09e00         call dword ptr [0x9ea010]
// 0085ba81  5f                   pop edi
// 0085ba82  5b                   pop ebx
// 0085ba83  5e                   pop esi
// 0085ba84  33c0                 xor eax, eax
// 0085ba86  5d                   pop ebp
// 0085ba87  c20c00               ret 0xc
// 0085ba8a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0085ba8e  681f000200           push 0x2001f
// 0085ba93  55                   push ebp
// 0085ba94  85db                 test ebx, ebx
// 0085ba96  751b                 jne 0x85bab3
// 0085ba98  8b06                 mov eax, dword ptr [esi]
// 0085ba9a  8b5008               mov edx, dword ptr [eax + 8]
// 0085ba9d  ffd2                 call edx
// 0085ba9f  8bf8                 mov edi, eax
// 0085baa1  85ff                 test edi, edi
// 0085baa3  74dc                 je 0x85ba81
// 0085baa5  8b442418             mov eax, dword ptr [esp + 0x18]
// 0085baa9  50                   push eax
// 0085baaa  57                   push edi
// 0085baab  ff150ca09e00         call dword ptr [0x9ea00c]
// 0085bab1  ebc0                 jmp 0x85ba73
// 0085bab3  8b16                 mov edx, dword ptr [esi]
// 0085bab5  8b4208               mov eax, dword ptr [edx + 8]
// 0085bab8  ffd0                 call eax
// 0085baba  8bf8                 mov edi, eax
// 0085babc  85ff                 test edi, edi
// 0085babe  74c1                 je 0x85ba81
// 0085bac0  53                   push ebx
// 0085bac1  ff1588a39e00         call dword ptr [0x9ea388]
// 0085bac7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085bacb  40                   inc eax
// 0085bacc  50                   push eax
// 0085bacd  53                   push ebx
// 0085bace  6a01                 push 1
// 0085bad0  6a00                 push 0
// 0085bad2  51                   push ecx
// 0085bad3  57                   push edi
// 0085bad4  ff151ca09e00         call dword ptr [0x9ea01c]
// 0085bada  eb97                 jmp 0x85ba73
// 0085badc  ff1510a09e00         call dword ptr [0x9ea010]
// 0085bae2  5f                   pop edi
// 0085bae3  5b                   pop ebx
// 0085bae4  5e                   pop esi
// 0085bae5  b801000000           mov eax, 1
// 0085baea  5d                   pop ebp
// 0085baeb  c20c00               ret 0xc
// 0085baee  b94c62c200           mov ecx, 0xc2624c
// 0085baf3  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0085baf9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0085bafd  50                   push eax
// 0085bafe  8b442414             mov eax, dword ptr [esp + 0x14]
// 0085bb02  52                   push edx
// 0085bb03  50                   push eax
// 0085bb04  55                   push ebp
// 0085bb05  ff1560a29e00         call dword ptr [0x9ea260]
// 0085bb0b  5e                   pop esi
// 0085bb0c  5d                   pop ebp
// 0085bb0d  c20c00               ret 0xc
// copied from an identical function in another client (function ?WriteProfileStringA@CXTRegistryManager@@QAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp