// roc 2008-06 00538e10  unit: seg_00530000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538e10
//
// 00538e10  81ec14010000         sub esp, 0x114
// 00538e16  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 00538e1d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 00538e23  8b5018               mov edx, dword ptr [eax + 0x18]
// 00538e26  53                   push ebx
// 00538e27  8b9830010000         mov ebx, dword ptr [eax + 0x130]
// 00538e2d  55                   push ebp
// 00538e2e  56                   push esi
// 00538e2f  8bb05c010000         mov esi, dword ptr [eax + 0x15c]
// 00538e35  894c2410             mov dword ptr [esp + 0x10], ecx
// 00538e39  8b0a                 mov ecx, dword ptr [edx]
// 00538e3b  894e10               mov dword ptr [esi + 0x10], ecx
// 00538e3e  8b5018               mov edx, dword ptr [eax + 0x18]
// 00538e41  8b4a04               mov ecx, dword ptr [edx + 4]
// 00538e44  894e14               mov dword ptr [esi + 0x14], ecx
// 00538e47  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 00538e4e  57                   push edi
// 00538e4f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00538e53  741b                 je 0x538e70
// 00538e55  837e4400             cmp dword ptr [esi + 0x44], 0
// 00538e59  7515                 jne 0x538e70
// 00538e5b  8b5648               mov edx, dword ptr [esi + 0x48]
// 00538e5e  52                   push edx
// 00538e5f  8bc6                 mov eax, esi
// 00538e61  e8fafaffff           call 0x538960
// 00538e66  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 00538e6d  83c404               add esp, 4
// 00538e70  8b902c010000         mov edx, dword ptr [eax + 0x12c]
// 00538e76  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 00538e7d  8b29                 mov ebp, dword ptr [ecx]
// 00538e7f  8bc2                 mov eax, edx
// 00538e81  3bc3                 cmp eax, ebx
// 00538e83  896c2420             mov dword ptr [esp + 0x20], ebp
// 00538e87  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00538e8f  7f2a                 jg 0x538ebb
// 00538e91  8b0c85b0b18200       mov ecx, dword ptr [eax*4 + 0x82b1b0]
// 00538e98  0fbf7c4d00           movsx edi, word ptr [ebp + ecx*2]
// 00538e9d  85ff                 test edi, edi
// 00538e9f  7d02                 jge 0x538ea3
// 00538ea1  f7df                 neg edi
// 00538ea3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00538ea7  d3ff                 sar edi, cl
// 00538ea9  897c8424             mov dword ptr [esp + eax*4 + 0x24], edi
// 00538ead  83ff01               cmp edi, 1
// 00538eb0  7504                 jne 0x538eb6
// 00538eb2  8944241c             mov dword ptr [esp + 0x1c], eax
// 00538eb6  40                   inc eax
// 00538eb7  3bc3                 cmp eax, ebx
// 00538eb9  7ed6                 jle 0x538e91
// 00538ebb  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00538ebe  037e3c               add edi, dword ptr [esi + 0x3c]
// 00538ec1  8bca                 mov ecx, edx
// 00538ec3  33ed                 xor ebp, ebp
// 00538ec5  33db                 xor ebx, ebx
// 00538ec7  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00538ecb  89542410             mov dword ptr [esp + 0x10], edx
// 00538ecf  0f8f63010000         jg 0x539038
// 00538ed5  8b448c24             mov eax, dword ptr [esp + ecx*4 + 0x24]
// 00538ed9  89442414             mov dword ptr [esp + 0x14], eax
// 00538edd  85c0                 test eax, eax
// 00538edf  7506                 jne 0x538ee7
// 00538ee1  45                   inc ebp
// 00538ee2  e918010000           jmp 0x538fff
// 00538ee7  83fd0f               cmp ebp, 0xf
// 00538eea  7e7a                 jle 0x538f66
// 00538eec  8d642400             lea esp, [esp]
// 00538ef0  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00538ef4  7f70                 jg 0x538f66
// 00538ef6  8bc6                 mov eax, esi
// 00538ef8  e8c3f9ffff           call 0x5388c0
// 00538efd  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538f01  8b4634               mov eax, dword ptr [esi + 0x34]
// 00538f04  740c                 je 0x538f12
// 00538f06  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 00538f0a  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00538f10  eb1b                 jmp 0x538f2d
// 00538f12  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00538f16  0fbe90f0040000       movsx edx, byte ptr [eax + 0x4f0]
// 00538f1d  8b80c0030000         mov eax, dword ptr [eax + 0x3c0]
// 00538f23  52                   push edx
// 00538f24  50                   push eax
// 00538f25  e826f8ffff           call 0x538750
// 00538f2a  83c408               add esp, 8
// 00538f2d  83ed10               sub ebp, 0x10
// 00538f30  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538f34  751e                 jne 0x538f54
// 00538f36  85db                 test ebx, ebx
// 00538f38  761a                 jbe 0x538f54
// 00538f3a  8d9b00000000         lea ebx, [ebx]
// 00538f40  0fbe0f               movsx ecx, byte ptr [edi]
// 00538f43  6a01                 push 1
// 00538f45  51                   push ecx
// 00538f46  e805f8ffff           call 0x538750
// 00538f4b  83c408               add esp, 8
// 00538f4e  47                   inc edi
// 00538f4f  83eb01               sub ebx, 1
// 00538f52  75ec                 jne 0x538f40
// 00538f54  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00538f57  8b442414             mov eax, dword ptr [esp + 0x14]
// 00538f5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00538f5f  33db                 xor ebx, ebx
// 00538f61  83fd0f               cmp ebp, 0xf
// 00538f64  7f8a                 jg 0x538ef0
// 00538f66  83f801               cmp eax, 1
// 00538f69  7e0b                 jle 0x538f76
// 00538f6b  2401                 and al, 1
// 00538f6d  88041f               mov byte ptr [edi + ebx], al
// 00538f70  43                   inc ebx
// 00538f71  e989000000           jmp 0x538fff
// 00538f76  8bc6                 mov eax, esi
// 00538f78  e843f9ffff           call 0x5388c0
// 00538f7d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00538f80  c1e504               shl ebp, 4
// 00538f83  45                   inc ebp
// 00538f84  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538f88  740c                 je 0x538f96
// 00538f8a  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 00538f8e  ff04aa               inc dword ptr [edx + ebp*4]
// 00538f91  8d04aa               lea eax, [edx + ebp*4]
// 00538f94  eb19                 jmp 0x538faf
// 00538f96  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00538f9a  0fbe8c2800040000     movsx ecx, byte ptr [eax + ebp + 0x400]
// 00538fa2  8b14a8               mov edx, dword ptr [eax + ebp*4]
// 00538fa5  51                   push ecx
// 00538fa6  52                   push edx
// 00538fa7  e8a4f7ffff           call 0x538750
// 00538fac  83c408               add esp, 8
// 00538faf  8b442410             mov eax, dword ptr [esp + 0x10]
// 00538fb3  8b0c85b0b18200       mov ecx, dword ptr [eax*4 + 0x82b1b0]
// 00538fba  8b442420             mov eax, dword ptr [esp + 0x20]
// 00538fbe  33d2                 xor edx, edx
// 00538fc0  66391448             cmp word ptr [eax + ecx*2], dx
// 00538fc4  6a01                 push 1
// 00538fc6  0f9dc2               setge dl
// 00538fc9  52                   push edx
// 00538fca  e881f7ffff           call 0x538750
// 00538fcf  83c408               add esp, 8
// 00538fd2  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00538fd6  751c                 jne 0x538ff4
// 00538fd8  85db                 test ebx, ebx
// 00538fda  7618                 jbe 0x538ff4
// 00538fdc  8d642400             lea esp, [esp]
// 00538fe0  0fbe0f               movsx ecx, byte ptr [edi]
// 00538fe3  6a01                 push 1
// 00538fe5  51                   push ecx
// 00538fe6  e865f7ffff           call 0x538750
// 00538feb  83c408               add esp, 8
// 00538fee  47                   inc edi
// 00538fef  83eb01               sub ebx, 1
// 00538ff2  75ec                 jne 0x538fe0
// 00538ff4  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00538ff7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00538ffb  33db                 xor ebx, ebx
// 00538ffd  33ed                 xor ebp, ebp
// 00538fff  41                   inc ecx
// 00539000  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00539004  894c2410             mov dword ptr [esp + 0x10], ecx
// 00539008  0f8ec7feffff         jle 0x538ed5
// 0053900e  85ed                 test ebp, ebp
// 00539010  7f04                 jg 0x539016
// 00539012  85db                 test ebx, ebx
// 00539014  7622                 jbe 0x539038
// 00539016  ff4638               inc dword ptr [esi + 0x38]
// 00539019  8b4638               mov eax, dword ptr [esi + 0x38]
// 0053901c  015e3c               add dword ptr [esi + 0x3c], ebx
// 0053901f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00539022  3dff7f0000           cmp eax, 0x7fff
// 00539027  7408                 je 0x539031
// 00539029  81f9a9030000         cmp ecx, 0x3a9
// 0053902f  7607                 jbe 0x539038
// 00539031  8bc6                 mov eax, esi
// 00539033  e888f8ffff           call 0x5388c0
// 00539038  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0053903f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00539042  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00539045  890a                 mov dword ptr [edx], ecx
// 00539047  8b5018               mov edx, dword ptr [eax + 0x18]
// 0053904a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0053904d  894a04               mov dword ptr [edx + 4], ecx
// 00539050  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00539056  85c0                 test eax, eax
// 00539058  7416                 je 0x539070
// 0053905a  837e4400             cmp dword ptr [esi + 0x44], 0
// 0053905e  750d                 jne 0x53906d
// 00539060  8b5648               mov edx, dword ptr [esi + 0x48]
// 00539063  42                   inc edx
// 00539064  83e207               and edx, 7
// 00539067  894644               mov dword ptr [esi + 0x44], eax
// 0053906a  895648               mov dword ptr [esi + 0x48], edx
// 0053906d  ff4e44               dec dword ptr [esi + 0x44]
// 00539070  5f                   pop edi
// 00539071  5e                   pop esi
// 00539072  5d                   pop ebp
// 00539073  b001                 mov al, 1
// 00539075  5b                   pop ebx
// 00539076  81c414010000         add esp, 0x114
// 0053907c  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
