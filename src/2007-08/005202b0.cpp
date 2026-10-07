// roc 2007-08 005202b0  unit: seg_00520000  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005202b0
//
// 005202b0  51                   push ecx
// 005202b1  53                   push ebx
// 005202b2  57                   push edi
// 005202b3  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 005202b9  56                   push esi
// 005202ba  e821fdffff           call 0x51ffe0
// 005202bf  83c404               add esp, 4
// 005202c2  8bde                 mov ebx, esi
// 005202c4  e847ffffff           call 0x520210
// 005202c9  33db                 xor ebx, ebx
// 005202cb  8bd6                 mov edx, esi
// 005202cd  895f0c               mov dword ptr [edi + 0xc], ebx
// 005202d0  e88bfcffff           call 0x51ff60
// 005202d5  884710               mov byte ptr [edi + 0x10], al
// 005202d8  895f14               mov dword ptr [edi + 0x14], ebx
// 005202db  895f18               mov dword ptr [edi + 0x18], ebx
// 005202de  8a464a               mov al, byte ptr [esi + 0x4a]
// 005202e1  3ac3                 cmp al, bl
// 005202e3  7405                 je 0x5202ea
// 005202e5  385e40               cmp byte ptr [esi + 0x40], bl
// 005202e8  7509                 jne 0x5202f3
// 005202ea  885e58               mov byte ptr [esi + 0x58], bl
// 005202ed  885e59               mov byte ptr [esi + 0x59], bl
// 005202f0  885e5a               mov byte ptr [esi + 0x5a], bl
// 005202f3  3ac3                 cmp al, bl
// 005202f5  745e                 je 0x520355
// 005202f7  385e41               cmp byte ptr [esi + 0x41], bl
// 005202fa  7413                 je 0x52030f
// 005202fc  8b06                 mov eax, dword ptr [esi]
// 005202fe  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00520305  8b0e                 mov ecx, dword ptr [esi]
// 00520307  8b11                 mov edx, dword ptr [ecx]
// 00520309  56                   push esi
// 0052030a  ffd2                 call edx
// 0052030c  83c404               add esp, 4
// 0052030f  837e6403             cmp dword ptr [esi + 0x64], 3
// 00520313  7455                 je 0x52036a
// 00520315  885e59               mov byte ptr [esi + 0x59], bl
// 00520318  885e5a               mov byte ptr [esi + 0x5a], bl
// 0052031b  895e74               mov dword ptr [esi + 0x74], ebx
// 0052031e  c6465801             mov byte ptr [esi + 0x58], 1
// 00520322  385e58               cmp byte ptr [esi + 0x58], bl
// 00520325  7412                 je 0x520339
// 00520327  56                   push esi
// 00520328  e8b3aa0000           call 0x52ade0
// 0052032d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00520333  83c404               add esp, 4
// 00520336  894714               mov dword ptr [edi + 0x14], eax
// 00520339  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0052033c  7505                 jne 0x520343
// 0052033e  385e59               cmp byte ptr [esi + 0x59], bl
// 00520341  7412                 je 0x520355
// 00520343  56                   push esi
// 00520344  e8c79d0000           call 0x52a110
// 00520349  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0052034f  83c404               add esp, 4
// 00520352  894f18               mov dword ptr [edi + 0x18], ecx
// 00520355  385e41               cmp byte ptr [esi + 0x41], bl
// 00520358  7542                 jne 0x52039c
// 0052035a  385f10               cmp byte ptr [edi + 0x10], bl
// 0052035d  56                   push esi
// 0052035e  7420                 je 0x520380
// 00520360  e8bb8a0000           call 0x528e20
// 00520365  83c404               add esp, 4
// 00520368  eb24                 jmp 0x52038e
// 0052036a  395e74               cmp dword ptr [esi + 0x74], ebx
// 0052036d  7406                 je 0x520375
// 0052036f  c6465901             mov byte ptr [esi + 0x59], 1
// 00520373  ebad                 jmp 0x520322
// 00520375  385e50               cmp byte ptr [esi + 0x50], bl
// 00520378  74a4                 je 0x52031e
// 0052037a  c6465a01             mov byte ptr [esi + 0x5a], 1
// 0052037e  eba2                 jmp 0x520322
// 00520380  e89b830000           call 0x528720
// 00520385  56                   push esi
// 00520386  e8357d0000           call 0x5280c0
// 0052038b  83c408               add esp, 8
// 0052038e  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 00520392  52                   push edx
// 00520393  56                   push esi
// 00520394  e8b7770000           call 0x527b50
// 00520399  83c408               add esp, 8
// 0052039c  56                   push esi
// 0052039d  e85e740000           call 0x527800
// 005203a2  83c404               add esp, 4
// 005203a5  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 005203ab  56                   push esi
// 005203ac  7411                 je 0x5203bf
// 005203ae  8b06                 mov eax, dword ptr [esi]
// 005203b0  c7401401000000       mov dword ptr [eax + 0x14], 1
// 005203b7  8b0e                 mov ecx, dword ptr [esi]
// 005203b9  8b11                 mov edx, dword ptr [ecx]
// 005203bb  ffd2                 call edx
// 005203bd  eb14                 jmp 0x5203d3
// 005203bf  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 005203c5  7407                 je 0x5203ce
// 005203c7  e8a4700000           call 0x527470
// 005203cc  eb05                 jmp 0x5203d3
// 005203ce  e8cd630000           call 0x5267a0
// 005203d3  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 005203d9  83c404               add esp, 4
// 005203dc  385810               cmp byte ptr [eax + 0x10], bl
// 005203df  7509                 jne 0x5203ea
// 005203e1  385e40               cmp byte ptr [esi + 0x40], bl
// 005203e4  885c2408             mov byte ptr [esp + 8], bl
// 005203e8  7405                 je 0x5203ef
// 005203ea  c644240801           mov byte ptr [esp + 8], 1
// 005203ef  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005203f3  51                   push ecx
// 005203f4  56                   push esi
// 005203f5  e856570000           call 0x525b50
// 005203fa  83c408               add esp, 8
// 005203fd  385e41               cmp byte ptr [esi + 0x41], bl
// 00520400  750a                 jne 0x52040c
// 00520402  53                   push ebx
// 00520403  56                   push esi
// 00520404  e837480000           call 0x524c40
// 00520409  83c408               add esp, 8
// 0052040c  8b5604               mov edx, dword ptr [esi + 4]
// 0052040f  8b4218               mov eax, dword ptr [edx + 0x18]
// 00520412  56                   push esi
// 00520413  ffd0                 call eax
// 00520415  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0052041b  8b5108               mov edx, dword ptr [ecx + 8]
// 0052041e  56                   push esi
// 0052041f  ffd2                 call edx
// 00520421  8b4e08               mov ecx, dword ptr [esi + 8]
// 00520424  83c408               add esp, 8
// 00520427  3bcb                 cmp ecx, ebx
// 00520429  744c                 je 0x520477
// 0052042b  385e40               cmp byte ptr [esi + 0x40], bl
// 0052042e  7547                 jne 0x520477
// 00520430  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00520436  385810               cmp byte ptr [eax + 0x10], bl
// 00520439  743c                 je 0x520477
// 0052043b  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 00520441  8b4624               mov eax, dword ptr [esi + 0x24]
// 00520444  7404                 je 0x52044a
// 00520446  8d444002             lea eax, [eax + eax*2 + 2]
// 0052044a  895904               mov dword ptr [ecx + 4], ebx
// 0052044d  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00520453  8b5608               mov edx, dword ptr [esi + 8]
// 00520456  0fafc8               imul ecx, eax
// 00520459  894a08               mov dword ptr [edx + 8], ecx
// 0052045c  8b4608               mov eax, dword ptr [esi + 8]
// 0052045f  89580c               mov dword ptr [eax + 0xc], ebx
// 00520462  8b5608               mov edx, dword ptr [esi + 8]
// 00520465  33c9                 xor ecx, ecx
// 00520467  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0052046a  0f95c1               setne cl
// 0052046d  83c102               add ecx, 2
// 00520470  894a10               mov dword ptr [edx + 0x10], ecx
// 00520473  83470c01             add dword ptr [edi + 0xc], 1
// 00520477  5f                   pop edi
// 00520478  5b                   pop ebx
// 00520479  59                   pop ecx
// 0052047a  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
