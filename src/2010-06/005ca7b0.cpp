// roc 2010-06 005ca7b0  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ca7b0
//
// 005ca7b0  51                   push ecx
// 005ca7b1  53                   push ebx
// 005ca7b2  55                   push ebp
// 005ca7b3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005ca7b7  56                   push esi
// 005ca7b8  57                   push edi
// 005ca7b9  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ca7bd  8d4900               lea ecx, [ecx]
// 005ca7c0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005ca7c3  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005ca7c6  7606                 jbe 0x5ca7ce
// 005ca7c8  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca7ce  8b7500               mov esi, dword ptr [ebp]
// 005ca7d1  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005ca7d4  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005ca7d7  7606                 jbe 0x5ca7df
// 005ca7d9  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca7df  8b4500               mov eax, dword ptr [ebp]
// 005ca7e2  85f6                 test esi, esi
// 005ca7e4  7404                 je 0x5ca7ea
// 005ca7e6  3bf0                 cmp esi, eax
// 005ca7e8  7406                 je 0x5ca7f0
// 005ca7ea  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca7f0  3bfb                 cmp edi, ebx
// 005ca7f2  743d                 je 0x5ca831
// 005ca7f4  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 005ca7fa  85f6                 test esi, esi
// 005ca7fc  752b                 jne 0x5ca829
// 005ca7fe  ffd3                 call ebx
// 005ca800  33c0                 xor eax, eax
// 005ca802  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca805  7202                 jb 0x5ca809
// 005ca807  ffd3                 call ebx
// 005ca809  8b07                 mov eax, dword ptr [edi]
// 005ca80b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ca80f  50                   push eax
// 005ca810  e87bf4ffff           call 0x5c9c90
// 005ca815  85f6                 test esi, esi
// 005ca817  7514                 jne 0x5ca82d
// 005ca819  ffd3                 call ebx
// 005ca81b  33c0                 xor eax, eax
// 005ca81d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca820  7202                 jb 0x5ca824
// 005ca822  ffd3                 call ebx
// 005ca824  83c704               add edi, 4
// 005ca827  eba8                 jmp 0x5ca7d1
// 005ca829  8b06                 mov eax, dword ptr [esi]
// 005ca82b  ebd5                 jmp 0x5ca802
// 005ca82d  8b06                 mov eax, dword ptr [esi]
// 005ca82f  ebec                 jmp 0x5ca81d
// 005ca831  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005ca834  85c0                 test eax, eax
// 005ca836  7404                 je 0x5ca83c
// 005ca838  8be8                 mov ebp, eax
// 005ca83a  eb84                 jmp 0x5ca7c0
// 005ca83c  5f                   pop edi
// 005ca83d  5e                   pop esi
// 005ca83e  5d                   pop ebp
// 005ca83f  5b                   pop ebx
// 005ca840  59                   pop ecx
// 005ca841  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
