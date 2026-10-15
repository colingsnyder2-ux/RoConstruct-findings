// roc 2008-06 004a3020  unit: RBX::Network::Server::ClientProxy  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a3020
//
// 004a3020  6aff                 push -1
// 004a3022  68997c7c00           push 0x7c7c99
// 004a3027  64a100000000         mov eax, dword ptr fs:[0]
// 004a302d  50                   push eax
// 004a302e  64892500000000       mov dword ptr fs:[0], esp
// 004a3035  83ec10               sub esp, 0x10
// 004a3038  55                   push ebp
// 004a3039  56                   push esi
// 004a303a  33f6                 xor esi, esi
// 004a303c  89742408             mov dword ptr [esp + 8], esi
// 004a3040  57                   push edi
// 004a3041  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 004a3045  8b07                 mov eax, dword ptr [edi]
// 004a3047  8b401c               mov eax, dword ptr [eax + 0x1c]
// 004a304a  8be9                 mov ebp, ecx
// 004a304c  3bc6                 cmp eax, esi
// 004a304e  7405                 je 0x4a3055
// 004a3050  397008               cmp dword ptr [eax + 8], esi
// 004a3053  7522                 jne 0x4a3077
// 004a3055  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004a3059  897004               mov dword ptr [eax + 4], esi
// 004a305c  897008               mov dword ptr [eax + 8], esi
// 004a305f  c6400c00             mov byte ptr [eax + 0xc], 0
// 004a3063  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a3067  64890d00000000       mov dword ptr fs:[0], ecx
// 004a306e  5f                   pop edi
// 004a306f  5e                   pop esi
// 004a3070  5d                   pop ebp
// 004a3071  83c41c               add esp, 0x1c
// 004a3074  c21000               ret 0x10
// 004a3077  6a04                 push 4
// 004a3079  c744241403000000     mov dword ptr [esp + 0x14], 3
// 004a3081  e89ad81f00           call 0x6a0920
// 004a3086  83c404               add esp, 4
// 004a3089  3bc6                 cmp eax, esi
// 004a308b  740a                 je 0x4a3097
// 004a308d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004a3091  8b11                 mov edx, dword ptr [ecx]
// 004a3093  8910                 mov dword ptr [eax], edx
// 004a3095  8bf0                 mov esi, eax
// 004a3097  56                   push esi
// 004a3098  8d4c241c             lea ecx, [esp + 0x1c]
// 004a309c  89742418             mov dword ptr [esp + 0x18], esi
// 004a30a0  e85b77f8ff           call 0x42a800
// 004a30a5  56                   push esi
// 004a30a6  8d44241c             lea eax, [esp + 0x1c]
// 004a30aa  56                   push esi
// 004a30ab  50                   push eax
// 004a30ac  e85fa3fdff           call 0x47d410
// 004a30b1  83c40c               add esp, 0xc
// 004a30b4  8d4f08               lea ecx, [edi + 8]
// 004a30b7  51                   push ecx
// 004a30b8  8d4c2438             lea ecx, [esp + 0x38]
// 004a30bc  c744242801000000     mov dword ptr [esp + 0x28], 1
// 004a30c4  e87769ffff           call 0x499a40
// 004a30c9  8b542438             mov edx, dword ptr [esp + 0x38]
// 004a30cd  52                   push edx
// 004a30ce  83ec08               sub esp, 8
// 004a30d1  8bc4                 mov eax, esp
// 004a30d3  8964243c             mov dword ptr [esp + 0x3c], esp
// 004a30d7  50                   push eax
// 004a30d8  8bcf                 mov ecx, edi
// 004a30da  c644243402           mov byte ptr [esp + 0x34], 2
// 004a30df  e8cce4feff           call 0x4915b0
// 004a30e4  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 004a30e8  8b4d00               mov ecx, dword ptr [ebp]
// 004a30eb  8d54241c             lea edx, [esp + 0x1c]
// 004a30ef  52                   push edx
// 004a30f0  8d442444             lea eax, [esp + 0x44]
// 004a30f4  50                   push eax
// 004a30f5  57                   push edi
// 004a30f6  e805780c00           call 0x56a900
// 004a30fb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004a30ff  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004a3107  c644242401           mov byte ptr [esp + 0x24], 1
// 004a310c  85c9                 test ecx, ecx
// 004a310e  7408                 je 0x4a3118
// 004a3110  8b11                 mov edx, dword ptr [ecx]
// 004a3112  8b02                 mov eax, dword ptr [edx]
// 004a3114  6a01                 push 1
// 004a3116  ffd0                 call eax
// 004a3118  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a311c  c644242400           mov byte ptr [esp + 0x24], 0
// 004a3121  85f6                 test esi, esi
// 004a3123  742a                 je 0x4a314f
// 004a3125  8d4e04               lea ecx, [esi + 4]
// 004a3128  83caff               or edx, 0xffffffff
// 004a312b  f00fc111             lock xadd dword ptr [ecx], edx
// 004a312f  751e                 jne 0x4a314f
// 004a3131  8b06                 mov eax, dword ptr [esi]
// 004a3133  8b5004               mov edx, dword ptr [eax + 4]
// 004a3136  8bce                 mov ecx, esi
// 004a3138  ffd2                 call edx
// 004a313a  8d4608               lea eax, [esi + 8]
// 004a313d  83c9ff               or ecx, 0xffffffff
// 004a3140  f00fc108             lock xadd dword ptr [eax], ecx
// 004a3144  7509                 jne 0x4a314f
// 004a3146  8b16                 mov edx, dword ptr [esi]
// 004a3148  8b4208               mov eax, dword ptr [edx + 8]
// 004a314b  8bce                 mov ecx, esi
// 004a314d  ffd0                 call eax
// 004a314f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a3153  8bc7                 mov eax, edi
// 004a3155  5f                   pop edi
// 004a3156  5e                   pop esi
// 004a3157  64890d00000000       mov dword ptr fs:[0], ecx
// 004a315e  5d                   pop ebp
// 004a315f  83c41c               add esp, 0x1c
// 004a3162  c21000               ret 0x10
// library rbxgs/roc_unit_659050ba9a7bf80e.cpp (function ?connect@?$signal1@XVVector3@G3D@@U?$last_value@X@boost@@HU?$less@H@std@@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@4@@boost@@QAE?AVconnection@signals@2@ABHABV?$slot@V?$function1@XVVector3@G3D@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@2@W4connect_position@42@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_659050ba9a7bf80e.cpp
