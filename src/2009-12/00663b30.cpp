// roc 2009-12 00663b30  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00663b30
//
// 00663b30  51                   push ecx
// 00663b31  53                   push ebx
// 00663b32  55                   push ebp
// 00663b33  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00663b37  56                   push esi
// 00663b38  57                   push edi
// 00663b39  894c2410             mov dword ptr [esp + 0x10], ecx
// 00663b3d  8d4900               lea ecx, [ecx]
// 00663b40  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00663b43  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 00663b46  7606                 jbe 0x663b4e
// 00663b48  ff1560b79800         call dword ptr [0x98b760]
// 00663b4e  8b7500               mov esi, dword ptr [ebp]
// 00663b51  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00663b54  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00663b57  7606                 jbe 0x663b5f
// 00663b59  ff1560b79800         call dword ptr [0x98b760]
// 00663b5f  8b4500               mov eax, dword ptr [ebp]
// 00663b62  85f6                 test esi, esi
// 00663b64  7404                 je 0x663b6a
// 00663b66  3bf0                 cmp esi, eax
// 00663b68  7406                 je 0x663b70
// 00663b6a  ff1560b79800         call dword ptr [0x98b760]
// 00663b70  3bfb                 cmp edi, ebx
// 00663b72  743d                 je 0x663bb1
// 00663b74  8b1d60b79800         mov ebx, dword ptr [0x98b760]
// 00663b7a  85f6                 test esi, esi
// 00663b7c  752b                 jne 0x663ba9
// 00663b7e  ffd3                 call ebx
// 00663b80  33c0                 xor eax, eax
// 00663b82  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663b85  7202                 jb 0x663b89
// 00663b87  ffd3                 call ebx
// 00663b89  8b07                 mov eax, dword ptr [edi]
// 00663b8b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00663b8f  50                   push eax
// 00663b90  e85bf7ffff           call 0x6632f0
// 00663b95  85f6                 test esi, esi
// 00663b97  7514                 jne 0x663bad
// 00663b99  ffd3                 call ebx
// 00663b9b  33c0                 xor eax, eax
// 00663b9d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00663ba0  7202                 jb 0x663ba4
// 00663ba2  ffd3                 call ebx
// 00663ba4  83c704               add edi, 4
// 00663ba7  eba8                 jmp 0x663b51
// 00663ba9  8b06                 mov eax, dword ptr [esi]
// 00663bab  ebd5                 jmp 0x663b82
// 00663bad  8b06                 mov eax, dword ptr [esi]
// 00663baf  ebec                 jmp 0x663b9d
// 00663bb1  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00663bb4  85c0                 test eax, eax
// 00663bb6  7404                 je 0x663bbc
// 00663bb8  8be8                 mov ebp, eax
// 00663bba  eb84                 jmp 0x663b40
// 00663bbc  5f                   pop edi
// 00663bbd  5e                   pop esi
// 00663bbe  5d                   pop ebp
// 00663bbf  5b                   pop ebx
// 00663bc0  59                   pop ecx
// 00663bc1  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_object.cpp
