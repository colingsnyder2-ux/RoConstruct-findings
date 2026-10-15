// roc 2008-06 0042b400  unit: EventHandler  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b400
//
// 0042b400  6aff                 push -1
// 0042b402  68997c7c00           push 0x7c7c99
// 0042b407  64a100000000         mov eax, dword ptr fs:[0]
// 0042b40d  50                   push eax
// 0042b40e  64892500000000       mov dword ptr fs:[0], esp
// 0042b415  83ec10               sub esp, 0x10
// 0042b418  55                   push ebp
// 0042b419  56                   push esi
// 0042b41a  33f6                 xor esi, esi
// 0042b41c  89742408             mov dword ptr [esp + 8], esi
// 0042b420  57                   push edi
// 0042b421  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0042b425  8b07                 mov eax, dword ptr [edi]
// 0042b427  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0042b42a  8be9                 mov ebp, ecx
// 0042b42c  3bc6                 cmp eax, esi
// 0042b42e  7405                 je 0x42b435
// 0042b430  397008               cmp dword ptr [eax + 8], esi
// 0042b433  7522                 jne 0x42b457
// 0042b435  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0042b439  897004               mov dword ptr [eax + 4], esi
// 0042b43c  897008               mov dword ptr [eax + 8], esi
// 0042b43f  c6400c00             mov byte ptr [eax + 0xc], 0
// 0042b443  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042b447  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b44e  5f                   pop edi
// 0042b44f  5e                   pop esi
// 0042b450  5d                   pop ebp
// 0042b451  83c41c               add esp, 0x1c
// 0042b454  c21000               ret 0x10
// 0042b457  6a04                 push 4
// 0042b459  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0042b461  e8ba542700           call 0x6a0920
// 0042b466  83c404               add esp, 4
// 0042b469  3bc6                 cmp eax, esi
// 0042b46b  740a                 je 0x42b477
// 0042b46d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0042b471  8b11                 mov edx, dword ptr [ecx]
// 0042b473  8910                 mov dword ptr [eax], edx
// 0042b475  8bf0                 mov esi, eax
// 0042b477  56                   push esi
// 0042b478  8d4c241c             lea ecx, [esp + 0x1c]
// 0042b47c  89742418             mov dword ptr [esp + 0x18], esi
// 0042b480  e87bf3ffff           call 0x42a800
// 0042b485  56                   push esi
// 0042b486  8d44241c             lea eax, [esp + 0x1c]
// 0042b48a  56                   push esi
// 0042b48b  50                   push eax
// 0042b48c  e87f1f0500           call 0x47d410
// 0042b491  83c40c               add esp, 0xc
// 0042b494  8d4f08               lea ecx, [edi + 8]
// 0042b497  51                   push ecx
// 0042b498  8d4c2438             lea ecx, [esp + 0x38]
// 0042b49c  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0042b4a4  e877fdffff           call 0x42b220
// 0042b4a9  8b542438             mov edx, dword ptr [esp + 0x38]
// 0042b4ad  52                   push edx
// 0042b4ae  83ec08               sub esp, 8
// 0042b4b1  8bc4                 mov eax, esp
// 0042b4b3  8964243c             mov dword ptr [esp + 0x3c], esp
// 0042b4b7  50                   push eax
// 0042b4b8  8bcf                 mov ecx, edi
// 0042b4ba  c644243402           mov byte ptr [esp + 0x34], 2
// 0042b4bf  e8ec600600           call 0x4915b0
// 0042b4c4  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0042b4c8  8b4d00               mov ecx, dword ptr [ebp]
// 0042b4cb  8d54241c             lea edx, [esp + 0x1c]
// 0042b4cf  52                   push edx
// 0042b4d0  8d442444             lea eax, [esp + 0x44]
// 0042b4d4  50                   push eax
// 0042b4d5  57                   push edi
// 0042b4d6  e825f41300           call 0x56a900
// 0042b4db  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0042b4df  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0042b4e7  c644242401           mov byte ptr [esp + 0x24], 1
// 0042b4ec  85c9                 test ecx, ecx
// 0042b4ee  7408                 je 0x42b4f8
// 0042b4f0  8b11                 mov edx, dword ptr [ecx]
// 0042b4f2  8b02                 mov eax, dword ptr [edx]
// 0042b4f4  6a01                 push 1
// 0042b4f6  ffd0                 call eax
// 0042b4f8  8b742418             mov esi, dword ptr [esp + 0x18]
// 0042b4fc  c644242400           mov byte ptr [esp + 0x24], 0
// 0042b501  85f6                 test esi, esi
// 0042b503  742a                 je 0x42b52f
// 0042b505  8d4e04               lea ecx, [esi + 4]
// 0042b508  83caff               or edx, 0xffffffff
// 0042b50b  f00fc111             lock xadd dword ptr [ecx], edx
// 0042b50f  751e                 jne 0x42b52f
// 0042b511  8b06                 mov eax, dword ptr [esi]
// 0042b513  8b5004               mov edx, dword ptr [eax + 4]
// 0042b516  8bce                 mov ecx, esi
// 0042b518  ffd2                 call edx
// 0042b51a  8d4608               lea eax, [esi + 8]
// 0042b51d  83c9ff               or ecx, 0xffffffff
// 0042b520  f00fc108             lock xadd dword ptr [eax], ecx
// 0042b524  7509                 jne 0x42b52f
// 0042b526  8b16                 mov edx, dword ptr [esi]
// 0042b528  8b4208               mov eax, dword ptr [edx + 8]
// 0042b52b  8bce                 mov ecx, esi
// 0042b52d  ffd0                 call eax
// 0042b52f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0042b533  8bc7                 mov eax, edi
// 0042b535  5f                   pop edi
// 0042b536  5e                   pop esi
// 0042b537  64890d00000000       mov dword ptr fs:[0], ecx
// 0042b53e  5d                   pop ebp
// 0042b53f  83c41c               add esp, 0x1c
// 0042b542  c21000               ret 0x10
// library rbxgs/roc_unit_659050ba9a7bf80e.cpp (function ?connect@?$signal1@XVVector3@G3D@@U?$last_value@X@boost@@HU?$less@H@std@@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@4@@boost@@QAE?AVconnection@signals@2@ABHABV?$slot@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_659050ba9a7bf80e.cpp
