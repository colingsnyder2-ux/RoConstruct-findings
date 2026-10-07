// roc 2010-06 0057aec0  unit: seg_00570000  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057aec0
//
// 0057aec0  83ec08               sub esp, 8
// 0057aec3  53                   push ebx
// 0057aec4  56                   push esi
// 0057aec5  8bf0                 mov esi, eax
// 0057aec7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057aecb  57                   push edi
// 0057aecc  8b7c8648             mov edi, dword ptr [esi + eax*4 + 0x48]
// 0057aed0  897c2410             mov dword ptr [esp + 0x10], edi
// 0057aed4  85ff                 test edi, edi
// 0057aed6  7518                 jne 0x57aef0
// 0057aed8  8b0e                 mov ecx, dword ptr [esi]
// 0057aeda  c7411434000000       mov dword ptr [ecx + 0x14], 0x34
// 0057aee1  8b16                 mov edx, dword ptr [esi]
// 0057aee3  894218               mov dword ptr [edx + 0x18], eax
// 0057aee6  8b06                 mov eax, dword ptr [esi]
// 0057aee8  8b08                 mov ecx, dword ptr [eax]
// 0057aeea  56                   push esi
// 0057aeeb  ffd1                 call ecx
// 0057aeed  83c404               add esp, 4
// 0057aef0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0057aef8  8d4704               lea eax, [edi + 4]
// 0057aefb  ba10000000           mov edx, 0x10
// 0057af00  b9ff000000           mov ecx, 0xff
// 0057af05  663948fc             cmp word ptr [eax - 4], cx
// 0057af09  b901000000           mov ecx, 1
// 0057af0e  7604                 jbe 0x57af14
// 0057af10  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057af14  bbff000000           mov ebx, 0xff
// 0057af19  663958fe             cmp word ptr [eax - 2], bx
// 0057af1d  7604                 jbe 0x57af23
// 0057af1f  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057af23  663918               cmp word ptr [eax], bx
// 0057af26  7604                 jbe 0x57af2c
// 0057af28  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057af2c  66395802             cmp word ptr [eax + 2], bx
// 0057af30  7604                 jbe 0x57af36
// 0057af32  894c240c             mov dword ptr [esp + 0xc], ecx
// 0057af36  83c008               add eax, 8
// 0057af39  2bd1                 sub edx, ecx
// 0057af3b  75c3                 jne 0x57af00
// 0057af3d  389780000000         cmp byte ptr [edi + 0x80], dl
// 0057af43  0f8540010000         jne 0x57b089
// 0057af49  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057af4c  8b10                 mov edx, dword ptr [eax]
// 0057af4e  55                   push ebp
// 0057af4f  881a                 mov byte ptr [edx], bl
// 0057af51  ff00                 inc dword ptr [eax]
// 0057af53  83cdff               or ebp, 0xffffffff
// 0057af56  016804               add dword ptr [eax + 4], ebp
// 0057af59  7523                 jne 0x57af7e
// 0057af5b  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057af5e  56                   push esi
// 0057af5f  ffd0                 call eax
// 0057af61  83c404               add esp, 4
// 0057af64  84c0                 test al, al
// 0057af66  7516                 jne 0x57af7e
// 0057af68  8b0e                 mov ecx, dword ptr [esi]
// 0057af6a  bf18000000           mov edi, 0x18
// 0057af6f  897914               mov dword ptr [ecx + 0x14], edi
// 0057af72  8b16                 mov edx, dword ptr [esi]
// 0057af74  8b02                 mov eax, dword ptr [edx]
// 0057af76  56                   push esi
// 0057af77  ffd0                 call eax
// 0057af79  83c404               add esp, 4
// 0057af7c  eb05                 jmp 0x57af83
// 0057af7e  bf18000000           mov edi, 0x18
// 0057af83  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057af86  8b08                 mov ecx, dword ptr [eax]
// 0057af88  c601db               mov byte ptr [ecx], 0xdb
// 0057af8b  ff00                 inc dword ptr [eax]
// 0057af8d  016804               add dword ptr [eax + 4], ebp
// 0057af90  751c                 jne 0x57afae
// 0057af92  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057af95  56                   push esi
// 0057af96  ffd2                 call edx
// 0057af98  83c404               add esp, 4
// 0057af9b  84c0                 test al, al
// 0057af9d  750f                 jne 0x57afae
// 0057af9f  8b06                 mov eax, dword ptr [esi]
// 0057afa1  897814               mov dword ptr [eax + 0x14], edi
// 0057afa4  8b0e                 mov ecx, dword ptr [esi]
// 0057afa6  8b11                 mov edx, dword ptr [ecx]
// 0057afa8  56                   push esi
// 0057afa9  ffd2                 call edx
// 0057afab  83c404               add esp, 4
// 0057afae  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057afb2  f7db                 neg ebx
// 0057afb4  1bdb                 sbb ebx, ebx
// 0057afb6  83e340               and ebx, 0x40
// 0057afb9  83c343               add ebx, 0x43
// 0057afbc  e88ffeffff           call 0x57ae50
// 0057afc1  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057afc4  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 0057afc8  8b10                 mov edx, dword ptr [eax]
// 0057afca  c0e104               shl cl, 4
// 0057afcd  024c241c             add cl, byte ptr [esp + 0x1c]
// 0057afd1  880a                 mov byte ptr [edx], cl
// 0057afd3  ff00                 inc dword ptr [eax]
// 0057afd5  016804               add dword ptr [eax + 4], ebp
// 0057afd8  751c                 jne 0x57aff6
// 0057afda  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057afdd  56                   push esi
// 0057afde  ffd0                 call eax
// 0057afe0  83c404               add esp, 4
// 0057afe3  84c0                 test al, al
// 0057afe5  750f                 jne 0x57aff6
// 0057afe7  8b0e                 mov ecx, dword ptr [esi]
// 0057afe9  897914               mov dword ptr [ecx + 0x14], edi
// 0057afec  8b16                 mov edx, dword ptr [esi]
// 0057afee  8b02                 mov eax, dword ptr [edx]
// 0057aff0  56                   push esi
// 0057aff1  ffd0                 call eax
// 0057aff3  83c404               add esp, 4
// 0057aff6  bff834a200           mov edi, 0xa234f8
// 0057affb  eb03                 jmp 0x57b000
// 0057affd  8d4900               lea ecx, [ecx]
// 0057b000  837c241000           cmp dword ptr [esp + 0x10], 0
// 0057b005  8b0f                 mov ecx, dword ptr [edi]
// 0057b007  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057b00b  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0057b00f  7433                 je 0x57b044
// 0057b011  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b014  8b10                 mov edx, dword ptr [eax]
// 0057b016  8bcb                 mov ecx, ebx
// 0057b018  c1e908               shr ecx, 8
// 0057b01b  880a                 mov byte ptr [edx], cl
// 0057b01d  ff00                 inc dword ptr [eax]
// 0057b01f  016804               add dword ptr [eax + 4], ebp
// 0057b022  7520                 jne 0x57b044
// 0057b024  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b027  56                   push esi
// 0057b028  ffd0                 call eax
// 0057b02a  83c404               add esp, 4
// 0057b02d  84c0                 test al, al
// 0057b02f  7513                 jne 0x57b044
// 0057b031  8b0e                 mov ecx, dword ptr [esi]
// 0057b033  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b03a  8b16                 mov edx, dword ptr [esi]
// 0057b03c  8b02                 mov eax, dword ptr [edx]
// 0057b03e  56                   push esi
// 0057b03f  ffd0                 call eax
// 0057b041  83c404               add esp, 4
// 0057b044  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b047  8b08                 mov ecx, dword ptr [eax]
// 0057b049  8819                 mov byte ptr [ecx], bl
// 0057b04b  ff00                 inc dword ptr [eax]
// 0057b04d  016804               add dword ptr [eax + 4], ebp
// 0057b050  7520                 jne 0x57b072
// 0057b052  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057b055  56                   push esi
// 0057b056  ffd2                 call edx
// 0057b058  83c404               add esp, 4
// 0057b05b  84c0                 test al, al
// 0057b05d  7513                 jne 0x57b072
// 0057b05f  8b06                 mov eax, dword ptr [esi]
// 0057b061  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 0057b068  8b0e                 mov ecx, dword ptr [esi]
// 0057b06a  8b11                 mov edx, dword ptr [ecx]
// 0057b06c  56                   push esi
// 0057b06d  ffd2                 call edx
// 0057b06f  83c404               add esp, 4
// 0057b072  83c704               add edi, 4
// 0057b075  81fff835a200         cmp edi, 0xa235f8
// 0057b07b  7c83                 jl 0x57b000
// 0057b07d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057b081  c6808000000001       mov byte ptr [eax + 0x80], 1
// 0057b088  5d                   pop ebp
// 0057b089  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057b08d  5f                   pop edi
// 0057b08e  5e                   pop esi
// 0057b08f  5b                   pop ebx
// 0057b090  83c408               add esp, 8
// 0057b093  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
