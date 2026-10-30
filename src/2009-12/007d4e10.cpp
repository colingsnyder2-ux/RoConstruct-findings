// roc 2009-12 007d4e10  unit: seg_007d0000  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d4e10
//
// 007d4e10  56                   push esi
// 007d4e11  8b742408             mov esi, dword ptr [esp + 8]
// 007d4e15  8b06                 mov eax, dword ptr [esi]
// 007d4e17  66ff4034             inc word ptr [eax + 0x34]
// 007d4e1b  8b06                 mov eax, dword ptr [esi]
// 007d4e1d  b9c8000000           mov ecx, 0xc8
// 007d4e22  57                   push edi
// 007d4e23  66394834             cmp word ptr [eax + 0x34], cx
// 007d4e27  7621                 jbe 0x7d4e4a
// 007d4e29  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d4e2c  6890f09e00           push 0x9ef090
// 007d4e31  52                   push edx
// 007d4e32  683cf09e00           push 0x9ef03c
// 007d4e37  50                   push eax
// 007d4e38  e84357fcff           call 0x79a580
// 007d4e3d  8b06                 mov eax, dword ptr [esi]
// 007d4e3f  6a03                 push 3
// 007d4e41  50                   push eax
// 007d4e42  e8092afcff           call 0x797850
// 007d4e47  83c418               add esp, 0x18
// 007d4e4a  8b0e                 mov ecx, dword ptr [esi]
// 007d4e4c  51                   push ecx
// 007d4e4d  e8eec0ffff           call 0x7d0f40
// 007d4e52  8b16                 mov edx, dword ptr [esi]
// 007d4e54  8bf8                 mov edi, eax
// 007d4e56  8b4208               mov eax, dword ptr [edx + 8]
// 007d4e59  8938                 mov dword ptr [eax], edi
// 007d4e5b  c7400809000000       mov dword ptr [eax + 8], 9
// 007d4e62  8b06                 mov eax, dword ptr [esi]
// 007d4e64  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 007d4e67  2b4808               sub ecx, dword ptr [eax + 8]
// 007d4e6a  83c404               add esp, 4
// 007d4e6d  83f910               cmp ecx, 0x10
// 007d4e70  7f0b                 jg 0x7d4e7d
// 007d4e72  6a01                 push 1
// 007d4e74  50                   push eax
// 007d4e75  e8b624fcff           call 0x797330
// 007d4e7a  83c408               add esp, 8
// 007d4e7d  8b06                 mov eax, dword ptr [esi]
// 007d4e7f  83400810             add dword ptr [eax + 8], 0x10
// 007d4e83  e8f8f8ffff           call 0x7d4780
// 007d4e88  894720               mov dword ptr [edi + 0x20], eax
// 007d4e8b  85c0                 test eax, eax
// 007d4e8d  7507                 jne 0x7d4e96
// 007d4e8f  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d4e93  895720               mov dword ptr [edi + 0x20], edx
// 007d4e96  e875f8ffff           call 0x7d4710
// 007d4e9b  89473c               mov dword ptr [edi + 0x3c], eax
// 007d4e9e  e86df8ffff           call 0x7d4710
// 007d4ea3  894740               mov dword ptr [edi + 0x40], eax
// 007d4ea6  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d4ea9  6a01                 push 1
// 007d4eab  8d442410             lea eax, [esp + 0x10]
// 007d4eaf  50                   push eax
// 007d4eb0  51                   push ecx
// 007d4eb1  e8eac2ffff           call 0x7d11a0
// 007d4eb6  83c40c               add esp, 0xc
// 007d4eb9  85c0                 test eax, eax
// 007d4ebb  7423                 je 0x7d4ee0
// 007d4ebd  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d4ec0  8b06                 mov eax, dword ptr [esi]
// 007d4ec2  6858f09e00           push 0x9ef058
// 007d4ec7  52                   push edx
// 007d4ec8  683cf09e00           push 0x9ef03c
// 007d4ecd  50                   push eax
// 007d4ece  e8ad56fcff           call 0x79a580
// 007d4ed3  8b0e                 mov ecx, dword ptr [esi]
// 007d4ed5  6a03                 push 3
// 007d4ed7  51                   push ecx
// 007d4ed8  e87329fcff           call 0x797850
// 007d4edd  83c418               add esp, 0x18
// 007d4ee0  8a54240c             mov dl, byte ptr [esp + 0xc]
// 007d4ee4  6a01                 push 1
// 007d4ee6  8d442410             lea eax, [esp + 0x10]
// 007d4eea  885748               mov byte ptr [edi + 0x48], dl
// 007d4eed  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d4ef0  50                   push eax
// 007d4ef1  51                   push ecx
// 007d4ef2  e8a9c2ffff           call 0x7d11a0
// 007d4ef7  83c40c               add esp, 0xc
// 007d4efa  85c0                 test eax, eax
// 007d4efc  7423                 je 0x7d4f21
// 007d4efe  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d4f01  8b06                 mov eax, dword ptr [esi]
// 007d4f03  6858f09e00           push 0x9ef058
// 007d4f08  52                   push edx
// 007d4f09  683cf09e00           push 0x9ef03c
// 007d4f0e  50                   push eax
// 007d4f0f  e86c56fcff           call 0x79a580
// 007d4f14  8b0e                 mov ecx, dword ptr [esi]
// 007d4f16  6a03                 push 3
// 007d4f18  51                   push ecx
// 007d4f19  e83229fcff           call 0x797850
// 007d4f1e  83c418               add esp, 0x18
// 007d4f21  8a54240c             mov dl, byte ptr [esp + 0xc]
// 007d4f25  6a01                 push 1
// 007d4f27  8d442410             lea eax, [esp + 0x10]
// 007d4f2b  885749               mov byte ptr [edi + 0x49], dl
// 007d4f2e  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d4f31  50                   push eax
// 007d4f32  51                   push ecx
// 007d4f33  e868c2ffff           call 0x7d11a0
// 007d4f38  83c40c               add esp, 0xc
// 007d4f3b  85c0                 test eax, eax
// 007d4f3d  7423                 je 0x7d4f62
// 007d4f3f  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d4f42  8b06                 mov eax, dword ptr [esi]
// 007d4f44  6858f09e00           push 0x9ef058
// 007d4f49  52                   push edx
// 007d4f4a  683cf09e00           push 0x9ef03c
// 007d4f4f  50                   push eax
// 007d4f50  e82b56fcff           call 0x79a580
// 007d4f55  8b0e                 mov ecx, dword ptr [esi]
// 007d4f57  6a03                 push 3
// 007d4f59  51                   push ecx
// 007d4f5a  e8f128fcff           call 0x797850
// 007d4f5f  83c418               add esp, 0x18
// 007d4f62  8a54240c             mov dl, byte ptr [esp + 0xc]
// 007d4f66  6a01                 push 1
// 007d4f68  8d442410             lea eax, [esp + 0x10]
// 007d4f6c  88574a               mov byte ptr [edi + 0x4a], dl
// 007d4f6f  8b4e04               mov ecx, dword ptr [esi + 4]
// 007d4f72  50                   push eax
// 007d4f73  51                   push ecx
// 007d4f74  e827c2ffff           call 0x7d11a0
// 007d4f79  83c40c               add esp, 0xc
// 007d4f7c  85c0                 test eax, eax
// 007d4f7e  7423                 je 0x7d4fa3
// 007d4f80  8b560c               mov edx, dword ptr [esi + 0xc]
// 007d4f83  8b06                 mov eax, dword ptr [esi]
// 007d4f85  6858f09e00           push 0x9ef058
// 007d4f8a  52                   push edx
// 007d4f8b  683cf09e00           push 0x9ef03c
// 007d4f90  50                   push eax
// 007d4f91  e8ea55fcff           call 0x79a580
// 007d4f96  8b0e                 mov ecx, dword ptr [esi]
// 007d4f98  6a03                 push 3
// 007d4f9a  51                   push ecx
// 007d4f9b  e8b028fcff           call 0x797850
// 007d4fa0  83c418               add esp, 0x18
// 007d4fa3  8a54240c             mov dl, byte ptr [esp + 0xc]
// 007d4fa7  53                   push ebx
// 007d4fa8  8bdf                 mov ebx, edi
// 007d4faa  8bc6                 mov eax, esi
// 007d4fac  88574b               mov byte ptr [edi + 0x4b], dl
// 007d4faf  e87cf8ffff           call 0x7d4830
// 007d4fb4  57                   push edi
// 007d4fb5  8bc6                 mov eax, esi
// 007d4fb7  e8f4f8ffff           call 0x7d48b0
// 007d4fbc  8bc6                 mov eax, esi
// 007d4fbe  e88dfbffff           call 0x7d4b50
// 007d4fc3  57                   push edi
// 007d4fc4  e80760fcff           call 0x79afd0
// 007d4fc9  83c408               add esp, 8
// 007d4fcc  5b                   pop ebx
// 007d4fcd  85c0                 test eax, eax
// 007d4fcf  7523                 jne 0x7d4ff4
// 007d4fd1  8b460c               mov eax, dword ptr [esi + 0xc]
// 007d4fd4  8b0e                 mov ecx, dword ptr [esi]
// 007d4fd6  6884f09e00           push 0x9ef084
// 007d4fdb  50                   push eax
// 007d4fdc  683cf09e00           push 0x9ef03c
// 007d4fe1  51                   push ecx
// 007d4fe2  e89955fcff           call 0x79a580
// 007d4fe7  8b16                 mov edx, dword ptr [esi]
// 007d4fe9  6a03                 push 3
// 007d4feb  52                   push edx
// 007d4fec  e85f28fcff           call 0x797850
// 007d4ff1  83c418               add esp, 0x18
// 007d4ff4  8b06                 mov eax, dword ptr [esi]
// 007d4ff6  834008f0             add dword ptr [eax + 8], -0x10
// 007d4ffa  8b36                 mov esi, dword ptr [esi]
// 007d4ffc  b8ffff0000           mov eax, 0xffff
// 007d5001  66014634             add word ptr [esi + 0x34], ax
// 007d5005  8bc7                 mov eax, edi
// 007d5007  5f                   pop edi
// 007d5008  5e                   pop esi
// 007d5009  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadFunction)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
