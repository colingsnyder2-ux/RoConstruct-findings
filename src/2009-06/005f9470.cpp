// roc 2009-06 005f9470  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f9470
//
// 005f9470  51                   push ecx
// 005f9471  53                   push ebx
// 005f9472  55                   push ebp
// 005f9473  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005f9477  56                   push esi
// 005f9478  57                   push edi
// 005f9479  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f947d  8d4900               lea ecx, [ecx]
// 005f9480  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005f9483  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005f9486  7606                 jbe 0x5f948e
// 005f9488  ff15ace98900         call dword ptr [0x89e9ac]
// 005f948e  8b7500               mov esi, dword ptr [ebp]
// 005f9491  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005f9494  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005f9497  7606                 jbe 0x5f949f
// 005f9499  ff15ace98900         call dword ptr [0x89e9ac]
// 005f949f  8b4500               mov eax, dword ptr [ebp]
// 005f94a2  85f6                 test esi, esi
// 005f94a4  7404                 je 0x5f94aa
// 005f94a6  3bf0                 cmp esi, eax
// 005f94a8  7406                 je 0x5f94b0
// 005f94aa  ff15ace98900         call dword ptr [0x89e9ac]
// 005f94b0  3bfb                 cmp edi, ebx
// 005f94b2  743d                 je 0x5f94f1
// 005f94b4  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 005f94ba  85f6                 test esi, esi
// 005f94bc  752b                 jne 0x5f94e9
// 005f94be  ffd3                 call ebx
// 005f94c0  33c0                 xor eax, eax
// 005f94c2  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005f94c5  7202                 jb 0x5f94c9
// 005f94c7  ffd3                 call ebx
// 005f94c9  8b07                 mov eax, dword ptr [edi]
// 005f94cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f94cf  50                   push eax
// 005f94d0  e8dbfaffff           call 0x5f8fb0
// 005f94d5  85f6                 test esi, esi
// 005f94d7  7514                 jne 0x5f94ed
// 005f94d9  ffd3                 call ebx
// 005f94db  33c0                 xor eax, eax
// 005f94dd  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005f94e0  7202                 jb 0x5f94e4
// 005f94e2  ffd3                 call ebx
// 005f94e4  83c704               add edi, 4
// 005f94e7  eba8                 jmp 0x5f9491
// 005f94e9  8b06                 mov eax, dword ptr [esi]
// 005f94eb  ebd5                 jmp 0x5f94c2
// 005f94ed  8b06                 mov eax, dword ptr [esi]
// 005f94ef  ebec                 jmp 0x5f94dd
// 005f94f1  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005f94f4  85c0                 test eax, eax
// 005f94f6  7404                 je 0x5f94fc
// 005f94f8  8be8                 mov ebp, eax
// 005f94fa  eb84                 jmp 0x5f9480
// 005f94fc  5f                   pop edi
// 005f94fd  5e                   pop esi
// 005f94fe  5d                   pop ebp
// 005f94ff  5b                   pop ebx
// 005f9500  59                   pop ecx
// 005f9501  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_object.cpp
