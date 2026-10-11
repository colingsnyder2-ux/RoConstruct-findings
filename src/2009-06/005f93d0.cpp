// roc 2009-06 005f93d0  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f93d0
//
// 005f93d0  51                   push ecx
// 005f93d1  53                   push ebx
// 005f93d2  55                   push ebp
// 005f93d3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005f93d7  56                   push esi
// 005f93d8  57                   push edi
// 005f93d9  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f93dd  8d4900               lea ecx, [ecx]
// 005f93e0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005f93e3  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005f93e6  7606                 jbe 0x5f93ee
// 005f93e8  ff15ace98900         call dword ptr [0x89e9ac]
// 005f93ee  8b7500               mov esi, dword ptr [ebp]
// 005f93f1  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005f93f4  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005f93f7  7606                 jbe 0x5f93ff
// 005f93f9  ff15ace98900         call dword ptr [0x89e9ac]
// 005f93ff  8b4500               mov eax, dword ptr [ebp]
// 005f9402  85f6                 test esi, esi
// 005f9404  7404                 je 0x5f940a
// 005f9406  3bf0                 cmp esi, eax
// 005f9408  7406                 je 0x5f9410
// 005f940a  ff15ace98900         call dword ptr [0x89e9ac]
// 005f9410  3bfb                 cmp edi, ebx
// 005f9412  743d                 je 0x5f9451
// 005f9414  8b1dace98900         mov ebx, dword ptr [0x89e9ac]
// 005f941a  85f6                 test esi, esi
// 005f941c  752b                 jne 0x5f9449
// 005f941e  ffd3                 call ebx
// 005f9420  33c0                 xor eax, eax
// 005f9422  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005f9425  7202                 jb 0x5f9429
// 005f9427  ffd3                 call ebx
// 005f9429  8b07                 mov eax, dword ptr [edi]
// 005f942b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f942f  50                   push eax
// 005f9430  e8fbf7ffff           call 0x5f8c30
// 005f9435  85f6                 test esi, esi
// 005f9437  7514                 jne 0x5f944d
// 005f9439  ffd3                 call ebx
// 005f943b  33c0                 xor eax, eax
// 005f943d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005f9440  7202                 jb 0x5f9444
// 005f9442  ffd3                 call ebx
// 005f9444  83c704               add edi, 4
// 005f9447  eba8                 jmp 0x5f93f1
// 005f9449  8b06                 mov eax, dword ptr [esi]
// 005f944b  ebd5                 jmp 0x5f9422
// 005f944d  8b06                 mov eax, dword ptr [esi]
// 005f944f  ebec                 jmp 0x5f943d
// 005f9451  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005f9454  85c0                 test eax, eax
// 005f9456  7404                 je 0x5f945c
// 005f9458  8be8                 mov ebp, eax
// 005f945a  eb84                 jmp 0x5f93e0
// 005f945c  5f                   pop edi
// 005f945d  5e                   pop esi
// 005f945e  5d                   pop ebp
// 005f945f  5b                   pop ebx
// 005f9460  59                   pop ecx
// 005f9461  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
