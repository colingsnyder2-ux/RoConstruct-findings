// roc 2009-12 006639f0  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006639f0
//
// 006639f0  51                   push ecx
// 006639f1  53                   push ebx
// 006639f2  55                   push ebp
// 006639f3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006639f7  56                   push esi
// 006639f8  57                   push edi
// 006639f9  894c2410             mov dword ptr [esp + 0x10], ecx
// 006639fd  8d4900               lea ecx, [ecx]
// 00663a00  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00663a03  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 00663a06  7606                 jbe 0x663a0e
// 00663a08  ff1560b79800         call dword ptr [0x98b760]
// 00663a0e  8b7500               mov esi, dword ptr [ebp]
// 00663a11  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00663a14  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00663a17  7606                 jbe 0x663a1f
// 00663a19  ff1560b79800         call dword ptr [0x98b760]
// 00663a1f  8b4500               mov eax, dword ptr [ebp]
// 00663a22  85f6                 test esi, esi
// 00663a24  7404                 je 0x663a2a
// 00663a26  3bf0                 cmp esi, eax
// 00663a28  7406                 je 0x663a30
// 00663a2a  ff1560b79800         call dword ptr [0x98b760]
// 00663a30  3bfb                 cmp edi, ebx
// 00663a32  743d                 je 0x663a71
// 00663a34  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 00663a3a  85f6                 test esi, esi
// 00663a3c  752b                 jne 0x663a69
// 00663a3e  ffd3                 call ebx
// 00663a40  33c0                 xor eax, eax
// 00663a42  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663a45  7202                 jb 0x663a49
// 00663a47  ffd3                 call ebx
// 00663a49  8b07                 mov eax, dword ptr [edi]
// 00663a4b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00663a4f  50                   push eax
// 00663a50  e8fbebffff           call 0x662650
// 00663a55  85f6                 test esi, esi
// 00663a57  7514                 jne 0x663a6d
// 00663a59  ffd3                 call ebx
// 00663a5b  33c0                 xor eax, eax
// 00663a5d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663a60  7202                 jb 0x663a64
// 00663a62  ffd3                 call ebx
// 00663a64  83c704               add edi, 4
// 00663a67  eba8                 jmp 0x663a11
// 00663a69  8b06                 mov eax, dword ptr [esi]
// 00663a6b  ebd5                 jmp 0x663a42
// 00663a6d  8b06                 mov eax, dword ptr [esi]
// 00663a6f  ebec                 jmp 0x663a5d
// 00663a71  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00663a74  85c0                 test eax, eax
// 00663a76  7404                 je 0x663a7c
// 00663a78  8be8                 mov ebp, eax
// 00663a7a  eb84                 jmp 0x663a00
// 00663a7c  5f                   pop edi
// 00663a7d  5e                   pop esi
// 00663a7e  5d                   pop ebp
// 00663a7f  5b                   pop ebx
// 00663a80  59                   pop ecx
// 00663a81  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
