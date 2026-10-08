// from server: 100% by auto
// roc 2008-06 00560c20  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00560c20
//
// 00560c20  55                   push ebp
// 00560c21  8bec                 mov ebp, esp
// 00560c23  6aff                 push -1
// 00560c25  6870ed7c00           push 0x7ced70
// 00560c2a  64a100000000         mov eax, dword ptr fs:[0]
// 00560c30  50                   push eax
// 00560c31  64892500000000       mov dword ptr fs:[0], esp
// 00560c38  83ec50               sub esp, 0x50
// 00560c3b  53                   push ebx
// 00560c3c  56                   push esi
// 00560c3d  8bf1                 mov esi, ecx
// 00560c3f  8b560c               mov edx, dword ptr [esi + 0xc]
// 00560c42  57                   push edi
// 00560c43  8965f0               mov dword ptr [ebp - 0x10], esp
// 00560c46  8975e8               mov dword ptr [ebp - 0x18], esi
// 00560c49  85d2                 test edx, edx
// 00560c4b  7504                 jne 0x560c51
// 00560c4d  33db                 xor ebx, ebx
// 00560c4f  eb08                 jmp 0x560c59
// 00560c51  8b5e14               mov ebx, dword ptr [esi + 0x14]
// 00560c54  2bda                 sub ebx, edx
// 00560c56  c1fb05               sar ebx, 5
// 00560c59  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00560c5c  85ff                 test edi, edi
// 00560c5e  0f8429020000         je 0x560e8d
// 00560c64  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00560c67  8bc1                 mov eax, ecx
// 00560c69  2bc2                 sub eax, edx
// 00560c6b  c1f805               sar eax, 5
// 00560c6e  baffffff07           mov edx, 0x7ffffff
// 00560c73  2bd0                 sub edx, eax
// 00560c75  3bd7                 cmp edx, edi
// 00560c77  7305                 jae 0x560c7e
// 00560c79  e8c260f6ff           call 0x4c6d40
// 00560c7e  8d1438               lea edx, [eax + edi]
// 00560c81  3bda                 cmp ebx, edx
// 00560c83  0f8306010000         jae 0x560d8f
// 00560c89  8bc3                 mov eax, ebx
// 00560c8b  d1e8                 shr eax, 1
// 00560c8d  b9ffffff07           mov ecx, 0x7ffffff
// 00560c92  2bc8                 sub ecx, eax
// 00560c94  3bcb                 cmp ecx, ebx
// 00560c96  7304                 jae 0x560c9c
// 00560c98  33db                 xor ebx, ebx
// 00560c9a  eb02                 jmp 0x560c9e
// 00560c9c  03d8                 add ebx, eax
// 00560c9e  3bda                 cmp ebx, edx
// 00560ca0  7302                 jae 0x560ca4
// 00560ca2  8bda                 mov ebx, edx
// 00560ca4  6a00                 push 0
// 00560ca6  53                   push ebx
// 00560ca7  e884b6ffff           call 0x55c330
// 00560cac  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00560caf  c645e400             mov byte ptr [ebp - 0x1c], 0
// 00560cb3  8b55e4               mov edx, dword ptr [ebp - 0x1c]
// 00560cb6  52                   push edx
// 00560cb7  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00560cba  52                   push edx
// 00560cbb  8d5608               lea edx, [esi + 8]
// 00560cbe  52                   push edx
// 00560cbf  50                   push eax
// 00560cc0  8945ec               mov dword ptr [ebp - 0x14], eax
// 00560cc3  894510               mov dword ptr [ebp + 0x10], eax
// 00560cc6  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00560cc9  50                   push eax
// 00560cca  51                   push ecx
// 00560ccb  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00560cd2  e849e0ffff           call 0x55ed20
// 00560cd7  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00560cda  83c420               add esp, 0x20
// 00560cdd  51                   push ecx
// 00560cde  57                   push edi
// 00560cdf  50                   push eax
// 00560ce0  8bce                 mov ecx, esi
// 00560ce2  894510               mov dword ptr [ebp + 0x10], eax
// 00560ce5  e8a6fbffff           call 0x560890
// 00560cea  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00560ced  c6451400             mov byte ptr [ebp + 0x14], 0
// 00560cf1  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00560cf4  52                   push edx
// 00560cf5  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00560cf8  52                   push edx
// 00560cf9  8d5608               lea edx, [esi + 8]
// 00560cfc  52                   push edx
// 00560cfd  50                   push eax
// 00560cfe  894510               mov dword ptr [ebp + 0x10], eax
// 00560d01  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00560d04  51                   push ecx
// 00560d05  50                   push eax
// 00560d06  e815e0ffff           call 0x55ed20
// 00560d0b  8b460c               mov eax, dword ptr [esi + 0xc]
// 00560d0e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00560d11  2bc8                 sub ecx, eax
// 00560d13  c1f905               sar ecx, 5
// 00560d16  83c418               add esp, 0x18
// 00560d19  03f9                 add edi, ecx
// 00560d1b  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00560d22  85c0                 test eax, eax
// 00560d24  741e                 je 0x560d44
// 00560d26  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00560d29  52                   push edx
// 00560d2a  8d4e08               lea ecx, [esi + 8]
// 00560d2d  51                   push ecx
// 00560d2e  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00560d31  51                   push ecx
// 00560d32  50                   push eax
// 00560d33  e878e8ffff           call 0x55f5b0
// 00560d38  8b560c               mov edx, dword ptr [esi + 0xc]
// 00560d3b  52                   push edx
// 00560d3c  e839f91300           call 0x6a067a
// 00560d41  83c414               add esp, 0x14
// 00560d44  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00560d47  c1e305               shl ebx, 5
// 00560d4a  03d8                 add ebx, eax
// 00560d4c  c1e705               shl edi, 5
// 00560d4f  03f8                 add edi, eax
// 00560d51  895e14               mov dword ptr [esi + 0x14], ebx
// 00560d54  897e10               mov dword ptr [esi + 0x10], edi
// 00560d57  89460c               mov dword ptr [esi + 0xc], eax
// 00560d5a  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00560d5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00560d64  5f                   pop edi
// 00560d65  5e                   pop esi
// 00560d66  5b                   pop ebx
// 00560d67  8be5                 mov esp, ebp
// 00560d69  5d                   pop ebp
// 00560d6a  c21000               ret 0x10
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Insert_n@?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@IAEXV?$_Vector_const_iterator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@2@IABV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
