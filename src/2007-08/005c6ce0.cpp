// from server: 100% by auto
// roc 2007-08 005c6ce0  unit: lua_exception  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6ce0
//
// 005c6ce0  53                   push ebx
// 005c6ce1  55                   push ebp
// 005c6ce2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005c6ce6  8bd8                 mov ebx, eax
// 005c6ce8  8b4504               mov eax, dword ptr [ebp + 4]
// 005c6ceb  83780806             cmp dword ptr [eax + 8], 6
// 005c6cef  56                   push esi
// 005c6cf0  57                   push edi
// 005c6cf1  0f8598000000         jne 0x5c6d8f
// 005c6cf7  8b4504               mov eax, dword ptr [ebp + 4]
// 005c6cfa  8b08                 mov ecx, dword ptr [eax]
// 005c6cfc  80790600             cmp byte ptr [ecx + 6], 0
// 005c6d00  0f8589000000         jne 0x5c6d8f
// 005c6d06  83780806             cmp dword ptr [eax + 8], 6
// 005c6d0a  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005c6d0d  7522                 jne 0x5c6d31
// 005c6d0f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c6d13  3b6914               cmp ebp, dword ptr [ecx + 0x14]
// 005c6d16  7506                 jne 0x5c6d1e
// 005c6d18  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 005c6d1b  894d0c               mov dword ptr [ebp + 0xc], ecx
// 005c6d1e  8b10                 mov edx, dword ptr [eax]
// 005c6d20  8b4210               mov eax, dword ptr [edx + 0x10]
// 005c6d23  8b750c               mov esi, dword ptr [ebp + 0xc]
// 005c6d26  2b700c               sub esi, dword ptr [eax + 0xc]
// 005c6d29  c1fe02               sar esi, 2
// 005c6d2c  83ee01               sub esi, 1
// 005c6d2f  eb03                 jmp 0x5c6d34
// 005c6d31  83ceff               or esi, 0xffffffff
// 005c6d34  56                   push esi
// 005c6d35  8d4b01               lea ecx, [ebx + 1]
// 005c6d38  51                   push ecx
// 005c6d39  57                   push edi
// 005c6d3a  e861c50400           call 0x6132a0
// 005c6d3f  8b542428             mov edx, dword ptr [esp + 0x28]
// 005c6d43  83c40c               add esp, 0xc
// 005c6d46  85c0                 test eax, eax
// 005c6d48  8902                 mov dword ptr [edx], eax
// 005c6d4a  754a                 jne 0x5c6d96
// 005c6d4c  53                   push ebx
// 005c6d4d  56                   push esi
// 005c6d4e  57                   push edi
// 005c6d4f  e8ccfaffff           call 0x5c6820
// 005c6d54  8bc8                 mov ecx, eax
// 005c6d56  83e13f               and ecx, 0x3f
// 005c6d59  83c40c               add esp, 0xc
// 005c6d5c  83f90b               cmp ecx, 0xb
// 005c6d5f  772e                 ja 0x5c6d8f
// 005c6d61  0fb6894c6e5c00       movzx ecx, byte ptr [ecx + 0x5c6e4c]
// 005c6d68  ff248d346e5c00       jmp dword ptr [ecx*4 + 0x5c6e34]
// 005c6d6f  8bc8                 mov ecx, eax
// 005c6d71  c1e806               shr eax, 6
// 005c6d74  c1e917               shr ecx, 0x17
// 005c6d77  25ff000000           and eax, 0xff
// 005c6d7c  3bc8                 cmp ecx, eax
// 005c6d7e  7d0f                 jge 0x5c6d8f
// 005c6d80  8b5504               mov edx, dword ptr [ebp + 4]
// 005c6d83  837a0806             cmp dword ptr [edx + 8], 6
// 005c6d87  8bd9                 mov ebx, ecx
// 005c6d89  0f8468ffffff         je 0x5c6cf7
// 005c6d8f  5f                   pop edi
// 005c6d90  5e                   pop esi
// 005c6d91  5d                   pop ebp
// 005c6d92  33c0                 xor eax, eax
// 005c6d94  5b                   pop ebx
// 005c6d95  c3                   ret 
// 005c6d96  5f                   pop edi
// 005c6d97  5e                   pop esi
// 005c6d98  5d                   pop ebp
// 005c6d99  b870977b00           mov eax, 0x7b9770
// 005c6d9e  5b                   pop ebx
// 005c6d9f  c3                   ret 
// 005c6da0  8b4f08               mov ecx, dword ptr [edi + 8]
// 005c6da3  c1e80e               shr eax, 0xe
// 005c6da6  c1e004               shl eax, 4
// 005c6da9  8b1408               mov edx, dword ptr [eax + ecx]
// 005c6dac  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c6db0  5f                   pop edi
// 005c6db1  5e                   pop esi
// 005c6db2  83c210               add edx, 0x10
// 005c6db5  5d                   pop ebp
// 005c6db6  8910                 mov dword ptr [eax], edx
// 005c6db8  b868977b00           mov eax, 0x7b9768
// 005c6dbd  5b                   pop ebx
// 005c6dbe  c3                   ret 
// 005c6dbf  c1e80e               shr eax, 0xe
// 005c6dc2  25ff010000           and eax, 0x1ff
// 005c6dc7  8bcf                 mov ecx, edi
// 005c6dc9  e8e2feffff           call 0x5c6cb0
// 005c6dce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c6dd2  5f                   pop edi
// 005c6dd3  5e                   pop esi
// 005c6dd4  5d                   pop ebp
// 005c6dd5  8901                 mov dword ptr [ecx], eax
// 005c6dd7  b860977b00           mov eax, 0x7b9760
// 005c6ddc  5b                   pop ebx
// 005c6ddd  c3                   ret 
// 005c6dde  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 005c6de1  85ff                 test edi, edi
// 005c6de3  7419                 je 0x5c6dfe
// 005c6de5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005c6de9  c1e817               shr eax, 0x17
// 005c6dec  8b0487               mov eax, dword ptr [edi + eax*4]
// 005c6def  5f                   pop edi
// 005c6df0  5e                   pop esi
// 005c6df1  83c010               add eax, 0x10
// 005c6df4  5d                   pop ebp
// 005c6df5  8902                 mov dword ptr [edx], eax
// 005c6df7  b858977b00           mov eax, 0x7b9758
// 005c6dfc  5b                   pop ebx
// 005c6dfd  c3                   ret 
// 005c6dfe  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005c6e02  5f                   pop edi
// 005c6e03  5e                   pop esi
// 005c6e04  b8d8de7900           mov eax, 0x79ded8
// 005c6e09  5d                   pop ebp
// 005c6e0a  8902                 mov dword ptr [edx], eax
// 005c6e0c  b858977b00           mov eax, 0x7b9758
// 005c6e11  5b                   pop ebx
// 005c6e12  c3                   ret 
// 005c6e13  c1e80e               shr eax, 0xe
// 005c6e16  25ff010000           and eax, 0x1ff
// 005c6e1b  8bcf                 mov ecx, edi
// 005c6e1d  e88efeffff           call 0x5c6cb0
// 005c6e22  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c6e26  5f                   pop edi
// 005c6e27  5e                   pop esi
// 005c6e28  5d                   pop ebp
// 005c6e29  8901                 mov dword ptr [ecx], eax
// 005c6e2b  b810917b00           mov eax, 0x7b9110
// 005c6e30  5b                   pop ebx
// 005c6e31  c3                   ret 
// 005c6e32  8bff                 mov edi, edi
// 005c6e34  6f                   outsd dx, dword ptr [esi]
// 005c6e35  6d                   insd dword ptr es:[edi], dx
// 005c6e36  5c                   pop esp
// 005c6e37  00de                 add dh, bl
// 005c6e39  6d                   insd dword ptr es:[edi], dx
// 005c6e3a  5c                   pop esp
// 005c6e3b  00a06d5c00bf         add byte ptr [eax - 0x40ffa393], ah
// 005c6e41  6d                   insd dword ptr es:[edi], dx
// 005c6e42  5c                   pop esp
// 005c6e43  0013                 add byte ptr [ebx], dl
// 005c6e45  6e                   outsb dx, byte ptr [esi]
// 005c6e46  5c                   pop esp
// 005c6e47  008f6d5c0000         add byte ptr [edi + 0x5c6d], cl
// 005c6e4d  0505050102           add eax, 0x2010505
// 005c6e52  030505050504         add eax, dword ptr [0x4050505]
// library lua-5.1.4/ldebug.c (function _getobjname)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
