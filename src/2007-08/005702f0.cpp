// roc 2007-08 005702f0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005702f0
//
// 005702f0  6aff                 push -1
// 005702f2  68c81a7500           push 0x751ac8
// 005702f7  64a100000000         mov eax, dword ptr fs:[0]
// 005702fd  50                   push eax
// 005702fe  64892500000000       mov dword ptr fs:[0], esp
// 00570305  83ec10               sub esp, 0x10
// 00570308  53                   push ebx
// 00570309  55                   push ebp
// 0057030a  56                   push esi
// 0057030b  57                   push edi
// 0057030c  8bf1                 mov esi, ecx
// 0057030e  e88dfdffff           call 0x5700a0
// 00570313  8bc8                 mov ecx, eax
// 00570315  89442410             mov dword ptr [esp + 0x10], eax
// 00570319  e832541b00           call 0x725750
// 0057031e  c644241401           mov byte ptr [esp + 0x14], 1
// 00570323  8b5e08               mov ebx, dword ptr [esi + 8]
// 00570326  395e04               cmp dword ptr [esi + 4], ebx
// 00570329  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 0057032f  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00570337  7602                 jbe 0x57033b
// 00570339  ffd5                 call ebp
// 0057033b  8b7e04               mov edi, dword ptr [esi + 4]
// 0057033e  3b7e08               cmp edi, dword ptr [esi + 8]
// 00570341  7602                 jbe 0x570345
// 00570343  ffd5                 call ebp
// 00570345  6a00                 push 0
// 00570347  6860005700           push 0x570060
// 0057034c  8d442438             lea eax, [esp + 0x38]
// 00570350  50                   push eax
// 00570351  53                   push ebx
// 00570352  57                   push edi
// 00570353  897c2430             mov dword ptr [esp + 0x30], edi
// 00570357  e844feffff           call 0x5701a0
// 0057035c  8b7e08               mov edi, dword ptr [esi + 8]
// 0057035f  83c414               add esp, 0x14
// 00570362  397e04               cmp dword ptr [esi + 4], edi
// 00570365  8bd8                 mov ebx, eax
// 00570367  7602                 jbe 0x57036b
// 00570369  ffd5                 call ebp
// 0057036b  85f6                 test esi, esi
// 0057036d  7404                 je 0x570373
// 0057036f  3bf6                 cmp esi, esi
// 00570371  7402                 je 0x570375
// 00570373  ffd5                 call ebp
// 00570375  3bdf                 cmp ebx, edi
// 00570377  7415                 je 0x57038e
// 00570379  85f6                 test esi, esi
// 0057037b  7502                 jne 0x57037f
// 0057037d  ffd5                 call ebp
// 0057037f  3b5e08               cmp ebx, dword ptr [esi + 8]
// 00570382  7202                 jb 0x570386
// 00570384  ffd5                 call ebp
// 00570386  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0057038a  390b                 cmp dword ptr [ebx], ecx
// 0057038c  7413                 je 0x5703a1
// 0057038e  8d542430             lea edx, [esp + 0x30]
// 00570392  52                   push edx
// 00570393  53                   push ebx
// 00570394  56                   push esi
// 00570395  8d442424             lea eax, [esp + 0x24]
// 00570399  50                   push eax
// 0057039a  8bce                 mov ecx, esi
// 0057039c  e8dfdb0500           call 0x5cdf80
// 005703a1  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005703a4  83c610               add esi, 0x10
// 005703a7  3b7e08               cmp edi, dword ptr [esi + 8]
// 005703aa  7604                 jbe 0x5703b0
// 005703ac  ffd5                 call ebp
// 005703ae  8bff                 mov edi, edi
// 005703b0  8b5e08               mov ebx, dword ptr [esi + 8]
// 005703b3  395e04               cmp dword ptr [esi + 4], ebx
// 005703b6  7602                 jbe 0x5703ba
// 005703b8  ffd5                 call ebp
// 005703ba  3bf6                 cmp esi, esi
// 005703bc  7402                 je 0x5703c0
// 005703be  ffd5                 call ebp
// 005703c0  3bfb                 cmp edi, ebx
// 005703c2  741f                 je 0x5703e3
// 005703c4  3b7e08               cmp edi, dword ptr [esi + 8]
// 005703c7  7202                 jb 0x5703cb
// 005703c9  ffd5                 call ebp
// 005703cb  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005703cf  51                   push ecx
// 005703d0  8b0f                 mov ecx, dword ptr [edi]
// 005703d2  e819ffffff           call 0x5702f0
// 005703d7  3b7e08               cmp edi, dword ptr [esi + 8]
// 005703da  7202                 jb 0x5703de
// 005703dc  ffd5                 call ebp
// 005703de  83c704               add edi, 4
// 005703e1  ebcd                 jmp 0x5703b0
// 005703e3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005703e7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005703ef  e87c531b00           call 0x725770
// 005703f4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005703f8  5f                   pop edi
// 005703f9  5e                   pop esi
// 005703fa  5d                   pop ebp
// 005703fb  5b                   pop ebx
// 005703fc  64890d00000000       mov dword ptr fs:[0], ecx
// 00570403  83c41c               add esp, 0x1c
// 00570406  c20400               ret 4
// library openrbx-client/App\reflection\reflection_function.cpp (function ?declare@?$MemberDescriptorContainer@VFunctionDescriptor@Reflection@RBX@@@Reflection@RBX@@QAEXPAVFunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/reflection/reflection_function.cpp
