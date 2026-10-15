// roc 2008-06 00588db0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00588db0
//
// 00588db0  6aff                 push -1
// 00588db2  68997c7c00           push 0x7c7c99
// 00588db7  64a100000000         mov eax, dword ptr fs:[0]
// 00588dbd  50                   push eax
// 00588dbe  64892500000000       mov dword ptr fs:[0], esp
// 00588dc5  83ec10               sub esp, 0x10
// 00588dc8  55                   push ebp
// 00588dc9  56                   push esi
// 00588dca  33f6                 xor esi, esi
// 00588dcc  89742408             mov dword ptr [esp + 8], esi
// 00588dd0  57                   push edi
// 00588dd1  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00588dd5  8b07                 mov eax, dword ptr [edi]
// 00588dd7  8b401c               mov eax, dword ptr [eax + 0x1c]
// 00588dda  8be9                 mov ebp, ecx
// 00588ddc  3bc6                 cmp eax, esi
// 00588dde  7405                 je 0x588de5
// 00588de0  397008               cmp dword ptr [eax + 8], esi
// 00588de3  7522                 jne 0x588e07
// 00588de5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00588de9  897004               mov dword ptr [eax + 4], esi
// 00588dec  897008               mov dword ptr [eax + 8], esi
// 00588def  c6400c00             mov byte ptr [eax + 0xc], 0
// 00588df3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00588df7  64890d00000000       mov dword ptr fs:[0], ecx
// 00588dfe  5f                   pop edi
// 00588dff  5e                   pop esi
// 00588e00  5d                   pop ebp
// 00588e01  83c41c               add esp, 0x1c
// 00588e04  c21000               ret 0x10
// 00588e07  6a04                 push 4
// 00588e09  c744241403000000     mov dword ptr [esp + 0x14], 3
// 00588e11  e80a7b1100           call 0x6a0920
// 00588e16  83c404               add esp, 4
// 00588e19  3bc6                 cmp eax, esi
// 00588e1b  740a                 je 0x588e27
// 00588e1d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00588e21  8b11                 mov edx, dword ptr [ecx]
// 00588e23  8910                 mov dword ptr [eax], edx
// 00588e25  8bf0                 mov esi, eax
// 00588e27  56                   push esi
// 00588e28  8d4c241c             lea ecx, [esp + 0x1c]
// 00588e2c  89742418             mov dword ptr [esp + 0x18], esi
// 00588e30  e8cb19eaff           call 0x42a800
// 00588e35  56                   push esi
// 00588e36  8d44241c             lea eax, [esp + 0x1c]
// 00588e3a  56                   push esi
// 00588e3b  50                   push eax
// 00588e3c  e8cf45efff           call 0x47d410
// 00588e41  83c40c               add esp, 0xc
// 00588e44  8d4f08               lea ecx, [edi + 8]
// 00588e47  51                   push ecx
// 00588e48  8d4c2438             lea ecx, [esp + 0x38]
// 00588e4c  c744242801000000     mov dword ptr [esp + 0x28], 1
// 00588e54  e8a7eefeff           call 0x577d00
// 00588e59  8b542438             mov edx, dword ptr [esp + 0x38]
// 00588e5d  52                   push edx
// 00588e5e  83ec08               sub esp, 8
// 00588e61  8bc4                 mov eax, esp
// 00588e63  8964243c             mov dword ptr [esp + 0x3c], esp
// 00588e67  50                   push eax
// 00588e68  8bcf                 mov ecx, edi
// 00588e6a  c644243402           mov byte ptr [esp + 0x34], 2
// 00588e6f  e83c87f0ff           call 0x4915b0
// 00588e74  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00588e78  8b4d00               mov ecx, dword ptr [ebp]
// 00588e7b  8d54241c             lea edx, [esp + 0x1c]
// 00588e7f  52                   push edx
// 00588e80  8d442444             lea eax, [esp + 0x44]
// 00588e84  50                   push eax
// 00588e85  57                   push edi
// 00588e86  e8751afeff           call 0x56a900
// 00588e8b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00588e8f  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00588e97  c644242401           mov byte ptr [esp + 0x24], 1
// 00588e9c  85c9                 test ecx, ecx
// 00588e9e  7408                 je 0x588ea8
// 00588ea0  8b11                 mov edx, dword ptr [ecx]
// 00588ea2  8b02                 mov eax, dword ptr [edx]
// 00588ea4  6a01                 push 1
// 00588ea6  ffd0                 call eax
// 00588ea8  8b742418             mov esi, dword ptr [esp + 0x18]
// 00588eac  c644242400           mov byte ptr [esp + 0x24], 0
// 00588eb1  85f6                 test esi, esi
// 00588eb3  742a                 je 0x588edf
// 00588eb5  8d4e04               lea ecx, [esi + 4]
// 00588eb8  83caff               or edx, 0xffffffff
// 00588ebb  f00fc111             lock xadd dword ptr [ecx], edx
// 00588ebf  751e                 jne 0x588edf
// 00588ec1  8b06                 mov eax, dword ptr [esi]
// 00588ec3  8b5004               mov edx, dword ptr [eax + 4]
// 00588ec6  8bce                 mov ecx, esi
// 00588ec8  ffd2                 call edx
// 00588eca  8d4608               lea eax, [esi + 8]
// 00588ecd  83c9ff               or ecx, 0xffffffff
// 00588ed0  f00fc108             lock xadd dword ptr [eax], ecx
// 00588ed4  7509                 jne 0x588edf
// 00588ed6  8b16                 mov edx, dword ptr [esi]
// 00588ed8  8b4208               mov eax, dword ptr [edx + 8]
// 00588edb  8bce                 mov ecx, esi
// 00588edd  ffd0                 call eax
// 00588edf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00588ee3  8bc7                 mov eax, edi
// 00588ee5  5f                   pop edi
// 00588ee6  5e                   pop esi
// 00588ee7  64890d00000000       mov dword ptr fs:[0], ecx
// 00588eee  5d                   pop ebp
// 00588eef  83c41c               add esp, 0x1c
// 00588ef2  c21000               ret 0x10
// library rbxgs/roc_unit_659050ba9a7bf80e.cpp (function ?connect@?$signal1@XVVector3@G3D@@U?$last_value@X@boost@@HU?$less@H@std@@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@4@@boost@@QAE?AVconnection@signals@2@ABHABV?$slot@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_659050ba9a7bf80e.cpp
