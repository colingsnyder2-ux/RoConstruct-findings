// roc 2009-12 005ed270  unit: G3D::Log  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ed270
//
// 005ed270  6aff                 push -1
// 005ed272  68a9e59200           push 0x92e5a9
// 005ed277  64a100000000         mov eax, dword ptr fs:[0]
// 005ed27d  50                   push eax
// 005ed27e  64892500000000       mov dword ptr fs:[0], esp
// 005ed285  83ec1c               sub esp, 0x1c
// 005ed288  53                   push ebx
// 005ed289  55                   push ebp
// 005ed28a  56                   push esi
// 005ed28b  57                   push edi
// 005ed28c  8bf9                 mov edi, ecx
// 005ed28e  8b470c               mov eax, dword ptr [edi + 0xc]
// 005ed291  8b4f08               mov ecx, dword ptr [edi + 8]
// 005ed294  50                   push eax
// 005ed295  51                   push ecx
// 005ed296  8d542418             lea edx, [esp + 0x18]
// 005ed29a  68f8219c00           push 0x9c21f8
// 005ed29f  52                   push edx
// 005ed2a0  e89bc60000           call 0x5f9940
// 005ed2a5  83c410               add esp, 0x10
// 005ed2a8  837c242810           cmp dword ptr [esp + 0x28], 0x10
// 005ed2ad  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005ed2b1  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005ed2b5  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005ed2bd  7304                 jae 0x5ed2c3
// 005ed2bf  8d6c2414             lea ebp, [esp + 0x14]
// 005ed2c3  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 005ed2c7  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ed2ca  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ed2cd  03c3                 add eax, ebx
// 005ed2cf  3bc8                 cmp ecx, eax
// 005ed2d1  7c02                 jl 0x5ed2d5
// 005ed2d3  8bc1                 mov eax, ecx
// 005ed2d5  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ed2d8  894634               mov dword ptr [esi + 0x34], eax
// 005ed2db  7e09                 jle 0x5ed2e6
// 005ed2dd  51                   push ecx
// 005ed2de  53                   push ebx
// 005ed2df  8bce                 mov ecx, esi
// 005ed2e1  e8ca1c0100           call 0x5fefb0
// 005ed2e6  8b4630               mov eax, dword ptr [esi + 0x30]
// 005ed2e9  03463c               add eax, dword ptr [esi + 0x3c]
// 005ed2ec  53                   push ebx
// 005ed2ed  55                   push ebp
// 005ed2ee  50                   push eax
// 005ed2ef  e87cdcffff           call 0x5eaf70
// 005ed2f4  015e3c               add dword ptr [esi + 0x3c], ebx
// 005ed2f7  8b4708               mov eax, dword ptr [edi + 8]
// 005ed2fa  0faf470c             imul eax, dword ptr [edi + 0xc]
// 005ed2fe  8b5f04               mov ebx, dword ptr [edi + 4]
// 005ed301  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ed304  8d3c40               lea edi, [eax + eax*2]
// 005ed307  8b4634               mov eax, dword ptr [esi + 0x34]
// 005ed30a  03cf                 add ecx, edi
// 005ed30c  83c40c               add esp, 0xc
// 005ed30f  3bc1                 cmp eax, ecx
// 005ed311  7c02                 jl 0x5ed315
// 005ed313  8bc8                 mov ecx, eax
// 005ed315  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005ed318  894e34               mov dword ptr [esi + 0x34], ecx
// 005ed31b  7e09                 jle 0x5ed326
// 005ed31d  50                   push eax
// 005ed31e  57                   push edi
// 005ed31f  8bce                 mov ecx, esi
// 005ed321  e88a1c0100           call 0x5fefb0
// 005ed326  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ed329  034e3c               add ecx, dword ptr [esi + 0x3c]
// 005ed32c  57                   push edi
// 005ed32d  53                   push ebx
// 005ed32e  51                   push ecx
// 005ed32f  e83cdcffff           call 0x5eaf70
// 005ed334  017e3c               add dword ptr [esi + 0x3c], edi
// 005ed337  83c40c               add esp, 0xc
// 005ed33a  8d4c2410             lea ecx, [esp + 0x10]
// 005ed33e  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005ed346  ff15e4b69800         call dword ptr [0x98b6e4]
// 005ed34c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005ed350  5f                   pop edi
// 005ed351  5e                   pop esi
// 005ed352  5d                   pop ebp
// 005ed353  5b                   pop ebx
// 005ed354  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed35b  83c428               add esp, 0x28
// 005ed35e  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPM@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
