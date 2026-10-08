// from server: 100% by auto
// roc 2008-06 005158c0  unit: seg_00510000  size: 308 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005158c0
//
// 005158c0  6aff                 push -1
// 005158c2  68cc6f7c00           push 0x7c6fcc
// 005158c7  64a100000000         mov eax, dword ptr fs:[0]
// 005158cd  50                   push eax
// 005158ce  64892500000000       mov dword ptr fs:[0], esp
// 005158d5  51                   push ecx
// 005158d6  53                   push ebx
// 005158d7  56                   push esi
// 005158d8  8bf1                 mov esi, ecx
// 005158da  57                   push edi
// 005158db  8d7e08               lea edi, [esi + 8]
// 005158de  8bcf                 mov ecx, edi
// 005158e0  8974240c             mov dword ptr [esp + 0xc], esi
// 005158e4  c70648898200         mov dword ptr [esi], 0x828948
// 005158ea  ff1560248000         call dword ptr [0x802460]
// 005158f0  33db                 xor ebx, ebx
// 005158f2  895c2418             mov dword ptr [esp + 0x18], ebx
// 005158f6  895e30               mov dword ptr [esi + 0x30], ebx
// 005158f9  895e28               mov dword ptr [esi + 0x28], ebx
// 005158fc  895e34               mov dword ptr [esi + 0x34], ebx
// 005158ff  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00515902  385c2430             cmp byte ptr [esp + 0x30], bl
// 00515906  750a                 jne 0x515912
// 00515908  385c242c             cmp byte ptr [esp + 0x2c], bl
// 0051590c  7504                 jne 0x515912
// 0051590e  33c0                 xor eax, eax
// 00515910  eb05                 jmp 0x515917
// 00515912  b801000000           mov eax, 1
// 00515917  884648               mov byte ptr [esi + 0x48], al
// 0051591a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0051591e  68c8878200           push 0x8287c8
// 00515923  8bcf                 mov ecx, edi
// 00515925  894604               mov dword ptr [esi + 4], eax
// 00515928  ff154c248000         call dword ptr [0x80244c]
// 0051592e  8b7e04               mov edi, dword ptr [esi + 4]
// 00515931  895e44               mov dword ptr [esi + 0x44], ebx
// 00515934  e8472fffff           call 0x508880
// 00515939  3bf8                 cmp edi, eax
// 0051593b  0f95c0               setne al
// 0051593e  884624               mov byte ptr [esi + 0x24], al
// 00515941  385c242c             cmp byte ptr [esp + 0x2c], bl
// 00515945  7466                 je 0x5159ad
// 00515947  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0051594b  3ac3                 cmp al, bl
// 0051594d  7423                 je 0x515972
// 0051594f  0fb64f03             movzx ecx, byte ptr [edi + 3]
// 00515953  8a4701               mov al, byte ptr [edi + 1]
// 00515956  8a5702               mov dl, byte ptr [edi + 2]
// 00515959  884c242c             mov byte ptr [esp + 0x2c], cl
// 0051595d  0fb60f               movzx ecx, byte ptr [edi]
// 00515960  8854242d             mov byte ptr [esp + 0x2d], dl
// 00515964  8844242e             mov byte ptr [esp + 0x2e], al
// 00515968  884c242f             mov byte ptr [esp + 0x2f], cl
// 0051596c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00515970  eb02                 jmp 0x515974
// 00515972  8b07                 mov eax, dword ptr [edi]
// 00515974  50                   push eax
// 00515975  894638               mov dword ptr [esi + 0x38], eax
// 00515978  e8b32bffff           call 0x508530
// 0051597d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00515981  8b5638               mov edx, dword ptr [esi + 0x38]
// 00515984  83c404               add esp, 4
// 00515987  83c1fc               add ecx, -4
// 0051598a  51                   push ecx
// 0051598b  83c704               add edi, 4
// 0051598e  89542430             mov dword ptr [esp + 0x30], edx
// 00515992  57                   push edi
// 00515993  8d542434             lea edx, [esp + 0x34]
// 00515997  52                   push edx
// 00515998  50                   push eax
// 00515999  894640               mov dword ptr [esi + 0x40], eax
// 0051599c  e81f0a2900           call 0x7a63c0
// 005159a1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005159a5  894638               mov dword ptr [esi + 0x38], eax
// 005159a8  89463c               mov dword ptr [esi + 0x3c], eax
// 005159ab  eb31                 jmp 0x5159de
// 005159ad  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005159b1  897e38               mov dword ptr [esi + 0x38], edi
// 005159b4  897e3c               mov dword ptr [esi + 0x3c], edi
// 005159b7  385c2430             cmp byte ptr [esp + 0x30], bl
// 005159bb  7509                 jne 0x5159c6
// 005159bd  8b442420             mov eax, dword ptr [esp + 0x20]
// 005159c1  894640               mov dword ptr [esi + 0x40], eax
// 005159c4  eb18                 jmp 0x5159de
// 005159c6  57                   push edi
// 005159c7  e8642bffff           call 0x508530
// 005159cc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005159d0  57                   push edi
// 005159d1  51                   push ecx
// 005159d2  50                   push eax
// 005159d3  894640               mov dword ptr [esi + 0x40], eax
// 005159d6  e805be1800           call 0x6a17e0
// 005159db  83c410               add esp, 0x10
// 005159de  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005159e2  5f                   pop edi
// 005159e3  8bc6                 mov eax, esi
// 005159e5  5e                   pop esi
// 005159e6  5b                   pop ebx
// 005159e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005159ee  83c410               add esp, 0x10
// 005159f1  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??0BinaryInput@G3D@@QAE@PBEHW4G3DEndian@1@_N2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
