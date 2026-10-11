// roc 2009-12 00663bd0  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00663bd0
//
// 00663bd0  51                   push ecx
// 00663bd1  53                   push ebx
// 00663bd2  55                   push ebp
// 00663bd3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00663bd7  56                   push esi
// 00663bd8  57                   push edi
// 00663bd9  894c2410             mov dword ptr [esp + 0x10], ecx
// 00663bdd  8d4900               lea ecx, [ecx]
// 00663be0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00663be3  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 00663be6  7606                 jbe 0x663bee
// 00663be8  ff1560b79800         call dword ptr [0x98b760]
// 00663bee  8b7500               mov esi, dword ptr [ebp]
// 00663bf1  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00663bf4  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00663bf7  7606                 jbe 0x663bff
// 00663bf9  ff1560b79800         call dword ptr [0x98b760]
// 00663bff  8b4500               mov eax, dword ptr [ebp]
// 00663c02  85f6                 test esi, esi
// 00663c04  7404                 je 0x663c0a
// 00663c06  3bf0                 cmp esi, eax
// 00663c08  7406                 je 0x663c10
// 00663c0a  ff1560b79800         call dword ptr [0x98b760]
// 00663c10  3bfb                 cmp edi, ebx
// 00663c12  743d                 je 0x663c51
// 00663c14  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 00663c1a  85f6                 test esi, esi
// 00663c1c  752b                 jne 0x663c49
// 00663c1e  ffd3                 call ebx
// 00663c20  33c0                 xor eax, eax
// 00663c22  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663c25  7202                 jb 0x663c29
// 00663c27  ffd3                 call ebx
// 00663c29  8b07                 mov eax, dword ptr [edi]
// 00663c2b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00663c2f  50                   push eax
// 00663c30  e83bfaffff           call 0x663670
// 00663c35  85f6                 test esi, esi
// 00663c37  7514                 jne 0x663c4d
// 00663c39  ffd3                 call ebx
// 00663c3b  33c0                 xor eax, eax
// 00663c3d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663c40  7202                 jb 0x663c44
// 00663c42  ffd3                 call ebx
// 00663c44  83c704               add edi, 4
// 00663c47  eba8                 jmp 0x663bf1
// 00663c49  8b06                 mov eax, dword ptr [esi]
// 00663c4b  ebd5                 jmp 0x663c22
// 00663c4d  8b06                 mov eax, dword ptr [esi]
// 00663c4f  ebec                 jmp 0x663c3d
// 00663c51  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00663c54  85c0                 test eax, eax
// 00663c56  7404                 je 0x663c5c
// 00663c58  8be8                 mov ebp, eax
// 00663c5a  eb84                 jmp 0x663be0
// 00663c5c  5f                   pop edi
// 00663c5d  5e                   pop esi
// 00663c5e  5d                   pop ebp
// 00663c5f  5b                   pop ebx
// 00663c60  59                   pop ecx
// 00663c61  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_object.cpp
