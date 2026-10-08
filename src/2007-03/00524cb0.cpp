// roc 2007-03 00524cb0  unit: seg_00520000  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524cb0
//
// 00524cb0  56                   push esi
// 00524cb1  8b742408             mov esi, dword ptr [esp + 8]
// 00524cb5  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 00524cb9  57                   push edi
// 00524cba  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 00524cc0  8b4718               mov eax, dword ptr [edi + 0x18]
// 00524cc3  8944240c             mov dword ptr [esp + 0xc], eax
// 00524cc7  7407                 je 0x524cd0
// 00524cc9  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00524cd0  807c241000           cmp byte ptr [esp + 0x10], 0
// 00524cd5  7417                 je 0x524cee
// 00524cd7  c74704703b5200       mov dword ptr [edi + 4], 0x523b70
// 00524cde  c74708804c5200       mov dword ptr [edi + 8], 0x524c80
// 00524ce5  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00524ce9  e9ae000000           jmp 0x524d9c
// 00524cee  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00524cf2  7509                 jne 0x524cfd
// 00524cf4  c7470410495200       mov dword ptr [edi + 4], 0x524910
// 00524cfb  eb07                 jmp 0x524d04
// 00524cfd  c7470440485200       mov dword ptr [edi + 4], 0x524840
// 00524d04  55                   push ebp
// 00524d05  c74708c07d6900       mov dword ptr [edi + 8], 0x697dc0
// 00524d0c  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 00524d0f  83fd01               cmp ebp, 1
// 00524d12  7d1c                 jge 0x524d30
// 00524d14  8b0e                 mov ecx, dword ptr [esi]
// 00524d16  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 00524d1d  8b16                 mov edx, dword ptr [esi]
// 00524d1f  c7421801000000       mov dword ptr [edx + 0x18], 1
// 00524d26  8b06                 mov eax, dword ptr [esi]
// 00524d28  8b08                 mov ecx, dword ptr [eax]
// 00524d2a  56                   push esi
// 00524d2b  ffd1                 call ecx
// 00524d2d  83c404               add esp, 4
// 00524d30  81fd00010000         cmp ebp, 0x100
// 00524d36  7e1c                 jle 0x524d54
// 00524d38  8b16                 mov edx, dword ptr [esi]
// 00524d3a  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 00524d41  8b06                 mov eax, dword ptr [esi]
// 00524d43  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 00524d4a  8b0e                 mov ecx, dword ptr [esi]
// 00524d4c  8b11                 mov edx, dword ptr [ecx]
// 00524d4e  56                   push esi
// 00524d4f  ffd2                 call edx
// 00524d51  83c404               add esp, 4
// 00524d54  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00524d58  7541                 jne 0x524d9b
// 00524d5a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00524d5d  83c002               add eax, 2
// 00524d60  8d2c40               lea ebp, [eax + eax*2]
// 00524d63  03ed                 add ebp, ebp
// 00524d65  837f2000             cmp dword ptr [edi + 0x20], 0
// 00524d69  7512                 jne 0x524d7d
// 00524d6b  8b4604               mov eax, dword ptr [esi + 4]
// 00524d6e  8b4804               mov ecx, dword ptr [eax + 4]
// 00524d71  55                   push ebp
// 00524d72  6a01                 push 1
// 00524d74  56                   push esi
// 00524d75  ffd1                 call ecx
// 00524d77  83c40c               add esp, 0xc
// 00524d7a  894720               mov dword ptr [edi + 0x20], eax
// 00524d7d  8b5720               mov edx, dword ptr [edi + 0x20]
// 00524d80  55                   push ebp
// 00524d81  52                   push edx
// 00524d82  e829f9feff           call 0x5146b0
// 00524d87  83c408               add esp, 8
// 00524d8a  837f2800             cmp dword ptr [edi + 0x28], 0
// 00524d8e  7507                 jne 0x524d97
// 00524d90  8bc6                 mov eax, esi
// 00524d92  e839feffff           call 0x524bd0
// 00524d97  c6472400             mov byte ptr [edi + 0x24], 0
// 00524d9b  5d                   pop ebp
// 00524d9c  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00524da0  7423                 je 0x524dc5
// 00524da2  33f6                 xor esi, esi
// 00524da4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00524da8  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00524dab  6800100000           push 0x1000
// 00524db0  51                   push ecx
// 00524db1  e8faf8feff           call 0x5146b0
// 00524db6  83c601               add esi, 1
// 00524db9  83c408               add esp, 8
// 00524dbc  83fe20               cmp esi, 0x20
// 00524dbf  7ce3                 jl 0x524da4
// 00524dc1  c6471c00             mov byte ptr [edi + 0x1c], 0
// 00524dc5  5f                   pop edi
// 00524dc6  5e                   pop esi
// 00524dc7  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
