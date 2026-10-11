// roc 2008-06 00570440  unit: RBX::W4NormalId::?$EnumDesc  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570440
//
// 00570440  51                   push ecx
// 00570441  53                   push ebx
// 00570442  55                   push ebp
// 00570443  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00570447  56                   push esi
// 00570448  57                   push edi
// 00570449  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057044d  8d4900               lea ecx, [ecx]
// 00570450  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00570453  3b7d10               cmp edi, dword ptr [ebp + 0x10]
// 00570456  7606                 jbe 0x57045e
// 00570458  ff1590288000         call dword ptr [0x802890]
// 0057045e  8b7500               mov esi, dword ptr [ebp]
// 00570461  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00570464  395d0c               cmp dword ptr [ebp + 0xc], ebx
// 00570467  7606                 jbe 0x57046f
// 00570469  ff1590288000         call dword ptr [0x802890]
// 0057046f  8b4500               mov eax, dword ptr [ebp]
// 00570472  85f6                 test esi, esi
// 00570474  7404                 je 0x57047a
// 00570476  3bf0                 cmp esi, eax
// 00570478  7406                 je 0x570480
// 0057047a  ff1590288000         call dword ptr [0x802890]
// 00570480  3bfb                 cmp edi, ebx
// 00570482  743d                 je 0x5704c1
// 00570484  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0057048a  85f6                 test esi, esi
// 0057048c  752b                 jne 0x5704b9
// 0057048e  ffd3                 call ebx
// 00570490  33c0                 xor eax, eax
// 00570492  3b7810               cmp edi, dword ptr [eax + 0x10]
// 00570495  7202                 jb 0x570499
// 00570497  ffd3                 call ebx
// 00570499  8b07                 mov eax, dword ptr [edi]
// 0057049b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057049f  50                   push eax
// 005704a0  e85bb2ffff           call 0x56b700
// 005704a5  85f6                 test esi, esi
// 005704a7  7514                 jne 0x5704bd
// 005704a9  ffd3                 call ebx
// 005704ab  33c0                 xor eax, eax
// 005704ad  3b7810               cmp edi, dword ptr [eax + 0x10]
// 005704b0  7202                 jb 0x5704b4
// 005704b2  ffd3                 call ebx
// 005704b4  83c704               add edi, 4
// 005704b7  eba8                 jmp 0x570461
// 005704b9  8b06                 mov eax, dword ptr [esi]
// 005704bb  ebd5                 jmp 0x570492
// 005704bd  8b06                 mov eax, dword ptr [esi]
// 005704bf  ebec                 jmp 0x5704ad
// 005704c1  8b4530               mov eax, dword ptr [ebp + 0x30]
// 005704c4  85c0                 test eax, eax
// 005704c6  7404                 je 0x5704cc
// 005704c8  8be8                 mov ebp, eax
// 005704ca  eb84                 jmp 0x570450
// 005704cc  5f                   pop edi
// 005704cd  5e                   pop esi
// 005704ce  5d                   pop ebp
// 005704cf  5b                   pop ebx
// 005704d0  59                   pop ecx
// 005704d1  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_object.cpp
