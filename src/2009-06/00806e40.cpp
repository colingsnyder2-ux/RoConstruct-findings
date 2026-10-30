// roc 2009-06 00806e40  unit: CXTColorSelectorCtrl  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00806e40
//
// 00806e40  6aff                 push -1
// 00806e42  68a9028800           push 0x8802a9
// 00806e47  64a100000000         mov eax, dword ptr fs:[0]
// 00806e4d  50                   push eax
// 00806e4e  83ec10               sub esp, 0x10
// 00806e51  53                   push ebx
// 00806e52  55                   push ebp
// 00806e53  56                   push esi
// 00806e54  57                   push edi
// 00806e55  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00806e5a  33c4                 xor eax, esp
// 00806e5c  50                   push eax
// 00806e5d  8d442424             lea eax, [esp + 0x24]
// 00806e61  64a300000000         mov dword ptr fs:[0], eax
// 00806e67  8bf9                 mov edi, ecx
// 00806e69  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00806e6d  6a01                 push 1
// 00806e6f  8bcd                 mov ecx, ebp
// 00806e71  e890500400           call 0x84bf06
// 00806e76  8b7500               mov esi, dword ptr [ebp]
// 00806e79  83c630               add esi, 0x30
// 00806e7c  e85f26f8ff           call 0x7894e0
// 00806e81  05dc000000           add eax, 0xdc
// 00806e86  50                   push eax
// 00806e87  8b06                 mov eax, dword ptr [esi]
// 00806e89  8bcd                 mov ecx, ebp
// 00806e8b  ffd0                 call eax
// 00806e8d  f687a400000002       test byte ptr [edi + 0xa4], 2
// 00806e94  89442420             mov dword ptr [esp + 0x20], eax
// 00806e98  7579                 jne 0x806f13
// 00806e9a  8d4c2434             lea ecx, [esp + 0x34]
// 00806e9e  ff15bcfc8900         call dword ptr [0x89fcbc]
// 00806ea4  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00806eac  e88f42f9ff           call 0x79b140
// 00806eb1  8b10                 mov edx, dword ptr [eax]
// 00806eb3  8b5208               mov edx, dword ptr [edx + 8]
// 00806eb6  68d0240000           push 0x24d0
// 00806ebb  8d4c2438             lea ecx, [esp + 0x38]
// 00806ebf  51                   push ecx
// 00806ec0  8bc8                 mov ecx, eax
// 00806ec2  ffd2                 call edx
// 00806ec4  8b87a4000000         mov eax, dword ptr [edi + 0xa4]
// 00806eca  8b5d00               mov ebx, dword ptr [ebp]
// 00806ecd  2410                 and al, 0x10
// 00806ecf  0fb6f0               movzx esi, al
// 00806ed2  f7de                 neg esi
// 00806ed4  1bf6                 sbb esi, esi
// 00806ed6  83e6e5               and esi, 0xffffffe5
// 00806ed9  8d4c2434             lea ecx, [esp + 0x34]
// 00806edd  83c61b               add esi, 0x1b
// 00806ee0  83c364               add ebx, 0x64
// 00806ee3  ff1554fb8900         call dword ptr [0x89fb54]
// 00806ee9  50                   push eax
// 00806eea  8d4c2438             lea ecx, [esp + 0x38]
// 00806eee  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00806ef4  8b13                 mov edx, dword ptr [ebx]
// 00806ef6  50                   push eax
// 00806ef7  83c604               add esi, 4
// 00806efa  56                   push esi
// 00806efb  6a06                 push 6
// 00806efd  8bcd                 mov ecx, ebp
// 00806eff  ffd2                 call edx
// 00806f01  8d4c2434             lea ecx, [esp + 0x34]
// 00806f05  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00806f0d  ff1510fd8900         call dword ptr [0x89fd10]
// 00806f13  8bb740010000         mov esi, dword ptr [edi + 0x140]
// 00806f19  33d2                 xor edx, edx
// 00806f1b  33db                 xor ebx, ebx
// 00806f1d  3bf2                 cmp esi, edx
// 00806f1f  7468                 je 0x806f89
// 00806f21  eb02                 jmp 0x806f25
// 00806f23  33d2                 xor edx, edx
// 00806f25  8b4f70               mov ecx, dword ptr [edi + 0x70]
// 00806f28  8b4608               mov eax, dword ptr [esi + 8]
// 00806f2b  8944241c             mov dword ptr [esp + 0x1c], eax
// 00806f2f  3bd9                 cmp ebx, ecx
// 00806f31  7508                 jne 0x806f3b
// 00806f33  8b4774               mov eax, dword ptr [edi + 0x74]
// 00806f36  83f8ff               cmp eax, -1
// 00806f39  740b                 je 0x806f46
// 00806f3b  8b4774               mov eax, dword ptr [edi + 0x74]
// 00806f3e  89542418             mov dword ptr [esp + 0x18], edx
// 00806f42  3bd8                 cmp ebx, eax
// 00806f44  7518                 jne 0x806f5e
// 00806f46  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00806f4e  3bd8                 cmp ebx, eax
// 00806f50  750c                 jne 0x806f5e
// 00806f52  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00806f5a  3bd9                 cmp ebx, ecx
// 00806f5c  7404                 je 0x806f62
// 00806f5e  89542414             mov dword ptr [esp + 0x14], edx
// 00806f62  8bcf                 mov ecx, edi
// 00806f64  e807a2f8ff           call 0x791170
// 00806f69  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00806f6d  8b10                 mov edx, dword ptr [eax]
// 00806f6f  8b5214               mov edx, dword ptr [edx + 0x14]
// 00806f72  51                   push ecx
// 00806f73  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00806f77  51                   push ecx
// 00806f78  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00806f7c  55                   push ebp
// 00806f7d  51                   push ecx
// 00806f7e  8bc8                 mov ecx, eax
// 00806f80  ffd2                 call edx
// 00806f82  8b36                 mov esi, dword ptr [esi]
// 00806f84  43                   inc ebx
// 00806f85  85f6                 test esi, esi
// 00806f87  759a                 jne 0x806f23
// 00806f89  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00806f8d  8b4500               mov eax, dword ptr [ebp]
// 00806f90  8b5030               mov edx, dword ptr [eax + 0x30]
// 00806f93  51                   push ecx
// 00806f94  8bcd                 mov ecx, ebp
// 00806f96  ffd2                 call edx
// 00806f98  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00806f9c  64890d00000000       mov dword ptr fs:[0], ecx
// 00806fa3  59                   pop ecx
// 00806fa4  5f                   pop edi
// 00806fa5  5e                   pop esi
// 00806fa6  5d                   pop ebp
// 00806fa7  5b                   pop ebx
// 00806fa8  83c41c               add esp, 0x1c
// 00806fab  c20400               ret 4
// copied from an identical function in another client (function ?DrawColorSelector@CXTColorSelectorCtrl@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorSelectorCtrl.cpp