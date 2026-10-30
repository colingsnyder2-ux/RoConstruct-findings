// from server: 100% by auto
// roc 2010-06 00586c80  unit: seg_00580000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00586c80
//
// 00586c80  81ec14010000         sub esp, 0x114
// 00586c86  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 00586c8d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 00586c93  8b5018               mov edx, dword ptr [eax + 0x18]
// 00586c96  53                   push ebx
// 00586c97  8b9830010000         mov ebx, dword ptr [eax + 0x130]
// 00586c9d  55                   push ebp
// 00586c9e  56                   push esi
// 00586c9f  8bb05c010000         mov esi, dword ptr [eax + 0x15c]
// 00586ca5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00586ca9  8b0a                 mov ecx, dword ptr [edx]
// 00586cab  894e10               mov dword ptr [esi + 0x10], ecx
// 00586cae  8b5018               mov edx, dword ptr [eax + 0x18]
// 00586cb1  8b4a04               mov ecx, dword ptr [edx + 4]
// 00586cb4  894e14               mov dword ptr [esi + 0x14], ecx
// 00586cb7  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 00586cbe  57                   push edi
// 00586cbf  895c2418             mov dword ptr [esp + 0x18], ebx
// 00586cc3  741b                 je 0x586ce0
// 00586cc5  837e4400             cmp dword ptr [esi + 0x44], 0
// 00586cc9  7515                 jne 0x586ce0
// 00586ccb  8b5648               mov edx, dword ptr [esi + 0x48]
// 00586cce  52                   push edx
// 00586ccf  8bc6                 mov eax, esi
// 00586cd1  e8fafaffff           call 0x5867d0
// 00586cd6  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 00586cdd  83c404               add esp, 4
// 00586ce0  8b902c010000         mov edx, dword ptr [eax + 0x12c]
// 00586ce6  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 00586ced  8b29                 mov ebp, dword ptr [ecx]
// 00586cef  8bc2                 mov eax, edx
// 00586cf1  3bc3                 cmp eax, ebx
// 00586cf3  896c2420             mov dword ptr [esp + 0x20], ebp
// 00586cf7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00586cff  7f2a                 jg 0x586d2b
// 00586d01  8b0c85f834a200       mov ecx, dword ptr [eax*4 + 0xa234f8]
// 00586d08  0fbf7c4d00           movsx edi, word ptr [ebp + ecx*2]
// 00586d0d  85ff                 test edi, edi
// 00586d0f  7d02                 jge 0x586d13
// 00586d11  f7df                 neg edi
// 00586d13  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00586d17  d3ff                 sar edi, cl
// 00586d19  897c8424             mov dword ptr [esp + eax*4 + 0x24], edi
// 00586d1d  83ff01               cmp edi, 1
// 00586d20  7504                 jne 0x586d26
// 00586d22  8944241c             mov dword ptr [esp + 0x1c], eax
// 00586d26  40                   inc eax
// 00586d27  3bc3                 cmp eax, ebx
// 00586d29  7ed6                 jle 0x586d01
// 00586d2b  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00586d2e  037e3c               add edi, dword ptr [esi + 0x3c]
// 00586d31  8bca                 mov ecx, edx
// 00586d33  33ed                 xor ebp, ebp
// 00586d35  33db                 xor ebx, ebx
// 00586d37  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00586d3b  89542410             mov dword ptr [esp + 0x10], edx
// 00586d3f  0f8f63010000         jg 0x586ea8
// 00586d45  8b448c24             mov eax, dword ptr [esp + ecx*4 + 0x24]
// 00586d49  89442414             mov dword ptr [esp + 0x14], eax
// 00586d4d  85c0                 test eax, eax
// 00586d4f  7506                 jne 0x586d57
// 00586d51  45                   inc ebp
// 00586d52  e918010000           jmp 0x586e6f
// 00586d57  83fd0f               cmp ebp, 0xf
// 00586d5a  7e7a                 jle 0x586dd6
// 00586d5c  8d642400             lea esp, [esp]
// 00586d60  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00586d64  7f70                 jg 0x586dd6
// 00586d66  8bc6                 mov eax, esi
// 00586d68  e8c3f9ffff           call 0x586730
// 00586d6d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586d71  8b4634               mov eax, dword ptr [esi + 0x34]
// 00586d74  740c                 je 0x586d82
// 00586d76  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 00586d7a  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00586d80  eb1b                 jmp 0x586d9d
// 00586d82  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00586d86  0fbe90f0040000       movsx edx, byte ptr [eax + 0x4f0]
// 00586d8d  8b80c0030000         mov eax, dword ptr [eax + 0x3c0]
// 00586d93  52                   push edx
// 00586d94  50                   push eax
// 00586d95  e826f8ffff           call 0x5865c0
// 00586d9a  83c408               add esp, 8
// 00586d9d  83ed10               sub ebp, 0x10
// 00586da0  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586da4  751e                 jne 0x586dc4
// 00586da6  85db                 test ebx, ebx
// 00586da8  761a                 jbe 0x586dc4
// 00586daa  8d9b00000000         lea ebx, [ebx]
// 00586db0  0fbe0f               movsx ecx, byte ptr [edi]
// 00586db3  6a01                 push 1
// 00586db5  51                   push ecx
// 00586db6  e805f8ffff           call 0x5865c0
// 00586dbb  83c408               add esp, 8
// 00586dbe  47                   inc edi
// 00586dbf  83eb01               sub ebx, 1
// 00586dc2  75ec                 jne 0x586db0
// 00586dc4  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00586dc7  8b442414             mov eax, dword ptr [esp + 0x14]
// 00586dcb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00586dcf  33db                 xor ebx, ebx
// 00586dd1  83fd0f               cmp ebp, 0xf
// 00586dd4  7f8a                 jg 0x586d60
// 00586dd6  83f801               cmp eax, 1
// 00586dd9  7e0b                 jle 0x586de6
// 00586ddb  2401                 and al, 1
// 00586ddd  88041f               mov byte ptr [edi + ebx], al
// 00586de0  43                   inc ebx
// 00586de1  e989000000           jmp 0x586e6f
// 00586de6  8bc6                 mov eax, esi
// 00586de8  e843f9ffff           call 0x586730
// 00586ded  8b4634               mov eax, dword ptr [esi + 0x34]
// 00586df0  c1e504               shl ebp, 4
// 00586df3  45                   inc ebp
// 00586df4  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586df8  740c                 je 0x586e06
// 00586dfa  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 00586dfe  ff04aa               inc dword ptr [edx + ebp*4]
// 00586e01  8d04aa               lea eax, [edx + ebp*4]
// 00586e04  eb19                 jmp 0x586e1f
// 00586e06  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00586e0a  0fbe8c2800040000     movsx ecx, byte ptr [eax + ebp + 0x400]
// 00586e12  8b14a8               mov edx, dword ptr [eax + ebp*4]
// 00586e15  51                   push ecx
// 00586e16  52                   push edx
// 00586e17  e8a4f7ffff           call 0x5865c0
// 00586e1c  83c408               add esp, 8
// 00586e1f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00586e23  8b0c85f834a200       mov ecx, dword ptr [eax*4 + 0xa234f8]
// 00586e2a  8b442420             mov eax, dword ptr [esp + 0x20]
// 00586e2e  33d2                 xor edx, edx
// 00586e30  66391448             cmp word ptr [eax + ecx*2], dx
// 00586e34  6a01                 push 1
// 00586e36  0f9dc2               setge dl
// 00586e39  52                   push edx
// 00586e3a  e881f7ffff           call 0x5865c0
// 00586e3f  83c408               add esp, 8
// 00586e42  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00586e46  751c                 jne 0x586e64
// 00586e48  85db                 test ebx, ebx
// 00586e4a  7618                 jbe 0x586e64
// 00586e4c  8d642400             lea esp, [esp]
// 00586e50  0fbe0f               movsx ecx, byte ptr [edi]
// 00586e53  6a01                 push 1
// 00586e55  51                   push ecx
// 00586e56  e865f7ffff           call 0x5865c0
// 00586e5b  83c408               add esp, 8
// 00586e5e  47                   inc edi
// 00586e5f  83eb01               sub ebx, 1
// 00586e62  75ec                 jne 0x586e50
// 00586e64  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00586e67  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00586e6b  33db                 xor ebx, ebx
// 00586e6d  33ed                 xor ebp, ebp
// 00586e6f  41                   inc ecx
// 00586e70  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00586e74  894c2410             mov dword ptr [esp + 0x10], ecx
// 00586e78  0f8ec7feffff         jle 0x586d45
// 00586e7e  85ed                 test ebp, ebp
// 00586e80  7f04                 jg 0x586e86
// 00586e82  85db                 test ebx, ebx
// 00586e84  7622                 jbe 0x586ea8
// 00586e86  ff4638               inc dword ptr [esi + 0x38]
// 00586e89  8b4638               mov eax, dword ptr [esi + 0x38]
// 00586e8c  015e3c               add dword ptr [esi + 0x3c], ebx
// 00586e8f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00586e92  3dff7f0000           cmp eax, 0x7fff
// 00586e97  7408                 je 0x586ea1
// 00586e99  81f9a9030000         cmp ecx, 0x3a9
// 00586e9f  7607                 jbe 0x586ea8
// 00586ea1  8bc6                 mov eax, esi
// 00586ea3  e888f8ffff           call 0x586730
// 00586ea8  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 00586eaf  8b5018               mov edx, dword ptr [eax + 0x18]
// 00586eb2  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00586eb5  890a                 mov dword ptr [edx], ecx
// 00586eb7  8b5018               mov edx, dword ptr [eax + 0x18]
// 00586eba  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00586ebd  894a04               mov dword ptr [edx + 4], ecx
// 00586ec0  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00586ec6  85c0                 test eax, eax
// 00586ec8  7416                 je 0x586ee0
// 00586eca  837e4400             cmp dword ptr [esi + 0x44], 0
// 00586ece  750d                 jne 0x586edd
// 00586ed0  8b5648               mov edx, dword ptr [esi + 0x48]
// 00586ed3  42                   inc edx
// 00586ed4  83e207               and edx, 7
// 00586ed7  894644               mov dword ptr [esi + 0x44], eax
// 00586eda  895648               mov dword ptr [esi + 0x48], edx
// 00586edd  ff4e44               dec dword ptr [esi + 0x44]
// 00586ee0  5f                   pop edi
// 00586ee1  5e                   pop esi
// 00586ee2  5d                   pop ebp
// 00586ee3  b001                 mov al, 1
// 00586ee5  5b                   pop ebx
// 00586ee6  81c414010000         add esp, 0x114
// 00586eec  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
