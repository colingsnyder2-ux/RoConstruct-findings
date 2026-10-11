// roc 2007-03 00570a00  unit: seg_00570000  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570a00
//
// 00570a00  6aff                 push -1
// 00570a02  68085d7500           push 0x755d08
// 00570a07  64a100000000         mov eax, dword ptr fs:[0]
// 00570a0d  50                   push eax
// 00570a0e  64892500000000       mov dword ptr fs:[0], esp
// 00570a15  83ec10               sub esp, 0x10
// 00570a18  53                   push ebx
// 00570a19  55                   push ebp
// 00570a1a  56                   push esi
// 00570a1b  57                   push edi
// 00570a1c  8bf1                 mov esi, ecx
// 00570a1e  e8edfcffff           call 0x570710
// 00570a23  8bc8                 mov ecx, eax
// 00570a25  89442410             mov dword ptr [esp + 0x10], eax
// 00570a29  e852601b00           call 0x726a80
// 00570a2e  c644241401           mov byte ptr [esp + 0x14], 1
// 00570a33  8b5e08               mov ebx, dword ptr [esi + 8]
// 00570a36  395e04               cmp dword ptr [esi + 4], ebx
// 00570a39  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 00570a3f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00570a47  7602                 jbe 0x570a4b
// 00570a49  ffd5                 call ebp
// 00570a4b  8b7e04               mov edi, dword ptr [esi + 4]
// 00570a4e  3b7e08               cmp edi, dword ptr [esi + 8]
// 00570a51  7602                 jbe 0x570a55
// 00570a53  ffd5                 call ebp
// 00570a55  6a00                 push 0
// 00570a57  68e0065700           push 0x5706e0
// 00570a5c  8d442438             lea eax, [esp + 0x38]
// 00570a60  50                   push eax
// 00570a61  53                   push ebx
// 00570a62  57                   push edi
// 00570a63  897c2430             mov dword ptr [esp + 0x30], edi
// 00570a67  e854f1ffff           call 0x56fbc0
// 00570a6c  8b7e08               mov edi, dword ptr [esi + 8]
// 00570a6f  83c414               add esp, 0x14
// 00570a72  397e04               cmp dword ptr [esi + 4], edi
// 00570a75  8bd8                 mov ebx, eax
// 00570a77  7602                 jbe 0x570a7b
// 00570a79  ffd5                 call ebp
// 00570a7b  85f6                 test esi, esi
// 00570a7d  7404                 je 0x570a83
// 00570a7f  3bf6                 cmp esi, esi
// 00570a81  7402                 je 0x570a85
// 00570a83  ffd5                 call ebp
// 00570a85  3bdf                 cmp ebx, edi
// 00570a87  7415                 je 0x570a9e
// 00570a89  85f6                 test esi, esi
// 00570a8b  7502                 jne 0x570a8f
// 00570a8d  ffd5                 call ebp
// 00570a8f  3b5e08               cmp ebx, dword ptr [esi + 8]
// 00570a92  7202                 jb 0x570a96
// 00570a94  ffd5                 call ebp
// 00570a96  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00570a9a  390b                 cmp dword ptr [ebx], ecx
// 00570a9c  7413                 je 0x570ab1
// 00570a9e  8d542430             lea edx, [esp + 0x30]
// 00570aa2  52                   push edx
// 00570aa3  53                   push ebx
// 00570aa4  56                   push esi
// 00570aa5  8d442424             lea eax, [esp + 0x24]
// 00570aa9  50                   push eax
// 00570aaa  8bce                 mov ecx, esi
// 00570aac  e8bffeffff           call 0x570970
// 00570ab1  8b7e14               mov edi, dword ptr [esi + 0x14]
// 00570ab4  83c610               add esi, 0x10
// 00570ab7  3b7e08               cmp edi, dword ptr [esi + 8]
// 00570aba  7604                 jbe 0x570ac0
// 00570abc  ffd5                 call ebp
// 00570abe  8bff                 mov edi, edi
// 00570ac0  8b5e08               mov ebx, dword ptr [esi + 8]
// 00570ac3  395e04               cmp dword ptr [esi + 4], ebx
// 00570ac6  7602                 jbe 0x570aca
// 00570ac8  ffd5                 call ebp
// 00570aca  3bf6                 cmp esi, esi
// 00570acc  7402                 je 0x570ad0
// 00570ace  ffd5                 call ebp
// 00570ad0  3bfb                 cmp edi, ebx
// 00570ad2  741f                 je 0x570af3
// 00570ad4  3b7e08               cmp edi, dword ptr [esi + 8]
// 00570ad7  7202                 jb 0x570adb
// 00570ad9  ffd5                 call ebp
// 00570adb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00570adf  51                   push ecx
// 00570ae0  8b0f                 mov ecx, dword ptr [edi]
// 00570ae2  e819ffffff           call 0x570a00
// 00570ae7  3b7e08               cmp edi, dword ptr [esi + 8]
// 00570aea  7202                 jb 0x570aee
// 00570aec  ffd5                 call ebp
// 00570aee  83c704               add edi, 4
// 00570af1  ebcd                 jmp 0x570ac0
// 00570af3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00570af7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00570aff  e89c5f1b00           call 0x726aa0
// 00570b04  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00570b08  5f                   pop edi
// 00570b09  5e                   pop esi
// 00570b0a  5d                   pop ebp
// 00570b0b  5b                   pop ebx
// 00570b0c  64890d00000000       mov dword ptr fs:[0], ecx
// 00570b13  83c41c               add esp, 0x1c
// 00570b16  c20400               ret 4
// library openrbx-client/App\reflection\reflection_function.cpp (function ?declare@?$MemberDescriptorContainer@VFunctionDescriptor@Reflection@RBX@@@Reflection@RBX@@QAEXPAVFunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_function.cpp
