// roc 2010-06 005ca710  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ca710
//
// 005ca710  51                   push ecx
// 005ca711  53                   push ebx
// 005ca712  55                   push ebp
// 005ca713  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005ca717  56                   push esi
// 005ca718  57                   push edi
// 005ca719  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ca71d  8d4900               lea ecx, [ecx]
// 005ca720  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005ca723  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005ca726  7606                 jbe 0x5ca72e
// 005ca728  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca72e  8b7500               mov esi, dword ptr [ebp]
// 005ca731  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005ca734  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005ca737  7606                 jbe 0x5ca73f
// 005ca739  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca73f  8b4500               mov eax, dword ptr [ebp]
// 005ca742  85f6                 test esi, esi
// 005ca744  7404                 je 0x5ca74a
// 005ca746  3bf0                 cmp esi, eax
// 005ca748  7406                 je 0x5ca750
// 005ca74a  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca750  3bfb                 cmp edi, ebx
// 005ca752  743d                 je 0x5ca791
// 005ca754  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 005ca75a  85f6                 test esi, esi
// 005ca75c  752b                 jne 0x5ca789
// 005ca75e  ffd3                 call ebx
// 005ca760  33c0                 xor eax, eax
// 005ca762  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca765  7202                 jb 0x5ca769
// 005ca767  ffd3                 call ebx
// 005ca769  8b07                 mov eax, dword ptr [edi]
// 005ca76b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ca76f  50                   push eax
// 005ca770  e85becffff           call 0x5c93d0
// 005ca775  85f6                 test esi, esi
// 005ca777  7514                 jne 0x5ca78d
// 005ca779  ffd3                 call ebx
// 005ca77b  33c0                 xor eax, eax
// 005ca77d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca780  7202                 jb 0x5ca784
// 005ca782  ffd3                 call ebx
// 005ca784  83c704               add edi, 4
// 005ca787  eba8                 jmp 0x5ca731
// 005ca789  8b06                 mov eax, dword ptr [esi]
// 005ca78b  ebd5                 jmp 0x5ca762
// 005ca78d  8b06                 mov eax, dword ptr [esi]
// 005ca78f  ebec                 jmp 0x5ca77d
// 005ca791  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005ca794  85c0                 test eax, eax
// 005ca796  7404                 je 0x5ca79c
// 005ca798  8be8                 mov ebp, eax
// 005ca79a  eb84                 jmp 0x5ca720
// 005ca79c  5f                   pop edi
// 005ca79d  5e                   pop esi
// 005ca79e  5d                   pop ebp
// 005ca79f  5b                   pop ebx
// 005ca7a0  59                   pop ecx
// 005ca7a1  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
