// roc 2010-06 00895b90  unit: CXTColorSelectorCtrl  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00895b90
//
// 00895b90  6aff                 push -1
// 00895b92  6809bc9b00           push 0x9bbc09
// 00895b97  64a100000000         mov eax, dword ptr fs:[0]
// 00895b9d  50                   push eax
// 00895b9e  83ec10               sub esp, 0x10
// 00895ba1  53                   push ebx
// 00895ba2  55                   push ebp
// 00895ba3  56                   push esi
// 00895ba4  57                   push edi
// 00895ba5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00895baa  33c4                 xor eax, esp
// 00895bac  50                   push eax
// 00895bad  8d442424             lea eax, [esp + 0x24]
// 00895bb1  64a300000000         mov dword ptr fs:[0], eax
// 00895bb7  8bf9                 mov edi, ecx
// 00895bb9  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00895bbd  6a01                 push 1
// 00895bbf  8bcd                 mov ecx, ebp
// 00895bc1  e8ee710e00           call 0x97cdb4
// 00895bc6  8b7500               mov esi, dword ptr [ebp]
// 00895bc9  83c630               add esi, 0x30
// 00895bcc  e8ef28f8ff           call 0x8184c0
// 00895bd1  05dc000000           add eax, 0xdc
// 00895bd6  50                   push eax
// 00895bd7  8b06                 mov eax, dword ptr [esi]
// 00895bd9  8bcd                 mov ecx, ebp
// 00895bdb  ffd0                 call eax
// 00895bdd  f687a400000002       test byte ptr [edi + 0xa4], 2
// 00895be4  89442420             mov dword ptr [esp + 0x20], eax
// 00895be8  7579                 jne 0x895c63
// 00895bea  8d4c2434             lea ecx, [esp + 0x34]
// 00895bee  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00895bf4  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00895bfc  e8afccf8ff           call 0x8228b0
// 00895c01  8b10                 mov edx, dword ptr [eax]
// 00895c03  8b5208               mov edx, dword ptr [edx + 8]
// 00895c06  68d0240000           push 0x24d0
// 00895c0b  8d4c2438             lea ecx, [esp + 0x38]
// 00895c0f  51                   push ecx
// 00895c10  8bc8                 mov ecx, eax
// 00895c12  ffd2                 call edx
// 00895c14  8b87a4000000         mov eax, dword ptr [edi + 0xa4]
// 00895c1a  8b5d00               mov ebx, dword ptr [ebp]
// 00895c1d  2410                 and al, 0x10
// 00895c1f  0fb6f0               movzx esi, al
// 00895c22  f7de                 neg esi
// 00895c24  1bf6                 sbb esi, esi
// 00895c26  83e6e5               and esi, 0xffffffe5
// 00895c29  8d4c2434             lea ecx, [esp + 0x34]
// 00895c2d  83c61b               add esi, 0x1b
// 00895c30  83c364               add ebx, 0x64
// 00895c33  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00895c39  50                   push eax
// 00895c3a  8d4c2438             lea ecx, [esp + 0x38]
// 00895c3e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00895c44  8b13                 mov edx, dword ptr [ebx]
// 00895c46  50                   push eax
// 00895c47  83c604               add esi, 4
// 00895c4a  56                   push esi
// 00895c4b  6a06                 push 6
// 00895c4d  8bcd                 mov ecx, ebp
// 00895c4f  ffd2                 call edx
// 00895c51  8d4c2434             lea ecx, [esp + 0x34]
// 00895c55  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00895c5d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00895c63  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 00895c69  33d2                 xor edx, edx
// 00895c6b  33db                 xor ebx, ebx
// 00895c6d  3bf2                 cmp esi, edx
// 00895c6f  7468                 je 0x895cd9
// 00895c71  eb02                 jmp 0x895c75
// 00895c73  33d2                 xor edx, edx
// 00895c75  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00895c78  8b4608               mov eax, dword ptr [esi + 8]
// 00895c7b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00895c7f  3bd9                 cmp ebx, ecx
// 00895c81  7508                 jne 0x895c8b
// 00895c83  8b4774               mov eax, dword ptr [edi + 0x74]
// 00895c86  83f8ff               cmp eax, -1
// 00895c89  740b                 je 0x895c96
// 00895c8b  8b4774               mov eax, dword ptr [edi + 0x74]
// 00895c8e  89542418             mov dword ptr [esp + 0x18], edx
// 00895c92  3bd8                 cmp ebx, eax
// 00895c94  7518                 jne 0x895cae
// 00895c96  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00895c9e  3bd8                 cmp ebx, eax
// 00895ca0  750c                 jne 0x895cae
// 00895ca2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00895caa  3bd9                 cmp ebx, ecx
// 00895cac  7404                 je 0x895cb2
// 00895cae  89542414             mov dword ptr [esp + 0x14], edx
// 00895cb2  8bcf                 mov ecx, edi
// 00895cb4  e8a7b1f8ff           call 0x820e60
// 00895cb9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00895cbd  8b10                 mov edx, dword ptr [eax]
// 00895cbf  8b5214               mov edx, dword ptr [edx + 0x14]
// 00895cc2  51                   push ecx
// 00895cc3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00895cc7  51                   push ecx
// 00895cc8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00895ccc  55                   push ebp
// 00895ccd  51                   push ecx
// 00895cce  8bc8                 mov ecx, eax
// 00895cd0  ffd2                 call edx
// 00895cd2  8b36                 mov esi, dword ptr [esi]
// 00895cd4  43                   inc ebx
// 00895cd5  85f6                 test esi, esi
// 00895cd7  759a                 jne 0x895c73
// 00895cd9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00895cdd  8b4500               mov eax, dword ptr [ebp]
// 00895ce0  8b5030               mov edx, dword ptr [eax + 0x30]
// 00895ce3  51                   push ecx
// 00895ce4  8bcd                 mov ecx, ebp
// 00895ce6  ffd2                 call edx
// 00895ce8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00895cec  64890d00000000       mov dword ptr fs:[0], ecx
// 00895cf3  59                   pop ecx
// 00895cf4  5f                   pop edi
// 00895cf5  5e                   pop esi
// 00895cf6  5d                   pop ebp
// 00895cf7  5b                   pop ebx
// 00895cf8  83c41c               add esp, 0x1c
// 00895cfb  c20400               ret 4
// copied from an identical function in another client (function ?DrawColorSelector@CXTColorSelectorCtrl@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorSelectorCtrl.cpp