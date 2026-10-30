// roc 2011-06 008ee740  unit: CXTColorSelectorCtrl  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ee740
//
// 008ee740  6aff                 push -1
// 008ee742  6859e7a000           push 0xa0e759
// 008ee747  64a100000000         mov eax, dword ptr fs:[0]
// 008ee74d  50                   push eax
// 008ee74e  83ec10               sub esp, 0x10
// 008ee751  53                   push ebx
// 008ee752  55                   push ebp
// 008ee753  56                   push esi
// 008ee754  57                   push edi
// 008ee755  a12058c900           mov eax, dword ptr [0xc95820]
// 008ee75a  33c4                 xor eax, esp
// 008ee75c  50                   push eax
// 008ee75d  8d442424             lea eax, [esp + 0x24]
// 008ee761  64a300000000         mov dword ptr fs:[0], eax
// 008ee767  8bf9                 mov edi, ecx
// 008ee769  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 008ee76d  6a01                 push 1
// 008ee76f  8bcd                 mov ecx, ebp
// 008ee771  e878de0d00           call 0x9cc5ee
// 008ee776  8b7500               mov esi, dword ptr [ebp]
// 008ee779  83c630               add esi, 0x30
// 008ee77c  e86f75f8ff           call 0x875cf0
// 008ee781  05dc000000           add eax, 0xdc
// 008ee786  50                   push eax
// 008ee787  8b06                 mov eax, dword ptr [esi]
// 008ee789  8bcd                 mov ecx, ebp
// 008ee78b  ffd0                 call eax
// 008ee78d  f687a400000002       test byte ptr [edi + 0xa4], 2
// 008ee794  89442420             mov dword ptr [esp + 0x20], eax
// 008ee798  7579                 jne 0x8ee813
// 008ee79a  8d4c2434             lea ecx, [esp + 0x34]
// 008ee79e  ff15b42da400         call dword ptr [0xa42db4]
// 008ee7a4  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008ee7ac  e88f17f9ff           call 0x87ff40
// 008ee7b1  8b10                 mov edx, dword ptr [eax]
// 008ee7b3  8b5208               mov edx, dword ptr [edx + 8]
// 008ee7b6  68d0240000           push 0x24d0
// 008ee7bb  8d4c2438             lea ecx, [esp + 0x38]
// 008ee7bf  51                   push ecx
// 008ee7c0  8bc8                 mov ecx, eax
// 008ee7c2  ffd2                 call edx
// 008ee7c4  8b87a4000000         mov eax, dword ptr [edi + 0xa4]
// 008ee7ca  8b5d00               mov ebx, dword ptr [ebp]
// 008ee7cd  2410                 and al, 0x10
// 008ee7cf  0fb6f0               movzx esi, al
// 008ee7d2  f7de                 neg esi
// 008ee7d4  1bf6                 sbb esi, esi
// 008ee7d6  83e6e5               and esi, 0xffffffe5
// 008ee7d9  8d4c2434             lea ecx, [esp + 0x34]
// 008ee7dd  83c61b               add esi, 0x1b
// 008ee7e0  83c364               add ebx, 0x64
// 008ee7e3  ff15a826a400         call dword ptr [0xa426a8]
// 008ee7e9  50                   push eax
// 008ee7ea  8d4c2438             lea ecx, [esp + 0x38]
// 008ee7ee  ff15c82da400         call dword ptr [0xa42dc8]
// 008ee7f4  8b13                 mov edx, dword ptr [ebx]
// 008ee7f6  50                   push eax
// 008ee7f7  83c604               add esi, 4
// 008ee7fa  56                   push esi
// 008ee7fb  6a06                 push 6
// 008ee7fd  8bcd                 mov ecx, ebp
// 008ee7ff  ffd2                 call edx
// 008ee801  8d4c2434             lea ecx, [esp + 0x34]
// 008ee805  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 008ee80d  ff15082ea400         call dword ptr [0xa42e08]
// 008ee813  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 008ee819  33d2                 xor edx, edx
// 008ee81b  33db                 xor ebx, ebx
// 008ee81d  3bf2                 cmp esi, edx
// 008ee81f  7468                 je 0x8ee889
// 008ee821  eb02                 jmp 0x8ee825
// 008ee823  33d2                 xor edx, edx
// 008ee825  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 008ee828  8b4608               mov eax, dword ptr [esi + 8]
// 008ee82b  8944241c             mov dword ptr [esp + 0x1c], eax
// 008ee82f  3bd9                 cmp ebx, ecx
// 008ee831  7508                 jne 0x8ee83b
// 008ee833  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ee836  83f8ff               cmp eax, -1
// 008ee839  740b                 je 0x8ee846
// 008ee83b  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ee83e  89542418             mov dword ptr [esp + 0x18], edx
// 008ee842  3bd8                 cmp ebx, eax
// 008ee844  7518                 jne 0x8ee85e
// 008ee846  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008ee84e  3bd8                 cmp ebx, eax
// 008ee850  750c                 jne 0x8ee85e
// 008ee852  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008ee85a  3bd9                 cmp ebx, ecx
// 008ee85c  7404                 je 0x8ee862
// 008ee85e  89542414             mov dword ptr [esp + 0x14], edx
// 008ee862  8bcf                 mov ecx, edi
// 008ee864  e8a7390000           call 0x8f2210
// 008ee869  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ee86d  8b10                 mov edx, dword ptr [eax]
// 008ee86f  8b5214               mov edx, dword ptr [edx + 0x14]
// 008ee872  51                   push ecx
// 008ee873  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ee877  51                   push ecx
// 008ee878  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ee87c  55                   push ebp
// 008ee87d  51                   push ecx
// 008ee87e  8bc8                 mov ecx, eax
// 008ee880  ffd2                 call edx
// 008ee882  8b36                 mov esi, dword ptr [esi]
// 008ee884  43                   inc ebx
// 008ee885  85f6                 test esi, esi
// 008ee887  759a                 jne 0x8ee823
// 008ee889  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ee88d  8b4500               mov eax, dword ptr [ebp]
// 008ee890  8b5030               mov edx, dword ptr [eax + 0x30]
// 008ee893  51                   push ecx
// 008ee894  8bcd                 mov ecx, ebp
// 008ee896  ffd2                 call edx
// 008ee898  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008ee89c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ee8a3  59                   pop ecx
// 008ee8a4  5f                   pop edi
// 008ee8a5  5e                   pop esi
// 008ee8a6  5d                   pop ebp
// 008ee8a7  5b                   pop ebx
// 008ee8a8  83c41c               add esp, 0x1c
// 008ee8ab  c20400               ret 4
// copied from an identical function in another client (function ?DrawColorSelector@CXTColorSelectorCtrl@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorSelectorCtrl.cpp