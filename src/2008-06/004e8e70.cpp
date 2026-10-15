// roc 2008-06 004e8e70  unit: RBX::Network::Players::Plugin  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e8e70
//
// 004e8e70  6aff                 push -1
// 004e8e72  68997c7c00           push 0x7c7c99
// 004e8e77  64a100000000         mov eax, dword ptr fs:[0]
// 004e8e7d  50                   push eax
// 004e8e7e  64892500000000       mov dword ptr fs:[0], esp
// 004e8e85  83ec10               sub esp, 0x10
// 004e8e88  55                   push ebp
// 004e8e89  56                   push esi
// 004e8e8a  33f6                 xor esi, esi
// 004e8e8c  89742408             mov dword ptr [esp + 8], esi
// 004e8e90  57                   push edi
// 004e8e91  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004e8e95  8b07                 mov eax, dword ptr [edi]
// 004e8e97  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004e8e9a  8be9                 mov ebp, ecx
// 004e8e9c  3bc6                 cmp eax, esi
// 004e8e9e  7405                 je 0x4e8ea5
// 004e8ea0  397008               cmp dword ptr [eax + 8], esi
// 004e8ea3  7522                 jne 0x4e8ec7
// 004e8ea5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004e8ea9  897004               mov dword ptr [eax + 4], esi
// 004e8eac  897008               mov dword ptr [eax + 8], esi
// 004e8eaf  c6400c00             mov byte ptr [eax + 0xc], 0
// 004e8eb3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e8eb7  64890d00000000       mov dword ptr fs:[0], ecx
// 004e8ebe  5f                   pop edi
// 004e8ebf  5e                   pop esi
// 004e8ec0  5d                   pop ebp
// 004e8ec1  83c41c               add esp, 0x1c
// 004e8ec4  c21000               ret 0x10
// 004e8ec7  6a04                 push 4
// 004e8ec9  c744241403000000     mov dword ptr [esp + 0x14], 3
// 004e8ed1  e84a7a1b00           call 0x6a0920
// 004e8ed6  83c404               add esp, 4
// 004e8ed9  3bc6                 cmp eax, esi
// 004e8edb  740a                 je 0x4e8ee7
// 004e8edd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004e8ee1  8b11                 mov edx, dword ptr [ecx]
// 004e8ee3  8910                 mov dword ptr [eax], edx
// 004e8ee5  8bf0                 mov esi, eax
// 004e8ee7  56                   push esi
// 004e8ee8  8d4c241c             lea ecx, [esp + 0x1c]
// 004e8eec  89742418             mov dword ptr [esp + 0x18], esi
// 004e8ef0  e80b19f4ff           call 0x42a800
// 004e8ef5  56                   push esi
// 004e8ef6  8d44241c             lea eax, [esp + 0x1c]
// 004e8efa  56                   push esi
// 004e8efb  50                   push eax
// 004e8efc  e80f45f9ff           call 0x47d410
// 004e8f01  83c40c               add esp, 0xc
// 004e8f04  8d4f08               lea ecx, [edi + 8]
// 004e8f07  51                   push ecx
// 004e8f08  8d4c2438             lea ecx, [esp + 0x38]
// 004e8f0c  c744242801000000     mov dword ptr [esp + 0x28], 1
// 004e8f14  e8878bfcff           call 0x4b1aa0
// 004e8f19  8b542438             mov edx, dword ptr [esp + 0x38]
// 004e8f1d  52                   push edx
// 004e8f1e  83ec08               sub esp, 8
// 004e8f21  8bc4                 mov eax, esp
// 004e8f23  8964243c             mov dword ptr [esp + 0x3c], esp
// 004e8f27  50                   push eax
// 004e8f28  8bcf                 mov ecx, edi
// 004e8f2a  c644243402           mov byte ptr [esp + 0x34], 2
// 004e8f2f  e87c86faff           call 0x4915b0
// 004e8f34  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004e8f38  8b4d00               mov ecx, dword ptr [ebp]
// 004e8f3b  8d54241c             lea edx, [esp + 0x1c]
// 004e8f3f  52                   push edx
// 004e8f40  8d442444             lea eax, [esp + 0x44]
// 004e8f44  50                   push eax
// 004e8f45  57                   push edi
// 004e8f46  e8b5190800           call 0x56a900
// 004e8f4b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004e8f4f  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004e8f57  c644242401           mov byte ptr [esp + 0x24], 1
// 004e8f5c  85c9                 test ecx, ecx
// 004e8f5e  7408                 je 0x4e8f68
// 004e8f60  8b11                 mov edx, dword ptr [ecx]
// 004e8f62  8b02                 mov eax, dword ptr [edx]
// 004e8f64  6a01                 push 1
// 004e8f66  ffd0                 call eax
// 004e8f68  8b742418             mov esi, dword ptr [esp + 0x18]
// 004e8f6c  c644242400           mov byte ptr [esp + 0x24], 0
// 004e8f71  85f6                 test esi, esi
// 004e8f73  742a                 je 0x4e8f9f
// 004e8f75  8d4e04               lea ecx, [esi + 4]
// 004e8f78  83caff               or edx, 0xffffffff
// 004e8f7b  f00fc111             lock xadd dword ptr [ecx], edx
// 004e8f7f  751e                 jne 0x4e8f9f
// 004e8f81  8b06                 mov eax, dword ptr [esi]
// 004e8f83  8b5004               mov edx, dword ptr [eax + 4]
// 004e8f86  8bce                 mov ecx, esi
// 004e8f88  ffd2                 call edx
// 004e8f8a  8d4608               lea eax, [esi + 8]
// 004e8f8d  83c9ff               or ecx, 0xffffffff
// 004e8f90  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8f94  7509                 jne 0x4e8f9f
// 004e8f96  8b16                 mov edx, dword ptr [esi]
// 004e8f98  8b4208               mov eax, dword ptr [edx + 8]
// 004e8f9b  8bce                 mov ecx, esi
// 004e8f9d  ffd0                 call eax
// 004e8f9f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004e8fa3  8bc7                 mov eax, edi
// 004e8fa5  5f                   pop edi
// 004e8fa6  5e                   pop esi
// 004e8fa7  64890d00000000       mov dword ptr fs:[0], ecx
// 004e8fae  5d                   pop ebp
// 004e8faf  83c41c               add esp, 0x1c
// 004e8fb2  c21000               ret 0x10
// library rbxgs/roc_unit_659050ba9a7bf80e.cpp (function ?connect@?$signal1@XVVector3@G3D@@U?$last_value@X@boost@@HU?$less@H@std@@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@4@@boost@@QAE?AVconnection@signals@2@ABHABV?$slot@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_659050ba9a7bf80e.cpp
