// from server: 100% by auto
// roc 2011-06 00555f00  unit: G3D::LineSegment  size: 596 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00555f00
//
// 00555f00  83ec14               sub esp, 0x14
// 00555f03  53                   push ebx
// 00555f04  55                   push ebp
// 00555f05  56                   push esi
// 00555f06  8b7718               mov esi, dword ptr [edi + 0x18]
// 00555f09  8b6e04               mov ebp, dword ptr [esi + 4]
// 00555f0c  8b1e                 mov ebx, dword ptr [esi]
// 00555f0e  89742410             mov dword ptr [esp + 0x10], esi
// 00555f12  85ed                 test ebp, ebp
// 00555f14  751b                 jne 0x555f31
// 00555f16  8b460c               mov eax, dword ptr [esi + 0xc]
// 00555f19  57                   push edi
// 00555f1a  ffd0                 call eax
// 00555f1c  83c404               add esp, 4
// 00555f1f  84c0                 test al, al
// 00555f21  7509                 jne 0x555f2c
// 00555f23  5e                   pop esi
// 00555f24  5d                   pop ebp
// 00555f25  32c0                 xor al, al
// 00555f27  5b                   pop ebx
// 00555f28  83c414               add esp, 0x14
// 00555f2b  c3                   ret 
// 00555f2c  8b1e                 mov ebx, dword ptr [esi]
// 00555f2e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00555f31  0fb603               movzx eax, byte ptr [ebx]
// 00555f34  4d                   dec ebp
// 00555f35  c1e008               shl eax, 8
// 00555f38  43                   inc ebx
// 00555f39  8944240c             mov dword ptr [esp + 0xc], eax
// 00555f3d  85ed                 test ebp, ebp
// 00555f3f  7516                 jne 0x555f57
// 00555f41  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00555f44  57                   push edi
// 00555f45  ffd1                 call ecx
// 00555f47  83c404               add esp, 4
// 00555f4a  84c0                 test al, al
// 00555f4c  74d5                 je 0x555f23
// 00555f4e  8b1e                 mov ebx, dword ptr [esi]
// 00555f50  8b6e04               mov ebp, dword ptr [esi + 4]
// 00555f53  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00555f57  0fb613               movzx edx, byte ptr [ebx]
// 00555f5a  03c2                 add eax, edx
// 00555f5c  83e802               sub eax, 2
// 00555f5f  4d                   dec ebp
// 00555f60  43                   inc ebx
// 00555f61  8944240c             mov dword ptr [esp + 0xc], eax
// 00555f65  85c0                 test eax, eax
// 00555f67  0f8ec4010000         jle 0x556131
// 00555f6d  8d4900               lea ecx, [ecx]
// 00555f70  85ed                 test ebp, ebp
// 00555f72  7512                 jne 0x555f86
// 00555f74  8b460c               mov eax, dword ptr [esi + 0xc]
// 00555f77  57                   push edi
// 00555f78  ffd0                 call eax
// 00555f7a  83c404               add esp, 4
// 00555f7d  84c0                 test al, al
// 00555f7f  74a2                 je 0x555f23
// 00555f81  8b1e                 mov ebx, dword ptr [esi]
// 00555f83  8b6e04               mov ebp, dword ptr [esi + 4]
// 00555f86  0fb633               movzx esi, byte ptr [ebx]
// 00555f89  8b0f                 mov ecx, dword ptr [edi]
// 00555f8b  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 00555f92  8b17                 mov edx, dword ptr [edi]
// 00555f94  8bc6                 mov eax, esi
// 00555f96  c1f804               sar eax, 4
// 00555f99  83e60f               and esi, 0xf
// 00555f9c  897218               mov dword ptr [edx + 0x18], esi
// 00555f9f  8b0f                 mov ecx, dword ptr [edi]
// 00555fa1  89411c               mov dword ptr [ecx + 0x1c], eax
// 00555fa4  8b17                 mov edx, dword ptr [edi]
// 00555fa6  8944241c             mov dword ptr [esp + 0x1c], eax
// 00555faa  8b4204               mov eax, dword ptr [edx + 4]
// 00555fad  6a01                 push 1
// 00555faf  57                   push edi
// 00555fb0  4d                   dec ebp
// 00555fb1  43                   inc ebx
// 00555fb2  ffd0                 call eax
// 00555fb4  83c408               add esp, 8
// 00555fb7  83fe04               cmp esi, 4
// 00555fba  7c18                 jl 0x555fd4
// 00555fbc  8b0f                 mov ecx, dword ptr [edi]
// 00555fbe  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 00555fc5  8b17                 mov edx, dword ptr [edi]
// 00555fc7  897218               mov dword ptr [edx + 0x18], esi
// 00555fca  8b07                 mov eax, dword ptr [edi]
// 00555fcc  8b08                 mov ecx, dword ptr [eax]
// 00555fce  57                   push edi
// 00555fcf  ffd1                 call ecx
// 00555fd1  83c404               add esp, 4
// 00555fd4  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 00555fdc  7510                 jne 0x555fee
// 00555fde  57                   push edi
// 00555fdf  e87c1d0100           call 0x567d60
// 00555fe4  83c404               add esp, 4
// 00555fe7  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 00555fee  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 00555ff5  89542418             mov dword ptr [esp + 0x18], edx
// 00555ff9  c7442414f058a800     mov dword ptr [esp + 0x14], 0xa858f0
// 00556001  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00556006  744c                 je 0x556054
// 00556008  85ed                 test ebp, ebp
// 0055600a  751a                 jne 0x556026
// 0055600c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00556010  8b460c               mov eax, dword ptr [esi + 0xc]
// 00556013  57                   push edi
// 00556014  ffd0                 call eax
// 00556016  83c404               add esp, 4
// 00556019  84c0                 test al, al
// 0055601b  0f8402ffffff         je 0x555f23
// 00556021  8b1e                 mov ebx, dword ptr [esi]
// 00556023  8b6e04               mov ebp, dword ptr [esi + 4]
// 00556026  0fb633               movzx esi, byte ptr [ebx]
// 00556029  4d                   dec ebp
// 0055602a  c1e608               shl esi, 8
// 0055602d  43                   inc ebx
// 0055602e  85ed                 test ebp, ebp
// 00556030  751b                 jne 0x55604d
// 00556032  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00556036  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00556039  57                   push edi
// 0055603a  ffd1                 call ecx
// 0055603c  83c404               add esp, 4
// 0055603f  84c0                 test al, al
// 00556041  0f84dcfeffff         je 0x555f23
// 00556047  8b5d00               mov ebx, dword ptr [ebp]
// 0055604a  8b6d04               mov ebp, dword ptr [ebp + 4]
// 0055604d  0fb613               movzx edx, byte ptr [ebx]
// 00556050  03f2                 add esi, edx
// 00556052  eb21                 jmp 0x556075
// 00556054  85ed                 test ebp, ebp
// 00556056  751a                 jne 0x556072
// 00556058  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055605c  8b460c               mov eax, dword ptr [esi + 0xc]
// 0055605f  57                   push edi
// 00556060  ffd0                 call eax
// 00556062  83c404               add esp, 4
// 00556065  84c0                 test al, al
// 00556067  0f84b6feffff         je 0x555f23
// 0055606d  8b1e                 mov ebx, dword ptr [esi]
// 0055606f  8b6e04               mov ebp, dword ptr [esi + 4]
// 00556072  0fb633               movzx esi, byte ptr [ebx]
// 00556075  8b442414             mov eax, dword ptr [esp + 0x14]
// 00556079  8b08                 mov ecx, dword ptr [eax]
// 0055607b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055607f  83c004               add eax, 4
// 00556082  4d                   dec ebp
// 00556083  43                   inc ebx
// 00556084  3df059a800           cmp eax, 0xa859f0
// 00556089  6689344a             mov word ptr [edx + ecx*2], si
// 0055608d  89442414             mov dword ptr [esp + 0x14], eax
// 00556091  0f8c6affffff         jl 0x556001
// 00556097  8b07                 mov eax, dword ptr [edi]
// 00556099  83786802             cmp dword ptr [eax + 0x68], 2
// 0055609d  7c6c                 jl 0x55610b
// 0055609f  8bf2                 mov esi, edx
// 005560a1  83c604               add esi, 4
// 005560a4  c744241808000000     mov dword ptr [esp + 0x18], 8
// 005560ac  8d642400             lea esp, [esp]
// 005560b0  8b07                 mov eax, dword ptr [edi]
// 005560b2  0fb74efc             movzx ecx, word ptr [esi - 4]
// 005560b6  83c018               add eax, 0x18
// 005560b9  8908                 mov dword ptr [eax], ecx
// 005560bb  0fb756fe             movzx edx, word ptr [esi - 2]
// 005560bf  895004               mov dword ptr [eax + 4], edx
// 005560c2  0fb70e               movzx ecx, word ptr [esi]
// 005560c5  894808               mov dword ptr [eax + 8], ecx
// 005560c8  0fb75602             movzx edx, word ptr [esi + 2]
// 005560cc  89500c               mov dword ptr [eax + 0xc], edx
// 005560cf  0fb74e04             movzx ecx, word ptr [esi + 4]
// 005560d3  894810               mov dword ptr [eax + 0x10], ecx
// 005560d6  0fb75606             movzx edx, word ptr [esi + 6]
// 005560da  895014               mov dword ptr [eax + 0x14], edx
// 005560dd  0fb74e08             movzx ecx, word ptr [esi + 8]
// 005560e1  894818               mov dword ptr [eax + 0x18], ecx
// 005560e4  0fb7560a             movzx edx, word ptr [esi + 0xa]
// 005560e8  89501c               mov dword ptr [eax + 0x1c], edx
// 005560eb  8b07                 mov eax, dword ptr [edi]
// 005560ed  c740145d000000       mov dword ptr [eax + 0x14], 0x5d
// 005560f4  8b0f                 mov ecx, dword ptr [edi]
// 005560f6  8b5104               mov edx, dword ptr [ecx + 4]
// 005560f9  6a02                 push 2
// 005560fb  57                   push edi
// 005560fc  ffd2                 call edx
// 005560fe  83c408               add esp, 8
// 00556101  83c610               add esi, 0x10
// 00556104  836c241801           sub dword ptr [esp + 0x18], 1
// 00556109  75a5                 jne 0x5560b0
// 0055610b  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 00556110  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00556115  7405                 je 0x55611c
// 00556117  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 0055611c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00556121  8b742410             mov esi, dword ptr [esp + 0x10]
// 00556125  0f8f45feffff         jg 0x555f70
// 0055612b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0055612f  85c0                 test eax, eax
// 00556131  7413                 je 0x556146
// 00556133  8b07                 mov eax, dword ptr [edi]
// 00556135  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 0055613c  8b0f                 mov ecx, dword ptr [edi]
// 0055613e  8b11                 mov edx, dword ptr [ecx]
// 00556140  57                   push edi
// 00556141  ffd2                 call edx
// 00556143  83c404               add esp, 4
// 00556146  891e                 mov dword ptr [esi], ebx
// 00556148  896e04               mov dword ptr [esi + 4], ebp
// 0055614b  5e                   pop esi
// 0055614c  5d                   pop ebp
// 0055614d  b001                 mov al, 1
// 0055614f  5b                   pop ebx
// 00556150  83c414               add esp, 0x14
// 00556153  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
