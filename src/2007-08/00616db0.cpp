// from server: 100% by auto
// roc 2007-08 00616db0  unit: seg_00610000  size: 704 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00616db0
//
// 00616db0  83ec08               sub esp, 8
// 00616db3  53                   push ebx
// 00616db4  55                   push ebp
// 00616db5  56                   push esi
// 00616db6  8bf0                 mov esi, eax
// 00616db8  e8b3fbffff           call 0x616970
// 00616dbd  8bd8                 mov ebx, eax
// 00616dbf  8d4301               lea eax, [ebx + 1]
// 00616dc2  3dffffff3f           cmp eax, 0x3fffffff
// 00616dc7  7719                 ja 0x616de2
// 00616dc9  8b16                 mov edx, dword ptr [esi]
// 00616dcb  8d0c9d00000000       lea ecx, [ebx*4]
// 00616dd2  51                   push ecx
// 00616dd3  6a00                 push 0
// 00616dd5  6a00                 push 0
// 00616dd7  52                   push edx
// 00616dd8  e813ccffff           call 0x6139f0
// 00616ddd  83c410               add esp, 0x10
// 00616de0  eb0b                 jmp 0x616ded
// 00616de2  8b06                 mov eax, dword ptr [esi]
// 00616de4  50                   push eax
// 00616de5  e8e6cbffff           call 0x6139d0
// 00616dea  83c404               add esp, 4
// 00616ded  8d0c9d00000000       lea ecx, [ebx*4]
// 00616df4  51                   push ecx
// 00616df5  894714               mov dword ptr [edi + 0x14], eax
// 00616df8  895f30               mov dword ptr [edi + 0x30], ebx
// 00616dfb  8b5604               mov edx, dword ptr [esi + 4]
// 00616dfe  50                   push eax
// 00616dff  52                   push edx
// 00616e00  e8bbc5ffff           call 0x6133c0
// 00616e05  83c40c               add esp, 0xc
// 00616e08  85c0                 test eax, eax
// 00616e0a  7423                 je 0x616e2f
// 00616e0c  8b460c               mov eax, dword ptr [esi + 0xc]
// 00616e0f  8b0e                 mov ecx, dword ptr [esi]
// 00616e11  68e0357c00           push 0x7c35e0
// 00616e16  50                   push eax
// 00616e17  68c4357c00           push 0x7c35c4
// 00616e1c  51                   push ecx
// 00616e1d  e86e80ffff           call 0x60ee90
// 00616e22  8b16                 mov edx, dword ptr [esi]
// 00616e24  6a03                 push 3
// 00616e26  52                   push edx
// 00616e27  e8f4f1faff           call 0x5c6020
// 00616e2c  83c418               add esp, 0x18
// 00616e2f  e83cfbffff           call 0x616970
// 00616e34  8bd8                 mov ebx, eax
// 00616e36  8d4301               lea eax, [ebx + 1]
// 00616e39  3d55555515           cmp eax, 0x15555555
// 00616e3e  7719                 ja 0x616e59
// 00616e40  8b16                 mov edx, dword ptr [esi]
// 00616e42  8d0c5b               lea ecx, [ebx + ebx*2]
// 00616e45  03c9                 add ecx, ecx
// 00616e47  03c9                 add ecx, ecx
// 00616e49  51                   push ecx
// 00616e4a  6a00                 push 0
// 00616e4c  6a00                 push 0
// 00616e4e  52                   push edx
// 00616e4f  e89ccbffff           call 0x6139f0
// 00616e54  83c410               add esp, 0x10
// 00616e57  eb0b                 jmp 0x616e64
// 00616e59  8b06                 mov eax, dword ptr [esi]
// 00616e5b  50                   push eax
// 00616e5c  e86fcbffff           call 0x6139d0
// 00616e61  83c404               add esp, 4
// 00616e64  85db                 test ebx, ebx
// 00616e66  894718               mov dword ptr [edi + 0x18], eax
// 00616e69  895f38               mov dword ptr [edi + 0x38], ebx
// 00616e6c  0f8e23010000         jle 0x616f95
// 00616e72  33c0                 xor eax, eax
// 00616e74  8bcb                 mov ecx, ebx
// 00616e76  eb08                 jmp 0x616e80
// 00616e78  8da42400000000       lea esp, [esp]
// 00616e7f  90                   nop 
// 00616e80  8b5718               mov edx, dword ptr [edi + 0x18]
// 00616e83  c7041000000000       mov dword ptr [eax + edx], 0
// 00616e8a  83c00c               add eax, 0xc
// 00616e8d  83e901               sub ecx, 1
// 00616e90  75ee                 jne 0x616e80
// 00616e92  85db                 test ebx, ebx
// 00616e94  0f8efb000000         jle 0x616f95
// 00616e9a  33ed                 xor ebp, ebp
// 00616e9c  8d642400             lea esp, [esp]
// 00616ea0  e83bfbffff           call 0x6169e0
// 00616ea5  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00616ea8  6a04                 push 4
// 00616eaa  8d542410             lea edx, [esp + 0x10]
// 00616eae  890429               mov dword ptr [ecx + ebp], eax
// 00616eb1  8b4604               mov eax, dword ptr [esi + 4]
// 00616eb4  52                   push edx
// 00616eb5  50                   push eax
// 00616eb6  e805c5ffff           call 0x6133c0
// 00616ebb  83c40c               add esp, 0xc
// 00616ebe  85c0                 test eax, eax
// 00616ec0  7423                 je 0x616ee5
// 00616ec2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00616ec5  8b16                 mov edx, dword ptr [esi]
// 00616ec7  68e0357c00           push 0x7c35e0
// 00616ecc  51                   push ecx
// 00616ecd  68c4357c00           push 0x7c35c4
// 00616ed2  52                   push edx
// 00616ed3  e8b87fffff           call 0x60ee90
// 00616ed8  8b06                 mov eax, dword ptr [esi]
// 00616eda  6a03                 push 3
// 00616edc  50                   push eax
// 00616edd  e83ef1faff           call 0x5c6020
// 00616ee2  83c418               add esp, 0x18
// 00616ee5  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00616eea  7d23                 jge 0x616f0f
// 00616eec  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00616eef  8b16                 mov edx, dword ptr [esi]
// 00616ef1  68f0357c00           push 0x7c35f0
// 00616ef6  51                   push ecx
// 00616ef7  68c4357c00           push 0x7c35c4
// 00616efc  52                   push edx
// 00616efd  e88e7fffff           call 0x60ee90
// 00616f02  8b06                 mov eax, dword ptr [esi]
// 00616f04  6a03                 push 3
// 00616f06  50                   push eax
// 00616f07  e814f1faff           call 0x5c6020
// 00616f0c  83c418               add esp, 0x18
// 00616f0f  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00616f12  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00616f16  6a04                 push 4
// 00616f18  8d442414             lea eax, [esp + 0x14]
// 00616f1c  89542904             mov dword ptr [ecx + ebp + 4], edx
// 00616f20  8b4e04               mov ecx, dword ptr [esi + 4]
// 00616f23  50                   push eax
// 00616f24  51                   push ecx
// 00616f25  e896c4ffff           call 0x6133c0
// 00616f2a  83c40c               add esp, 0xc
// 00616f2d  85c0                 test eax, eax
// 00616f2f  7423                 je 0x616f54
// 00616f31  8b560c               mov edx, dword ptr [esi + 0xc]
// 00616f34  8b06                 mov eax, dword ptr [esi]
// 00616f36  68e0357c00           push 0x7c35e0
// 00616f3b  52                   push edx
// 00616f3c  68c4357c00           push 0x7c35c4
// 00616f41  50                   push eax
// 00616f42  e8497fffff           call 0x60ee90
// 00616f47  8b0e                 mov ecx, dword ptr [esi]
// 00616f49  6a03                 push 3
// 00616f4b  51                   push ecx
// 00616f4c  e8cff0faff           call 0x5c6020
// 00616f51  83c418               add esp, 0x18
// 00616f54  837c241000           cmp dword ptr [esp + 0x10], 0
// 00616f59  7d23                 jge 0x616f7e
// 00616f5b  8b560c               mov edx, dword ptr [esi + 0xc]
// 00616f5e  8b06                 mov eax, dword ptr [esi]
// 00616f60  68f0357c00           push 0x7c35f0
// 00616f65  52                   push edx
// 00616f66  68c4357c00           push 0x7c35c4
// 00616f6b  50                   push eax
// 00616f6c  e81f7fffff           call 0x60ee90
// 00616f71  8b0e                 mov ecx, dword ptr [esi]
// 00616f73  6a03                 push 3
// 00616f75  51                   push ecx
// 00616f76  e8a5f0faff           call 0x5c6020
// 00616f7b  83c418               add esp, 0x18
// 00616f7e  8b5718               mov edx, dword ptr [edi + 0x18]
// 00616f81  8b442410             mov eax, dword ptr [esp + 0x10]
// 00616f85  89442a08             mov dword ptr [edx + ebp + 8], eax
// 00616f89  83c50c               add ebp, 0xc
// 00616f8c  83eb01               sub ebx, 1
// 00616f8f  0f850bffffff         jne 0x616ea0
// 00616f95  8b5604               mov edx, dword ptr [esi + 4]
// 00616f98  6a04                 push 4
// 00616f9a  8d4c2414             lea ecx, [esp + 0x14]
// 00616f9e  51                   push ecx
// 00616f9f  52                   push edx
// 00616fa0  e81bc4ffff           call 0x6133c0
// 00616fa5  83c40c               add esp, 0xc
// 00616fa8  85c0                 test eax, eax
// 00616faa  7423                 je 0x616fcf
// 00616fac  8b460c               mov eax, dword ptr [esi + 0xc]
// 00616faf  8b0e                 mov ecx, dword ptr [esi]
// 00616fb1  68e0357c00           push 0x7c35e0
// 00616fb6  50                   push eax
// 00616fb7  68c4357c00           push 0x7c35c4
// 00616fbc  51                   push ecx
// 00616fbd  e8ce7effff           call 0x60ee90
// 00616fc2  8b16                 mov edx, dword ptr [esi]
// 00616fc4  6a03                 push 3
// 00616fc6  52                   push edx
// 00616fc7  e854f0faff           call 0x5c6020
// 00616fcc  83c418               add esp, 0x18
// 00616fcf  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00616fd3  85db                 test ebx, ebx
// 00616fd5  7d27                 jge 0x616ffe
// 00616fd7  8b460c               mov eax, dword ptr [esi + 0xc]
// 00616fda  8b0e                 mov ecx, dword ptr [esi]
// 00616fdc  68f0357c00           push 0x7c35f0
// 00616fe1  50                   push eax
// 00616fe2  68c4357c00           push 0x7c35c4
// 00616fe7  51                   push ecx
// 00616fe8  e8a37effff           call 0x60ee90
// 00616fed  8b16                 mov edx, dword ptr [esi]
// 00616fef  6a03                 push 3
// 00616ff1  52                   push edx
// 00616ff2  e829f0faff           call 0x5c6020
// 00616ff7  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00616ffb  83c418               add esp, 0x18
// 00616ffe  8d4301               lea eax, [ebx + 1]
// 00617001  3dffffff3f           cmp eax, 0x3fffffff
// 00617006  7719                 ja 0x617021
// 00617008  8b16                 mov edx, dword ptr [esi]
// 0061700a  8d0c9d00000000       lea ecx, [ebx*4]
// 00617011  51                   push ecx
// 00617012  6a00                 push 0
// 00617014  6a00                 push 0
// 00617016  52                   push edx
// 00617017  e8d4c9ffff           call 0x6139f0
// 0061701c  83c410               add esp, 0x10
// 0061701f  eb0b                 jmp 0x61702c
// 00617021  8b06                 mov eax, dword ptr [esi]
// 00617023  50                   push eax
// 00617024  e8a7c9ffff           call 0x6139d0
// 00617029  83c404               add esp, 4
// 0061702c  89471c               mov dword ptr [edi + 0x1c], eax
// 0061702f  33c0                 xor eax, eax
// 00617031  85db                 test ebx, ebx
// 00617033  895f24               mov dword ptr [edi + 0x24], ebx
// 00617036  7e19                 jle 0x617051
// 00617038  eb06                 jmp 0x617040
// 0061703a  8d9b00000000         lea ebx, [ebx]
// 00617040  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00617043  c7048100000000       mov dword ptr [ecx + eax*4], 0
// 0061704a  83c001               add eax, 1
// 0061704d  3bc3                 cmp eax, ebx
// 0061704f  7cef                 jl 0x617040
// 00617051  33ed                 xor ebp, ebp
// 00617053  85db                 test ebx, ebx
// 00617055  7e12                 jle 0x617069
// 00617057  e884f9ffff           call 0x6169e0
// 0061705c  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0061705f  8904aa               mov dword ptr [edx + ebp*4], eax
// 00617062  83c501               add ebp, 1
// 00617065  3beb                 cmp ebp, ebx
// 00617067  7cee                 jl 0x617057
// 00617069  5e                   pop esi
// 0061706a  5d                   pop ebp
// 0061706b  5b                   pop ebx
// 0061706c  83c408               add esp, 8
// 0061706f  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadDebug)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
