// roc 2007-03 004f75e0  unit: seg_004f0000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f75e0
//
// 004f75e0  6aff                 push -1
// 004f75e2  6899027500           push 0x750299
// 004f75e7  64a100000000         mov eax, dword ptr fs:[0]
// 004f75ed  50                   push eax
// 004f75ee  83ec20               sub esp, 0x20
// 004f75f1  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f75f6  33c4                 xor eax, esp
// 004f75f8  8944241c             mov dword ptr [esp + 0x1c], eax
// 004f75fc  53                   push ebx
// 004f75fd  55                   push ebp
// 004f75fe  56                   push esi
// 004f75ff  57                   push edi
// 004f7600  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004f7605  33c4                 xor eax, esp
// 004f7607  50                   push eax
// 004f7608  8d442434             lea eax, [esp + 0x34]
// 004f760c  64a300000000         mov dword ptr fs:[0], eax
// 004f7612  8b742444             mov esi, dword ptr [esp + 0x44]
// 004f7616  8bf9                 mov edi, ecx
// 004f7618  8b470c               mov eax, dword ptr [edi + 0xc]
// 004f761b  8b4f08               mov ecx, dword ptr [edi + 8]
// 004f761e  50                   push eax
// 004f761f  51                   push ecx
// 004f7620  8d54241c             lea edx, [esp + 0x1c]
// 004f7624  6888f97900           push 0x79f988
// 004f7629  52                   push edx
// 004f762a  e801ddffff           call 0x4f5330
// 004f762f  83c410               add esp, 0x10
// 004f7632  837c242c10           cmp dword ptr [esp + 0x2c], 0x10
// 004f7637  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 004f763b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004f763f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 004f7647  7304                 jae 0x4f764d
// 004f7649  8d6c2418             lea ebp, [esp + 0x18]
// 004f764d  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f7650  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7653  03c3                 add eax, ebx
// 004f7655  3bc8                 cmp ecx, eax
// 004f7657  7c02                 jl 0x4f765b
// 004f7659  8bc1                 mov eax, ecx
// 004f765b  3b4638               cmp eax, dword ptr [esi + 0x38]
// 004f765e  894634               mov dword ptr [esi + 0x34], eax
// 004f7661  7e09                 jle 0x4f766c
// 004f7663  51                   push ecx
// 004f7664  53                   push ebx
// 004f7665  8bce                 mov ecx, esi
// 004f7667  e824620000           call 0x4fd890
// 004f766c  8b4630               mov eax, dword ptr [esi + 0x30]
// 004f766f  03463c               add eax, dword ptr [esi + 0x3c]
// 004f7672  53                   push ebx
// 004f7673  55                   push ebp
// 004f7674  50                   push eax
// 004f7675  e836caffff           call 0x4f40b0
// 004f767a  015e3c               add dword ptr [esi + 0x3c], ebx
// 004f767d  8b4708               mov eax, dword ptr [edi + 8]
// 004f7680  0faf470c             imul eax, dword ptr [edi + 0xc]
// 004f7684  8b5f04               mov ebx, dword ptr [edi + 4]
// 004f7687  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f768a  8d3c40               lea edi, [eax + eax*2]
// 004f768d  8b4634               mov eax, dword ptr [esi + 0x34]
// 004f7690  03cf                 add ecx, edi
// 004f7692  83c40c               add esp, 0xc
// 004f7695  3bc1                 cmp eax, ecx
// 004f7697  7c02                 jl 0x4f769b
// 004f7699  8bc8                 mov ecx, eax
// 004f769b  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 004f769e  894e34               mov dword ptr [esi + 0x34], ecx
// 004f76a1  7e09                 jle 0x4f76ac
// 004f76a3  50                   push eax
// 004f76a4  57                   push edi
// 004f76a5  8bce                 mov ecx, esi
// 004f76a7  e8e4610000           call 0x4fd890
// 004f76ac  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 004f76af  034e3c               add ecx, dword ptr [esi + 0x3c]
// 004f76b2  57                   push edi
// 004f76b3  53                   push ebx
// 004f76b4  51                   push ecx
// 004f76b5  e8f6c9ffff           call 0x4f40b0
// 004f76ba  017e3c               add dword ptr [esi + 0x3c], edi
// 004f76bd  83c40c               add esp, 0xc
// 004f76c0  8d4c2414             lea ecx, [esp + 0x14]
// 004f76c4  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 004f76cc  ff158ce77700         call dword ptr [0x77e78c]
// 004f76d2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004f76d6  64890d00000000       mov dword ptr fs:[0], ecx
// 004f76dd  59                   pop ecx
// 004f76de  5f                   pop edi
// 004f76df  5e                   pop esi
// 004f76e0  5d                   pop ebp
// 004f76e1  5b                   pop ebx
// 004f76e2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f76e6  33cc                 xor ecx, esp
// 004f76e8  e8b9771200           call 0x61eea6
// 004f76ed  83c42c               add esp, 0x2c
// 004f76f0  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_ppm.cpp (function ?encodePPM@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_ppm.cpp
