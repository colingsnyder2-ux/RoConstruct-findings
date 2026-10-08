// roc 2007-08 004f81c0  unit: G3D::Sphere  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f81c0
//
// 004f81c0  55                   push ebp
// 004f81c1  8bec                 mov ebp, esp
// 004f81c3  83e4c0               and esp, 0xffffffc0
// 004f81c6  83ec34               sub esp, 0x34
// 004f81c9  803d6acf8b0000       cmp byte ptr [0x8bcf6a], 0
// 004f81d0  53                   push ebx
// 004f81d1  56                   push esi
// 004f81d2  8bd9                 mov ebx, ecx
// 004f81d4  57                   push edi
// 004f81d5  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004f81d9  0f8483010000         je 0x4f8362
// 004f81df  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 004f81e5  83783000             cmp dword ptr [eax + 0x30], 0
// 004f81e9  0f8473010000         je 0x4f8362
// 004f81ef  8b4030               mov eax, dword ptr [eax + 0x30]
// 004f81f2  8b4058               mov eax, dword ptr [eax + 0x58]
// 004f81f5  83f805               cmp eax, 5
// 004f81f8  7409                 je 0x4f8203
// 004f81fa  83f807               cmp eax, 7
// 004f81fd  0f855f010000         jne 0x4f8362
// 004f8203  8b7508               mov esi, dword ptr [ebp + 8]
// 004f8206  8bce                 mov ecx, esi
// 004f8208  e88314f8ff           call 0x479690
// 004f820d  6a03                 push 3
// 004f820f  8bce                 mov ecx, esi
// 004f8211  e8bab7f7ff           call 0x4739d0
// 004f8216  dd0588f77900         fld qword ptr [0x79f788]
// 004f821c  83ec08               sub esp, 8
// 004f821f  8bce                 mov ecx, esi
// 004f8221  dd1c24               fstp qword ptr [esp]
// 004f8224  e8d7c7f7ff           call 0x474a00
// 004f8229  6a02                 push 2
// 004f822b  6a02                 push 2
// 004f822d  6a02                 push 2
// 004f822f  8bce                 mov ecx, esi
// 004f8231  e83abff7ff           call 0x474170
// 004f8236  8bce                 mov ecx, esi
// 004f8238  e873c2f7ff           call 0x4744b0
// 004f823d  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 004f8243  51                   push ecx
// 004f8244  8bcc                 mov ecx, esp
// 004f8246  c70100000000         mov dword ptr [ecx], 0
// 004f824c  8b5030               mov edx, dword ptr [eax + 0x30]
// 004f824f  8964242c             mov dword ptr [esp + 0x2c], esp
// 004f8253  52                   push edx
// 004f8254  e817cdf7ff           call 0x474f70
// 004f8259  bf01000000           mov edi, 1
// 004f825e  57                   push edi
// 004f825f  8bce                 mov ecx, esi
// 004f8261  e89ae4f7ff           call 0x476700
// 004f8266  017e78               add dword ptr [esi + 0x78], edi
// 004f8269  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004f8270  7412                 je 0x4f8284
// 004f8272  017e70               add dword ptr [esi + 0x70], edi
// 004f8275  6a00                 push 0
// 004f8277  ff1508eb7700         call dword ptr [0x77eb08]
// 004f827d  c686e103000000       mov byte ptr [esi + 0x3e1], 0
// 004f8284  837b1c00             cmp dword ptr [ebx + 0x1c], 0
// 004f8288  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004f8290  0f8ec5000000         jle 0x4f835b
// 004f8296  8dbea8040000         lea edi, [esi + 0x4a8]
// 004f829c  eb04                 jmp 0x4f82a2
// 004f829e  8bff                 mov edi, edi
// 004f82a0  8bd9                 mov ebx, ecx
// 004f82a2  8b4318               mov eax, dword ptr [ebx + 0x18]
// 004f82a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f82a9  8b1c88               mov ebx, dword ptr [eax + ecx*4]
// 004f82ac  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004f82af  d94338               fld dword ptr [ebx + 0x38]
// 004f82b2  83ec08               sub esp, 8
// 004f82b5  8bce                 mov ecx, esi
// 004f82b7  dd1c24               fstp qword ptr [esp]
// 004f82ba  89542430             mov dword ptr [esp + 0x30], edx
// 004f82be  e83dc7f7ff           call 0x474a00
// 004f82c3  53                   push ebx
// 004f82c4  8bce                 mov ecx, esi
// 004f82c6  e815c2f7ff           call 0x4744e0
// 004f82cb  51                   push ecx
// 004f82cc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004f82d0  8bc4                 mov eax, esp
// 004f82d2  89642434             mov dword ptr [esp + 0x34], esp
// 004f82d6  56                   push esi
// 004f82d7  50                   push eax
// 004f82d8  e8e3fdffff           call 0x4f80c0
// 004f82dd  6a00                 push 0
// 004f82df  8bce                 mov ecx, esi
// 004f82e1  e86adff7ff           call 0x476250
// 004f82e6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f82ea  d94120               fld dword ptr [ecx + 0x20]
// 004f82ed  d95c2428             fstp dword ptr [esp + 0x28]
// 004f82f1  e80a2f0100           call 0x50b200
// 004f82f6  d900                 fld dword ptr [eax]
// 004f82f8  57                   push edi
// 004f82f9  d944242c             fld dword ptr [esp + 0x2c]
// 004f82fd  d9c0                 fld st(0)
// 004f82ff  deca                 fmulp st(2)
// 004f8301  d9c9                 fxch st(1)
// 004f8303  d95c2438             fstp dword ptr [esp + 0x38]
// 004f8307  d94004               fld dword ptr [eax + 4]
// 004f830a  d8c9                 fmul st(1)
// 004f830c  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f8310  d84808               fmul dword ptr [eax + 8]
// 004f8313  d95c2440             fstp dword ptr [esp + 0x40]
// 004f8317  d9442438             fld dword ptr [esp + 0x38]
// 004f831b  d91f                 fstp dword ptr [edi]
// 004f831d  d944243c             fld dword ptr [esp + 0x3c]
// 004f8321  d95f04               fstp dword ptr [edi + 4]
// 004f8324  d9442440             fld dword ptr [esp + 0x40]
// 004f8328  d95f08               fstp dword ptr [edi + 8]
// 004f832b  d9e8                 fld1 
// 004f832d  d95f0c               fstp dword ptr [edi + 0xc]
// 004f8330  ff1540ea7700         call dword ptr [0x77ea40]
// 004f8336  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004f8339  56                   push esi
// 004f833a  52                   push edx
// 004f833b  e830c5ffff           call 0x4f4870
// 004f8340  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f8344  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004f8348  83c001               add eax, 1
// 004f834b  83c408               add esp, 8
// 004f834e  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 004f8351  89442424             mov dword ptr [esp + 0x24], eax
// 004f8355  0f8c45ffffff         jl 0x4f82a0
// 004f835b  8bce                 mov ecx, esi
// 004f835d  e86e13f8ff           call 0x4796d0
// 004f8362  5f                   pop edi
// 004f8363  5e                   pop esi
// 004f8364  5b                   pop ebx
// 004f8365  8be5                 mov esp, ebp
// 004f8367  5d                   pop ebp
// 004f8368  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?reflectionPass@RenderScene@Render@RBX@@AAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
