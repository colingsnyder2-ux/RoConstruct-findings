// roc 2012-06 00654d20  unit: seg_00650000  size: 458 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654d20
//
// 00654d20  51                   push ecx
// 00654d21  53                   push ebx
// 00654d22  57                   push edi
// 00654d23  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 00654d29  56                   push esi
// 00654d2a  e831fdffff           call 0x654a60
// 00654d2f  83c404               add esp, 4
// 00654d32  8bde                 mov ebx, esi
// 00654d34  e857ffffff           call 0x654c90
// 00654d39  33db                 xor ebx, ebx
// 00654d3b  8bd6                 mov edx, esi
// 00654d3d  895f0c               mov dword ptr [edi + 0xc], ebx
// 00654d40  e89bfcffff           call 0x6549e0
// 00654d45  884710               mov byte ptr [edi + 0x10], al
// 00654d48  895f14               mov dword ptr [edi + 0x14], ebx
// 00654d4b  895f18               mov dword ptr [edi + 0x18], ebx
// 00654d4e  8a464a               mov al, byte ptr [esi + 0x4a]
// 00654d51  3ac3                 cmp al, bl
// 00654d53  7405                 je 0x654d5a
// 00654d55  385e40               cmp byte ptr [esi + 0x40], bl
// 00654d58  7509                 jne 0x654d63
// 00654d5a  885e58               mov byte ptr [esi + 0x58], bl
// 00654d5d  885e59               mov byte ptr [esi + 0x59], bl
// 00654d60  885e5a               mov byte ptr [esi + 0x5a], bl
// 00654d63  3ac3                 cmp al, bl
// 00654d65  745e                 je 0x654dc5
// 00654d67  385e41               cmp byte ptr [esi + 0x41], bl
// 00654d6a  7413                 je 0x654d7f
// 00654d6c  8b06                 mov eax, dword ptr [esi]
// 00654d6e  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 00654d75  8b0e                 mov ecx, dword ptr [esi]
// 00654d77  8b11                 mov edx, dword ptr [ecx]
// 00654d79  56                   push esi
// 00654d7a  ffd2                 call edx
// 00654d7c  83c404               add esp, 4
// 00654d7f  837e6403             cmp dword ptr [esi + 0x64], 3
// 00654d83  7455                 je 0x654dda
// 00654d85  885e59               mov byte ptr [esi + 0x59], bl
// 00654d88  885e5a               mov byte ptr [esi + 0x5a], bl
// 00654d8b  895e74               mov dword ptr [esi + 0x74], ebx
// 00654d8e  c6465801             mov byte ptr [esi + 0x58], 1
// 00654d92  385e58               cmp byte ptr [esi + 0x58], bl
// 00654d95  7412                 je 0x654da9
// 00654d97  56                   push esi
// 00654d98  e803190100           call 0x6666a0
// 00654d9d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00654da3  83c404               add esp, 4
// 00654da6  894714               mov dword ptr [edi + 0x14], eax
// 00654da9  385e5a               cmp byte ptr [esi + 0x5a], bl
// 00654dac  7505                 jne 0x654db3
// 00654dae  385e59               cmp byte ptr [esi + 0x59], bl
// 00654db1  7412                 je 0x654dc5
// 00654db3  56                   push esi
// 00654db4  e8870c0100           call 0x665a40
// 00654db9  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00654dbf  83c404               add esp, 4
// 00654dc2  894f18               mov dword ptr [edi + 0x18], ecx
// 00654dc5  385e41               cmp byte ptr [esi + 0x41], bl
// 00654dc8  7542                 jne 0x654e0c
// 00654dca  56                   push esi
// 00654dcb  385f10               cmp byte ptr [edi + 0x10], bl
// 00654dce  7420                 je 0x654df0
// 00654dd0  e80bfa0000           call 0x6647e0
// 00654dd5  83c404               add esp, 4
// 00654dd8  eb24                 jmp 0x654dfe
// 00654dda  395e74               cmp dword ptr [esi + 0x74], ebx
// 00654ddd  7406                 je 0x654de5
// 00654ddf  c6465901             mov byte ptr [esi + 0x59], 1
// 00654de3  ebad                 jmp 0x654d92
// 00654de5  385e50               cmp byte ptr [esi + 0x50], bl
// 00654de8  74a4                 je 0x654d8e
// 00654dea  c6465a01             mov byte ptr [esi + 0x5a], 1
// 00654dee  eba2                 jmp 0x654d92
// 00654df0  e8fbf20000           call 0x6640f0
// 00654df5  56                   push esi
// 00654df6  e8a5ec0000           call 0x663aa0
// 00654dfb  83c408               add esp, 8
// 00654dfe  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 00654e02  52                   push edx
// 00654e03  56                   push esi
// 00654e04  e847e70000           call 0x663550
// 00654e09  83c408               add esp, 8
// 00654e0c  56                   push esi
// 00654e0d  e8fee30000           call 0x663210
// 00654e12  83c404               add esp, 4
// 00654e15  56                   push esi
// 00654e16  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 00654e1c  7411                 je 0x654e2f
// 00654e1e  8b06                 mov eax, dword ptr [esi]
// 00654e20  c7401401000000       mov dword ptr [eax + 0x14], 1
// 00654e27  8b0e                 mov ecx, dword ptr [esi]
// 00654e29  8b11                 mov edx, dword ptr [ecx]
// 00654e2b  ffd2                 call edx
// 00654e2d  eb14                 jmp 0x654e43
// 00654e2f  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 00654e35  7407                 je 0x654e3e
// 00654e37  e844e00000           call 0x662e80
// 00654e3c  eb05                 jmp 0x654e43
// 00654e3e  e8cdd30000           call 0x662210
// 00654e43  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00654e49  83c404               add esp, 4
// 00654e4c  385810               cmp byte ptr [eax + 0x10], bl
// 00654e4f  7509                 jne 0x654e5a
// 00654e51  885c2408             mov byte ptr [esp + 8], bl
// 00654e55  385e40               cmp byte ptr [esi + 0x40], bl
// 00654e58  7405                 je 0x654e5f
// 00654e5a  c644240801           mov byte ptr [esp + 8], 1
// 00654e5f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00654e63  51                   push ecx
// 00654e64  56                   push esi
// 00654e65  e8a6c70000           call 0x661610
// 00654e6a  83c408               add esp, 8
// 00654e6d  385e41               cmp byte ptr [esi + 0x41], bl
// 00654e70  750a                 jne 0x654e7c
// 00654e72  53                   push ebx
// 00654e73  56                   push esi
// 00654e74  e877b80000           call 0x6606f0
// 00654e79  83c408               add esp, 8
// 00654e7c  8b5604               mov edx, dword ptr [esi + 4]
// 00654e7f  8b4218               mov eax, dword ptr [edx + 0x18]
// 00654e82  56                   push esi
// 00654e83  ffd0                 call eax
// 00654e85  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00654e8b  8b5108               mov edx, dword ptr [ecx + 8]
// 00654e8e  56                   push esi
// 00654e8f  ffd2                 call edx
// 00654e91  8b4e08               mov ecx, dword ptr [esi + 8]
// 00654e94  83c408               add esp, 8
// 00654e97  3bcb                 cmp ecx, ebx
// 00654e99  744b                 je 0x654ee6
// 00654e9b  385e40               cmp byte ptr [esi + 0x40], bl
// 00654e9e  7546                 jne 0x654ee6
// 00654ea0  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00654ea6  385810               cmp byte ptr [eax + 0x10], bl
// 00654ea9  743b                 je 0x654ee6
// 00654eab  8b4624               mov eax, dword ptr [esi + 0x24]
// 00654eae  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 00654eb4  7404                 je 0x654eba
// 00654eb6  8d444002             lea eax, [eax + eax*2 + 2]
// 00654eba  895904               mov dword ptr [ecx + 4], ebx
// 00654ebd  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 00654ec3  8b5608               mov edx, dword ptr [esi + 8]
// 00654ec6  0fafc8               imul ecx, eax
// 00654ec9  894a08               mov dword ptr [edx + 8], ecx
// 00654ecc  8b4608               mov eax, dword ptr [esi + 8]
// 00654ecf  89580c               mov dword ptr [eax + 0xc], ebx
// 00654ed2  8b5608               mov edx, dword ptr [esi + 8]
// 00654ed5  33c9                 xor ecx, ecx
// 00654ed7  385e5a               cmp byte ptr [esi + 0x5a], bl
// 00654eda  0f95c1               setne cl
// 00654edd  83c102               add ecx, 2
// 00654ee0  894a10               mov dword ptr [edx + 0x10], ecx
// 00654ee3  ff470c               inc dword ptr [edi + 0xc]
// 00654ee6  5f                   pop edi
// 00654ee7  5b                   pop ebx
// 00654ee8  59                   pop ecx
// 00654ee9  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
