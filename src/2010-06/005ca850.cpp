// roc 2010-06 005ca850  unit: RBX::Reflection::EnumDescriptor  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ca850
//
// 005ca850  51                   push ecx
// 005ca851  53                   push ebx
// 005ca852  55                   push ebp
// 005ca853  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005ca857  56                   push esi
// 005ca858  57                   push edi
// 005ca859  894c2410             mov dword ptr [esp + 0x10], ecx
// 005ca85d  8d4900               lea ecx, [ecx]
// 005ca860  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005ca863  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005ca866  7606                 jbe 0x5ca86e
// 005ca868  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca86e  8b7500               mov esi, dword ptr [ebp]
// 005ca871  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005ca874  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005ca877  7606                 jbe 0x5ca87f
// 005ca879  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca87f  8b4500               mov eax, dword ptr [ebp]
// 005ca882  85f6                 test esi, esi
// 005ca884  7404                 je 0x5ca88a
// 005ca886  3bf0                 cmp esi, eax
// 005ca888  7406                 je 0x5ca890
// 005ca88a  ff150ca99e00         call dword ptr [0x9ea90c]
// 005ca890  3bfb                 cmp edi, ebx
// 005ca892  743d                 je 0x5ca8d1
// 005ca894  8b1d0ca99e00         mov ebx, dword ptr [0x9ea90c]
// 005ca89a  85f6                 test esi, esi
// 005ca89c  752b                 jne 0x5ca8c9
// 005ca89e  ffd3                 call ebx
// 005ca8a0  33c0                 xor eax, eax
// 005ca8a2  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca8a5  7202                 jb 0x5ca8a9
// 005ca8a7  ffd3                 call ebx
// 005ca8a9  8b07                 mov eax, dword ptr [edi]
// 005ca8ab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ca8af  50                   push eax
// 005ca8b0  e85bf7ffff           call 0x5ca010
// 005ca8b5  85f6                 test esi, esi
// 005ca8b7  7514                 jne 0x5ca8cd
// 005ca8b9  ffd3                 call ebx
// 005ca8bb  33c0                 xor eax, eax
// 005ca8bd  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005ca8c0  7202                 jb 0x5ca8c4
// 005ca8c2  ffd3                 call ebx
// 005ca8c4  83c704               add edi, 4
// 005ca8c7  eba8                 jmp 0x5ca871
// 005ca8c9  8b06                 mov eax, dword ptr [esi]
// 005ca8cb  ebd5                 jmp 0x5ca8a2
// 005ca8cd  8b06                 mov eax, dword ptr [esi]
// 005ca8cf  ebec                 jmp 0x5ca8bd
// 005ca8d1  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005ca8d4  85c0                 test eax, eax
// 005ca8d6  7404                 je 0x5ca8dc
// 005ca8d8  8be8                 mov ebp, eax
// 005ca8da  eb84                 jmp 0x5ca860
// 005ca8dc  5f                   pop edi
// 005ca8dd  5e                   pop esi
// 005ca8de  5d                   pop ebp
// 005ca8df  5b                   pop ebx
// 005ca8e0  59                   pop ecx
// 005ca8e1  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
