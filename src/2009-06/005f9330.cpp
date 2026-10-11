// roc 2009-06 005f9330  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f9330
//
// 005f9330  51                   push ecx
// 005f9331  53                   push ebx
// 005f9332  55                   push ebp
// 005f9333  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005f9337  56                   push esi
// 005f9338  57                   push edi
// 005f9339  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f933d  8d4900               lea ecx, [ecx]
// 005f9340  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005f9343  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005f9346  7606                 jbe 0x5f934e
// 005f9348  ff15ace98900         call dword ptr [0x89e9ac]
// 005f934e  8b7500               mov esi, dword ptr [ebp]
// 005f9351  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005f9354  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005f9357  7606                 jbe 0x5f935f
// 005f9359  ff15ace98900         call dword ptr [0x89e9ac]
// 005f935f  8b4500               mov eax, dword ptr [ebp]
// 005f9362  85f6                 test esi, esi
// 005f9364  7404                 je 0x5f936a
// 005f9366  3bf0                 cmp esi, eax
// 005f9368  7406                 je 0x5f9370
// 005f936a  ff15ace98900         call dword ptr [0x89e9ac]
// 005f9370  3bfb                 cmp edi, ebx
// 005f9372  743d                 je 0x5f93b1
// 005f9374  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 005f937a  85f6                 test esi, esi
// 005f937c  752b                 jne 0x5f93a9
// 005f937e  ffd3                 call ebx
// 005f9380  33c0                 xor eax, eax
// 005f9382  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005f9385  7202                 jb 0x5f9389
// 005f9387  ffd3                 call ebx
// 005f9389  8b07                 mov eax, dword ptr [edi]
// 005f938b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f938f  50                   push eax
// 005f9390  e8ebefffff           call 0x5f8380
// 005f9395  85f6                 test esi, esi
// 005f9397  7514                 jne 0x5f93ad
// 005f9399  ffd3                 call ebx
// 005f939b  33c0                 xor eax, eax
// 005f939d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005f93a0  7202                 jb 0x5f93a4
// 005f93a2  ffd3                 call ebx
// 005f93a4  83c704               add edi, 4
// 005f93a7  eba8                 jmp 0x5f9351
// 005f93a9  8b06                 mov eax, dword ptr [esi]
// 005f93ab  ebd5                 jmp 0x5f9382
// 005f93ad  8b06                 mov eax, dword ptr [esi]
// 005f93af  ebec                 jmp 0x5f939d
// 005f93b1  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005f93b4  85c0                 test eax, eax
// 005f93b6  7404                 je 0x5f93bc
// 005f93b8  8be8                 mov ebp, eax
// 005f93ba  eb84                 jmp 0x5f9340
// 005f93bc  5f                   pop edi
// 005f93bd  5e                   pop esi
// 005f93be  5d                   pop ebp
// 005f93bf  5b                   pop ebx
// 005f93c0  59                   pop ecx
// 005f93c1  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_object.cpp
