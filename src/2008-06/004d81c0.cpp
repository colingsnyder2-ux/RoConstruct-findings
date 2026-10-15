// roc 2008-06 004d81c0  unit: RBX::RenderBase::SimpleSceneManager  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d81c0
//
// 004d81c0  6aff                 push -1
// 004d81c2  68997c7c00           push 0x7c7c99
// 004d81c7  64a100000000         mov eax, dword ptr fs:[0]
// 004d81cd  50                   push eax
// 004d81ce  64892500000000       mov dword ptr fs:[0], esp
// 004d81d5  83ec10               sub esp, 0x10
// 004d81d8  55                   push ebp
// 004d81d9  56                   push esi
// 004d81da  33f6                 xor esi, esi
// 004d81dc  89742408             mov dword ptr [esp + 8], esi
// 004d81e0  57                   push edi
// 004d81e1  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004d81e5  8b07                 mov eax, dword ptr [edi]
// 004d81e7  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004d81ea  8be9                 mov ebp, ecx
// 004d81ec  3bc6                 cmp eax, esi
// 004d81ee  7405                 je 0x4d81f5
// 004d81f0  397008               cmp dword ptr [eax + 8], esi
// 004d81f3  7522                 jne 0x4d8217
// 004d81f5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004d81f9  897004               mov dword ptr [eax + 4], esi
// 004d81fc  897008               mov dword ptr [eax + 8], esi
// 004d81ff  c6400c00             mov byte ptr [eax + 0xc], 0
// 004d8203  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d8207  64890d00000000       mov dword ptr fs:[0], ecx
// 004d820e  5f                   pop edi
// 004d820f  5e                   pop esi
// 004d8210  5d                   pop ebp
// 004d8211  83c41c               add esp, 0x1c
// 004d8214  c21000               ret 0x10
// 004d8217  6a04                 push 4
// 004d8219  c744241403000000     mov dword ptr [esp + 0x14], 3
// 004d8221  e8fa861c00           call 0x6a0920
// 004d8226  83c404               add esp, 4
// 004d8229  3bc6                 cmp eax, esi
// 004d822b  740a                 je 0x4d8237
// 004d822d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004d8231  8b11                 mov edx, dword ptr [ecx]
// 004d8233  8910                 mov dword ptr [eax], edx
// 004d8235  8bf0                 mov esi, eax
// 004d8237  56                   push esi
// 004d8238  8d4c241c             lea ecx, [esp + 0x1c]
// 004d823c  89742418             mov dword ptr [esp + 0x18], esi
// 004d8240  e8bb25f5ff           call 0x42a800
// 004d8245  56                   push esi
// 004d8246  8d44241c             lea eax, [esp + 0x1c]
// 004d824a  56                   push esi
// 004d824b  50                   push eax
// 004d824c  e8bf51faff           call 0x47d410
// 004d8251  83c40c               add esp, 0xc
// 004d8254  8d4f08               lea ecx, [edi + 8]
// 004d8257  51                   push ecx
// 004d8258  8d4c2438             lea ecx, [esp + 0x38]
// 004d825c  c744242801000000     mov dword ptr [esp + 0x28], 1
// 004d8264  e8e7faffff           call 0x4d7d50
// 004d8269  8b542438             mov edx, dword ptr [esp + 0x38]
// 004d826d  52                   push edx
// 004d826e  83ec08               sub esp, 8
// 004d8271  8bc4                 mov eax, esp
// 004d8273  8964243c             mov dword ptr [esp + 0x3c], esp
// 004d8277  50                   push eax
// 004d8278  8bcf                 mov ecx, edi
// 004d827a  c644243402           mov byte ptr [esp + 0x34], 2
// 004d827f  e82c93fbff           call 0x4915b0
// 004d8284  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004d8288  8b4d00               mov ecx, dword ptr [ebp]
// 004d828b  8d54241c             lea edx, [esp + 0x1c]
// 004d828f  52                   push edx
// 004d8290  8d442444             lea eax, [esp + 0x44]
// 004d8294  50                   push eax
// 004d8295  57                   push edi
// 004d8296  e865260900           call 0x56a900
// 004d829b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004d829f  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004d82a7  c644242401           mov byte ptr [esp + 0x24], 1
// 004d82ac  85c9                 test ecx, ecx
// 004d82ae  7408                 je 0x4d82b8
// 004d82b0  8b11                 mov edx, dword ptr [ecx]
// 004d82b2  8b02                 mov eax, dword ptr [edx]
// 004d82b4  6a01                 push 1
// 004d82b6  ffd0                 call eax
// 004d82b8  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d82bc  c644242400           mov byte ptr [esp + 0x24], 0
// 004d82c1  85f6                 test esi, esi
// 004d82c3  742a                 je 0x4d82ef
// 004d82c5  8d4e04               lea ecx, [esi + 4]
// 004d82c8  83caff               or edx, 0xffffffff
// 004d82cb  f00fc111             lock xadd dword ptr [ecx], edx
// 004d82cf  751e                 jne 0x4d82ef
// 004d82d1  8b06                 mov eax, dword ptr [esi]
// 004d82d3  8b5004               mov edx, dword ptr [eax + 4]
// 004d82d6  8bce                 mov ecx, esi
// 004d82d8  ffd2                 call edx
// 004d82da  8d4608               lea eax, [esi + 8]
// 004d82dd  83c9ff               or ecx, 0xffffffff
// 004d82e0  f00fc108             lock xadd dword ptr [eax], ecx
// 004d82e4  7509                 jne 0x4d82ef
// 004d82e6  8b16                 mov edx, dword ptr [esi]
// 004d82e8  8b4208               mov eax, dword ptr [edx + 8]
// 004d82eb  8bce                 mov ecx, esi
// 004d82ed  ffd0                 call eax
// 004d82ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004d82f3  8bc7                 mov eax, edi
// 004d82f5  5f                   pop edi
// 004d82f6  5e                   pop esi
// 004d82f7  64890d00000000       mov dword ptr fs:[0], ecx
// 004d82fe  5d                   pop ebp
// 004d82ff  83c41c               add esp, 0x1c
// 004d8302  c21000               ret 0x10
// library rbxgs/roc_unit_659050ba9a7bf80e.cpp (function ?connect@?$signal1@XVVector3@G3D@@U?$last_value@X@boost@@HU?$less@H@std@@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@4@@boost@@QAE?AVconnection@signals@2@ABHABV?$slot@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_659050ba9a7bf80e.cpp
