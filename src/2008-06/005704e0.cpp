// roc 2008-06 005704e0  unit: RBX::W4NormalId::?$EnumDesc  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005704e0
//
// 005704e0  51                   push ecx
// 005704e1  53                   push ebx
// 005704e2  55                   push ebp
// 005704e3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005704e7  56                   push esi
// 005704e8  57                   push edi
// 005704e9  894c2410             mov dword ptr [esp + 0x10], ecx
// 005704ed  8d4900               lea ecx, [ecx]
// 005704f0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005704f3  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005704f6  7606                 jbe 0x5704fe
// 005704f8  ff1590288000         call dword ptr [0x802890]
// 005704fe  8b7500               mov esi, dword ptr [ebp]
// 00570501  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00570504  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00570507  7606                 jbe 0x57050f
// 00570509  ff1590288000         call dword ptr [0x802890]
// 0057050f  8b4500               mov eax, dword ptr [ebp]
// 00570512  85f6                 test esi, esi
// 00570514  7404                 je 0x57051a
// 00570516  3bf0                 cmp esi, eax
// 00570518  7406                 je 0x570520
// 0057051a  ff1590288000         call dword ptr [0x802890]
// 00570520  3bfb                 cmp edi, ebx
// 00570522  743d                 je 0x570561
// 00570524  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0057052a  85f6                 test esi, esi
// 0057052c  752b                 jne 0x570559
// 0057052e  ffd3                 call ebx
// 00570530  33c0                 xor eax, eax
// 00570532  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00570535  7202                 jb 0x570539
// 00570537  ffd3                 call ebx
// 00570539  8b07                 mov eax, dword ptr [edi]
// 0057053b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057053f  50                   push eax
// 00570540  e8abfaffff           call 0x56fff0
// 00570545  85f6                 test esi, esi
// 00570547  7514                 jne 0x57055d
// 00570549  ffd3                 call ebx
// 0057054b  33c0                 xor eax, eax
// 0057054d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00570550  7202                 jb 0x570554
// 00570552  ffd3                 call ebx
// 00570554  83c704               add edi, 4
// 00570557  eba8                 jmp 0x570501
// 00570559  8b06                 mov eax, dword ptr [esi]
// 0057055b  ebd5                 jmp 0x570532
// 0057055d  8b06                 mov eax, dword ptr [esi]
// 0057055f  ebec                 jmp 0x57054d
// 00570561  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00570564  85c0                 test eax, eax
// 00570566  7404                 je 0x57056c
// 00570568  8be8                 mov ebp, eax
// 0057056a  eb84                 jmp 0x5704f0
// 0057056c  5f                   pop edi
// 0057056d  5e                   pop esi
// 0057056e  5d                   pop ebp
// 0057056f  5b                   pop ebx
// 00570570  59                   pop ecx
// 00570571  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
