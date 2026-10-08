// from server: 100% by auto
// roc 2010-06 00576fe0  unit: seg_00570000  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576fe0
//
// 00576fe0  51                   push ecx
// 00576fe1  53                   push ebx
// 00576fe2  57                   push edi
// 00576fe3  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 00576fe9  56                   push esi
// 00576fea  e831fdffff           call 0x576d20
// 00576fef  83c404               add esp, 4
// 00576ff2  8bde                 mov ebx, esi
// 00576ff4  e857ffffff           call 0x576f50
// 00576ff9  33db                 xor ebx, ebx
// 00576ffb  8bd6                 mov edx, esi
// 00576ffd  895f0c               mov dword ptr [edi + 0xc], ebx
// 00577000  e89bfcffff           call 0x576ca0
// 00577005  884710               mov byte ptr [edi + 0x10], al
// 00577008  895f14               mov dword ptr [edi + 0x14], ebx
// 0057700b  895f18               mov dword ptr [edi + 0x18], ebx
// 0057700e  8a464a               mov al, byte ptr [esi + 0x4a]
// 00577011  3ac3                 cmp al, bl
// 00577013  7405                 je 0x57701a
// 00577015  385e40               cmp byte ptr [esi + 0x40], bl
// 00577018  7509                 jne 0x577023
// 0057701a  885e58               mov byte ptr [esi + 0x58], bl
// 0057701d  885e59               mov byte ptr [esi + 0x59], bl
// 00577020  885e5a               mov byte ptr [esi + 0x5a], bl
// 00577023  3ac3                 cmp al, bl
// 00577025  745e                 je 0x577085
// 00577027  385e41               cmp byte ptr [esi + 0x41], bl
// 0057702a  7413                 je 0x57703f
// 0057702c  8b06                 mov eax, dword ptr [esi]
// 0057702e  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00577035  8b0e                 mov ecx, dword ptr [esi]
// 00577037  8b11                 mov edx, dword ptr [ecx]
// 00577039  56                   push esi
// 0057703a  ffd2                 call edx
// 0057703c  83c404               add esp, 4
// 0057703f  837e6403             cmp dword ptr [esi + 0x64], 3
// 00577043  7455                 je 0x57709a
// 00577045  885e59               mov byte ptr [esi + 0x59], bl
// 00577048  885e5a               mov byte ptr [esi + 0x5a], bl
// 0057704b  895e74               mov dword ptr [esi + 0x74], ebx
// 0057704e  c6465801             mov byte ptr [esi + 0x58], 1
// 00577052  385e58               cmp byte ptr [esi + 0x58], bl
// 00577055  7412                 je 0x577069
// 00577057  56                   push esi
// 00577058  e883dc0000           call 0x584ce0
// 0057705d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00577063  83c404               add esp, 4
// 00577066  894714               mov dword ptr [edi + 0x14], eax
// 00577069  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0057706c  7505                 jne 0x577073
// 0057706e  385e59               cmp byte ptr [esi + 0x59], bl
// 00577071  7412                 je 0x577085
// 00577073  56                   push esi
// 00577074  e807d00000           call 0x584080
// 00577079  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0057707f  83c404               add esp, 4
// 00577082  894f18               mov dword ptr [edi + 0x18], ecx
// 00577085  385e41               cmp byte ptr [esi + 0x41], bl
// 00577088  7542                 jne 0x5770cc
// 0057708a  56                   push esi
// 0057708b  385f10               cmp byte ptr [edi + 0x10], bl
// 0057708e  7420                 je 0x5770b0
// 00577090  e88bbd0000           call 0x582e20
// 00577095  83c404               add esp, 4
// 00577098  eb24                 jmp 0x5770be
// 0057709a  395e74               cmp dword ptr [esi + 0x74], ebx
// 0057709d  7406                 je 0x5770a5
// 0057709f  c6465901             mov byte ptr [esi + 0x59], 1
// 005770a3  ebad                 jmp 0x577052
// 005770a5  385e50               cmp byte ptr [esi + 0x50], bl
// 005770a8  74a4                 je 0x57704e
// 005770aa  c6465a01             mov byte ptr [esi + 0x5a], 1
// 005770ae  eba2                 jmp 0x577052
// 005770b0  e87bb60000           call 0x582730
// 005770b5  56                   push esi
// 005770b6  e825b00000           call 0x5820e0
// 005770bb  83c408               add esp, 8
// 005770be  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 005770c2  52                   push edx
// 005770c3  56                   push esi
// 005770c4  e8c7aa0000           call 0x581b90
// 005770c9  83c408               add esp, 8
// 005770cc  56                   push esi
// 005770cd  e87ea70000           call 0x581850
// 005770d2  83c404               add esp, 4
// 005770d5  56                   push esi
// 005770d6  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 005770dc  7411                 je 0x5770ef
// 005770de  8b06                 mov eax, dword ptr [esi]
// 005770e0  c7401401000000       mov dword ptr [eax + 0x14], 1
// 005770e7  8b0e                 mov ecx, dword ptr [esi]
// 005770e9  8b11                 mov edx, dword ptr [ecx]
// 005770eb  ffd2                 call edx
// 005770ed  eb14                 jmp 0x577103
// 005770ef  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 005770f5  7407                 je 0x5770fe
// 005770f7  e8c4a30000           call 0x5814c0
// 005770fc  eb05                 jmp 0x577103
// 005770fe  e84d970000           call 0x580850
// 00577103  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00577109  83c404               add esp, 4
// 0057710c  385810               cmp byte ptr [eax + 0x10], bl
// 0057710f  7509                 jne 0x57711a
// 00577111  885c2408             mov byte ptr [esp + 8], bl
// 00577115  385e40               cmp byte ptr [esi + 0x40], bl
// 00577118  7405                 je 0x57711f
// 0057711a  c644240801           mov byte ptr [esp + 8], 1
// 0057711f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577123  51                   push ecx
// 00577124  56                   push esi
// 00577125  e8268b0000           call 0x57fc50
// 0057712a  83c408               add esp, 8
// 0057712d  385e41               cmp byte ptr [esi + 0x41], bl
// 00577130  750a                 jne 0x57713c
// 00577132  53                   push ebx
// 00577133  56                   push esi
// 00577134  e8f77b0000           call 0x57ed30
// 00577139  83c408               add esp, 8
// 0057713c  8b5604               mov edx, dword ptr [esi + 4]
// 0057713f  8b4218               mov eax, dword ptr [edx + 0x18]
// 00577142  56                   push esi
// 00577143  ffd0                 call eax
// 00577145  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0057714b  8b5108               mov edx, dword ptr [ecx + 8]
// 0057714e  56                   push esi
// 0057714f  ffd2                 call edx
// 00577151  8b4e08               mov ecx, dword ptr [esi + 8]
// 00577154  83c408               add esp, 8
// 00577157  3bcb                 cmp ecx, ebx
// 00577159  744b                 je 0x5771a6
// 0057715b  385e40               cmp byte ptr [esi + 0x40], bl
// 0057715e  7546                 jne 0x5771a6
// 00577160  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00577166  385810               cmp byte ptr [eax + 0x10], bl
// 00577169  743b                 je 0x5771a6
// 0057716b  8b4624               mov eax, dword ptr [esi + 0x24]
// 0057716e  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 00577174  7404                 je 0x57717a
// 00577176  8d444002             lea eax, [eax + eax*2 + 2]
// 0057717a  895904               mov dword ptr [ecx + 4], ebx
// 0057717d  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00577183  8b5608               mov edx, dword ptr [esi + 8]
// 00577186  0fafc8               imul ecx, eax
// 00577189  894a08               mov dword ptr [edx + 8], ecx
// 0057718c  8b4608               mov eax, dword ptr [esi + 8]
// 0057718f  89580c               mov dword ptr [eax + 0xc], ebx
// 00577192  8b5608               mov edx, dword ptr [esi + 8]
// 00577195  33c9                 xor ecx, ecx
// 00577197  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0057719a  0f95c1               setne cl
// 0057719d  83c102               add ecx, 2
// 005771a0  894a10               mov dword ptr [edx + 0x10], ecx
// 005771a3  ff470c               inc dword ptr [edi + 0xc]
// 005771a6  5f                   pop edi
// 005771a7  5b                   pop ebx
// 005771a8  59                   pop ecx
// 005771a9  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
