// roc 2008-06 00479450  unit: CInstanceRecord::CNameItem  size: 498 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00479450
//
// 00479450  6aff                 push -1
// 00479452  68104a7c00           push 0x7c4a10
// 00479457  64a100000000         mov eax, dword ptr fs:[0]
// 0047945d  50                   push eax
// 0047945e  64892500000000       mov dword ptr fs:[0], esp
// 00479465  83ec0c               sub esp, 0xc
// 00479468  53                   push ebx
// 00479469  55                   push ebp
// 0047946a  56                   push esi
// 0047946b  57                   push edi
// 0047946c  8bf1                 mov esi, ecx
// 0047946e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00479472  33ff                 xor edi, edi
// 00479474  3bae14010000         cmp ebp, dword ptr [esi + 0x114]
// 0047947a  8bc5                 mov eax, ebp
// 0047947c  0f9c44242c           setl byte ptr [esp + 0x2c]
// 00479481  6bc05c               imul eax, eax, 0x5c
// 00479484  8d1c30               lea ebx, [eax + esi]
// 00479487  8b83d8040000         mov eax, dword ptr [ebx + 0x4d8]
// 0047948d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00479491  81c3d8040000         add ebx, 0x4d8
// 00479497  897c2424             mov dword ptr [esp + 0x24], edi
// 0047949b  897c2410             mov dword ptr [esp + 0x10], edi
// 0047949f  3bc7                 cmp eax, edi
// 004794a1  7410                 je 0x4794b3
// 004794a3  8bf8                 mov edi, eax
// 004794a5  83c004               add eax, 4
// 004794a8  50                   push eax
// 004794a9  897c2414             mov dword ptr [esp + 0x14], edi
// 004794ad  ff15b0218000         call dword ptr [0x8021b0]
// 004794b3  8b442430             mov eax, dword ptr [esp + 0x30]
// 004794b7  b901000000           mov ecx, 1
// 004794bc  014e74               add dword ptr [esi + 0x74], ecx
// 004794bf  c644242401           mov byte ptr [esp + 0x24], 1
// 004794c4  3bf8                 cmp edi, eax
// 004794c6  7546                 jne 0x47950e
// 004794c8  8b35ac218000         mov esi, dword ptr [0x8021ac]
// 004794ce  c644242400           mov byte ptr [esp + 0x24], 0
// 004794d3  85ff                 test edi, edi
// 004794d5  741f                 je 0x4794f6
// 004794d7  8d4704               lea eax, [edi + 4]
// 004794da  50                   push eax
// 004794db  ffd6                 call esi
// 004794dd  85c0                 test eax, eax
// 004794df  7511                 jne 0x4794f2
// 004794e1  8bcf                 mov ecx, edi
// 004794e3  e8a818feff           call 0x45ad90
// 004794e8  8b17                 mov edx, dword ptr [edi]
// 004794ea  8b02                 mov eax, dword ptr [edx]
// 004794ec  6a01                 push 1
// 004794ee  8bcf                 mov ecx, edi
// 004794f0  ffd0                 call eax
// 004794f2  8b442430             mov eax, dword ptr [esp + 0x30]
// 004794f6  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004794fe  85c0                 test eax, eax
// 00479500  0f8417010000         je 0x47961d
// 00479506  83c004               add eax, 4
// 00479509  e9ef000000           jmp 0x4795fd
// 0047950e  014e6c               add dword ptr [esi + 0x6c], ecx
// 00479511  50                   push eax
// 00479512  8bcb                 mov ecx, ebx
// 00479514  e887fa1100           call 0x598fa0
// 00479519  8b86c4040000         mov eax, dword ptr [esi + 0x4c4]
// 0047951f  3bc5                 cmp eax, ebp
// 00479521  7d02                 jge 0x479525
// 00479523  8bc5                 mov eax, ebp
// 00479525  8986c4040000         mov dword ptr [esi + 0x4c4], eax
// 0047952b  803d7eee960000       cmp byte ptr [0x96ee7e], 0
// 00479532  740d                 je 0x479541
// 00479534  8d8dc0840000         lea ecx, [ebp + 0x84c0]
// 0047953a  51                   push ecx
// 0047953b  ff1504f89600         call dword ptr [0x96f804]
// 00479541  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00479546  7405                 je 0x47954d
// 00479548  e8b39f0000           call 0x483500
// 0047954d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00479551  85c9                 test ecx, ecx
// 00479553  0f84d9000000         je 0x479632
// 00479559  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0047955c  e89fa1ffff           call 0x473700
// 00479561  89442414             mov dword ptr [esp + 0x14], eax
// 00479565  399caeec000000       cmp dword ptr [esi + ebp*4 + 0xec], ebx
// 0047956c  7413                 je 0x479581
// 0047956e  53                   push ebx
// 0047956f  50                   push eax
// 00479570  ff15d8298000         call dword ptr [0x8029d8]
// 00479576  8b442414             mov eax, dword ptr [esp + 0x14]
// 0047957a  899caeec000000       mov dword ptr [esi + ebp*4 + 0xec], ebx
// 00479581  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 00479586  7407                 je 0x47958f
// 00479588  50                   push eax
// 00479589  ff1550298000         call dword ptr [0x802950]
// 0047958f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00479593  85ff                 test edi, edi
// 00479595  740c                 je 0x4795a3
// 00479597  85c9                 test ecx, ecx
// 00479599  7408                 je 0x4795a3
// 0047959b  8a5770               mov dl, byte ptr [edi + 0x70]
// 0047959e  3a5170               cmp dl, byte ptr [ecx + 0x70]
// 004795a1  741d                 je 0x4795c0
// 004795a3  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004795a8  7416                 je 0x4795c0
// 004795aa  8b442418             mov eax, dword ptr [esp + 0x18]
// 004795ae  05dc040000           add eax, 0x4dc
// 004795b3  50                   push eax
// 004795b4  55                   push ebp
// 004795b5  8bce                 mov ecx, esi
// 004795b7  e894fbffff           call 0x479150
// 004795bc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004795c0  8b35ac218000         mov esi, dword ptr [0x8021ac]
// 004795c6  c644242400           mov byte ptr [esp + 0x24], 0
// 004795cb  85ff                 test edi, edi
// 004795cd  741f                 je 0x4795ee
// 004795cf  8d4704               lea eax, [edi + 4]
// 004795d2  50                   push eax
// 004795d3  ffd6                 call esi
// 004795d5  85c0                 test eax, eax
// 004795d7  7511                 jne 0x4795ea
// 004795d9  8bcf                 mov ecx, edi
// 004795db  e8b017feff           call 0x45ad90
// 004795e0  8b17                 mov edx, dword ptr [edi]
// 004795e2  8b02                 mov eax, dword ptr [edx]
// 004795e4  6a01                 push 1
// 004795e6  8bcf                 mov ecx, edi
// 004795e8  ffd0                 call eax
// 004795ea  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004795ee  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004795f6  85c9                 test ecx, ecx
// 004795f8  7423                 je 0x47961d
// 004795fa  8d4104               lea eax, [ecx + 4]
// 004795fd  50                   push eax
// 004795fe  ffd6                 call esi
// 00479600  85c0                 test eax, eax
// 00479602  7519                 jne 0x47961d
// 00479604  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00479608  e88317feff           call 0x45ad90
// 0047960d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00479611  85c9                 test ecx, ecx
// 00479613  7408                 je 0x47961d
// 00479615  8b11                 mov edx, dword ptr [ecx]
// 00479617  8b02                 mov eax, dword ptr [edx]
// 00479619  6a01                 push 1
// 0047961b  ffd0                 call eax
// 0047961d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00479621  5f                   pop edi
// 00479622  5e                   pop esi
// 00479623  5d                   pop ebp
// 00479624  5b                   pop ebx
// 00479625  64890d00000000       mov dword ptr fs:[0], ecx
// 0047962c  83c418               add esp, 0x18
// 0047962f  c20800               ret 8
// 00479632  c784aeec00000000000000 mov dword ptr [esi + ebp*4 + 0xec], 0
// 0047963d  e951ffffff           jmp 0x479593
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setTexture@RenderDevice@G3D@@QAEXIV?$ReferenceCountedPointer@VTexture@G3D@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
