// roc 2010-06 005ca8f0  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ca8f0
//
// 005ca8f0  51                   push ecx
// 005ca8f1  53                   push ebx
// 005ca8f2  55                   push ebp
// 005ca8f3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005ca8f7  56                   push esi
// 005ca8f8  57                   push edi
// 005ca8f9  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ca8fd  8d4900               lea ecx, [ecx]
// 005ca900  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005ca903  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005ca906  7606                 jbe 0x5ca90e
// 005ca908  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca90e  8b7500               mov esi, dword ptr [ebp]
// 005ca911  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005ca914  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005ca917  7606                 jbe 0x5ca91f
// 005ca919  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca91f  8b4500               mov eax, dword ptr [ebp]
// 005ca922  85f6                 test esi, esi
// 005ca924  7404                 je 0x5ca92a
// 005ca926  3bf0                 cmp esi, eax
// 005ca928  7406                 je 0x5ca930
// 005ca92a  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca930  3bfb                 cmp edi, ebx
// 005ca932  743d                 je 0x5ca971
// 005ca934  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 005ca93a  85f6                 test esi, esi
// 005ca93c  752b                 jne 0x5ca969
// 005ca93e  ffd3                 call ebx
// 005ca940  33c0                 xor eax, eax
// 005ca942  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca945  7202                 jb 0x5ca949
// 005ca947  ffd3                 call ebx
// 005ca949  8b07                 mov eax, dword ptr [edi]
// 005ca94b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ca94f  50                   push eax
// 005ca950  e83bfaffff           call 0x5ca390
// 005ca955  85f6                 test esi, esi
// 005ca957  7514                 jne 0x5ca96d
// 005ca959  ffd3                 call ebx
// 005ca95b  33c0                 xor eax, eax
// 005ca95d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca960  7202                 jb 0x5ca964
// 005ca962  ffd3                 call ebx
// 005ca964  83c704               add edi, 4
// 005ca967  eba8                 jmp 0x5ca911
// 005ca969  8b06                 mov eax, dword ptr [esi]
// 005ca96b  ebd5                 jmp 0x5ca942
// 005ca96d  8b06                 mov eax, dword ptr [esi]
// 005ca96f  ebec                 jmp 0x5ca95d
// 005ca971  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005ca974  85c0                 test eax, eax
// 005ca976  7404                 je 0x5ca97c
// 005ca978  8be8                 mov ebp, eax
// 005ca97a  eb84                 jmp 0x5ca900
// 005ca97c  5f                   pop edi
// 005ca97d  5e                   pop esi
// 005ca97e  5d                   pop ebp
// 005ca97f  5b                   pop ebx
// 005ca980  59                   pop ecx
// 005ca981  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
