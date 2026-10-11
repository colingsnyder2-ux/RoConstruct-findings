// roc 2008-06 005703a0  unit: RBX::W4NormalId::?$EnumDesc  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005703a0
//
// 005703a0  51                   push ecx
// 005703a1  53                   push ebx
// 005703a2  55                   push ebp
// 005703a3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005703a7  56                   push esi
// 005703a8  57                   push edi
// 005703a9  894c2410             mov dword ptr [esp + 0x10], ecx
// 005703ad  8d4900               lea ecx, [ecx]
// 005703b0  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 005703b3  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 005703b6  7606                 jbe 0x5703be
// 005703b8  ff1590288000         call dword ptr [0x802890]
// 005703be  8b7500               mov esi, dword ptr [ebp]
// 005703c1  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 005703c4  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 005703c7  7606                 jbe 0x5703cf
// 005703c9  ff1590288000         call dword ptr [0x802890]
// 005703cf  8b4500               mov eax, dword ptr [ebp]
// 005703d2  85f6                 test esi, esi
// 005703d4  7404                 je 0x5703da
// 005703d6  3bf0                 cmp esi, eax
// 005703d8  7406                 je 0x5703e0
// 005703da  ff1590288000         call dword ptr [0x802890]
// 005703e0  3bfb                 cmp edi, ebx
// 005703e2  743d                 je 0x570421
// 005703e4  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005703ea  85f6                 test esi, esi
// 005703ec  752b                 jne 0x570419
// 005703ee  ffd3                 call ebx
// 005703f0  33c0                 xor eax, eax
// 005703f2  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005703f5  7202                 jb 0x5703f9
// 005703f7  ffd3                 call ebx
// 005703f9  8b07                 mov eax, dword ptr [edi]
// 005703fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005703ff  50                   push eax
// 00570400  e86bbdffff           call 0x56c170
// 00570405  85f6                 test esi, esi
// 00570407  7514                 jne 0x57041d
// 00570409  ffd3                 call ebx
// 0057040b  33c0                 xor eax, eax
// 0057040d  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00570410  7202                 jb 0x570414
// 00570412  ffd3                 call ebx
// 00570414  83c704               add edi, 4
// 00570417  eba8                 jmp 0x5703c1
// 00570419  8b06                 mov eax, dword ptr [esi]
// 0057041b  ebd5                 jmp 0x5703f2
// 0057041d  8b06                 mov eax, dword ptr [esi]
// 0057041f  ebec                 jmp 0x57040d
// 00570421  8b4530               mov eax, dword ptr [ebp + 0x30]
// 00570424  85c0                 test eax, eax
// 00570426  7404                 je 0x57042c
// 00570428  8be8                 mov ebp, eax
// 0057042a  eb84                 jmp 0x5703b0
// 0057042c  5f                   pop edi
// 0057042d  5e                   pop esi
// 0057042e  5d                   pop ebp
// 0057042f  5b                   pop ebx
// 00570430  59                   pop ecx
// 00570431  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_object.cpp
