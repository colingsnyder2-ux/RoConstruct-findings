// roc 2007-03 004ebbf0  unit: seg_004e0000  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ebbf0
//
// 004ebbf0  55                   push ebp
// 004ebbf1  8bec                 mov ebp, esp
// 004ebbf3  83e4c0               and esp, 0xffffffc0
// 004ebbf6  83ec34               sub esp, 0x34
// 004ebbf9  803d32768b0000       cmp byte ptr [0x8b7632], 0
// 004ebc00  53                   push ebx
// 004ebc01  56                   push esi
// 004ebc02  8bd9                 mov ebx, ecx
// 004ebc04  57                   push edi
// 004ebc05  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004ebc09  0f8483010000         je 0x4ebd92
// 004ebc0f  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 004ebc15  83783000             cmp dword ptr [eax + 0x30], 0
// 004ebc19  0f8473010000         je 0x4ebd92
// 004ebc1f  8b4030               mov eax, dword ptr [eax + 0x30]
// 004ebc22  8b4058               mov eax, dword ptr [eax + 0x58]
// 004ebc25  83f805               cmp eax, 5
// 004ebc28  7409                 je 0x4ebc33
// 004ebc2a  83f807               cmp eax, 7
// 004ebc2d  0f855f010000         jne 0x4ebd92
// 004ebc33  8b7508               mov esi, dword ptr [ebp + 8]
// 004ebc36  8bce                 mov ecx, esi
// 004ebc38  e8a3dbf8ff           call 0x4797e0
// 004ebc3d  6a03                 push 3
// 004ebc3f  8bce                 mov ecx, esi
// 004ebc41  e88a7ef8ff           call 0x473ad0
// 004ebc46  dd05e0ed7900         fld qword ptr [0x79ede0]
// 004ebc4c  83ec08               sub esp, 8
// 004ebc4f  8bce                 mov ecx, esi
// 004ebc51  dd1c24               fstp qword ptr [esp]
// 004ebc54  e8a78ef8ff           call 0x474b00
// 004ebc59  6a02                 push 2
// 004ebc5b  6a02                 push 2
// 004ebc5d  6a02                 push 2
// 004ebc5f  8bce                 mov ecx, esi
// 004ebc61  e80a86f8ff           call 0x474270
// 004ebc66  8bce                 mov ecx, esi
// 004ebc68  e84389f8ff           call 0x4745b0
// 004ebc6d  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 004ebc73  51                   push ecx
// 004ebc74  8bcc                 mov ecx, esp
// 004ebc76  c70100000000         mov dword ptr [ecx], 0
// 004ebc7c  8b5030               mov edx, dword ptr [eax + 0x30]
// 004ebc7f  8964242c             mov dword ptr [esp + 0x2c], esp
// 004ebc83  52                   push edx
// 004ebc84  e80794f8ff           call 0x475090
// 004ebc89  bf01000000           mov edi, 1
// 004ebc8e  57                   push edi
// 004ebc8f  8bce                 mov ecx, esi
// 004ebc91  e8caabf8ff           call 0x476860
// 004ebc96  017e78               add dword ptr [esi + 0x78], edi
// 004ebc99  80bee103000000       cmp byte ptr [esi + 0x3e1], 0
// 004ebca0  7412                 je 0x4ebcb4
// 004ebca2  017e70               add dword ptr [esi + 0x70], edi
// 004ebca5  6a00                 push 0
// 004ebca7  ff15b4eb7700         call dword ptr [0x77ebb4]
// 004ebcad  c686e103000000       mov byte ptr [esi + 0x3e1], 0
// 004ebcb4  837b1c00             cmp dword ptr [ebx + 0x1c], 0
// 004ebcb8  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004ebcc0  0f8ec5000000         jle 0x4ebd8b
// 004ebcc6  8dbea8040000         lea edi, [esi + 0x4a8]
// 004ebccc  eb04                 jmp 0x4ebcd2
// 004ebcce  8bff                 mov edi, edi
// 004ebcd0  8bd9                 mov ebx, ecx
// 004ebcd2  8b4318               mov eax, dword ptr [ebx + 0x18]
// 004ebcd5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004ebcd9  8b1c88               mov ebx, dword ptr [eax + ecx*4]
// 004ebcdc  8b5334               mov edx, dword ptr [ebx + 0x34]
// 004ebcdf  d94338               fld dword ptr [ebx + 0x38]
// 004ebce2  83ec08               sub esp, 8
// 004ebce5  8bce                 mov ecx, esi
// 004ebce7  dd1c24               fstp qword ptr [esp]
// 004ebcea  89542430             mov dword ptr [esp + 0x30], edx
// 004ebcee  e80d8ef8ff           call 0x474b00
// 004ebcf3  53                   push ebx
// 004ebcf4  8bce                 mov ecx, esi
// 004ebcf6  e8e588f8ff           call 0x4745e0
// 004ebcfb  51                   push ecx
// 004ebcfc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004ebd00  8bc4                 mov eax, esp
// 004ebd02  89642434             mov dword ptr [esp + 0x34], esp
// 004ebd06  56                   push esi
// 004ebd07  50                   push eax
// 004ebd08  e8e3fdffff           call 0x4ebaf0
// 004ebd0d  6a00                 push 0
// 004ebd0f  8bce                 mov ecx, esi
// 004ebd11  e89aa6f8ff           call 0x4763b0
// 004ebd16  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004ebd1a  d94120               fld dword ptr [ecx + 0x20]
// 004ebd1d  d95c2428             fstp dword ptr [esp + 0x28]
// 004ebd21  e8fa4b0100           call 0x500920
// 004ebd26  d900                 fld dword ptr [eax]
// 004ebd28  57                   push edi
// 004ebd29  d944242c             fld dword ptr [esp + 0x2c]
// 004ebd2d  d9c0                 fld st(0)
// 004ebd2f  deca                 fmulp st(2)
// 004ebd31  d9c9                 fxch st(1)
// 004ebd33  d95c2438             fstp dword ptr [esp + 0x38]
// 004ebd37  d94004               fld dword ptr [eax + 4]
// 004ebd3a  d8c9                 fmul st(1)
// 004ebd3c  d95c243c             fstp dword ptr [esp + 0x3c]
// 004ebd40  d84808               fmul dword ptr [eax + 8]
// 004ebd43  d95c2440             fstp dword ptr [esp + 0x40]
// 004ebd47  d9442438             fld dword ptr [esp + 0x38]
// 004ebd4b  d91f                 fstp dword ptr [edi]
// 004ebd4d  d944243c             fld dword ptr [esp + 0x3c]
// 004ebd51  d95f04               fstp dword ptr [edi + 4]
// 004ebd54  d9442440             fld dword ptr [esp + 0x40]
// 004ebd58  d95f08               fstp dword ptr [edi + 8]
// 004ebd5b  d9e8                 fld1 
// 004ebd5d  d95f0c               fstp dword ptr [edi + 0xc]
// 004ebd60  ff157cec7700         call dword ptr [0x77ec7c]
// 004ebd66  8b533c               mov edx, dword ptr [ebx + 0x3c]
// 004ebd69  56                   push esi
// 004ebd6a  52                   push edx
// 004ebd6b  e860c5ffff           call 0x4e82d0
// 004ebd70  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004ebd74  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004ebd78  83c001               add eax, 1
// 004ebd7b  83c408               add esp, 8
// 004ebd7e  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 004ebd81  89442424             mov dword ptr [esp + 0x24], eax
// 004ebd85  0f8c45ffffff         jl 0x4ebcd0
// 004ebd8b  8bce                 mov ecx, esi
// 004ebd8d  e88edaf8ff           call 0x479820
// 004ebd92  5f                   pop edi
// 004ebd93  5e                   pop esi
// 004ebd94  5b                   pop ebx
// 004ebd95  8be5                 mov esp, ebp
// 004ebd97  5d                   pop ebp
// 004ebd98  c20400               ret 4
// library openrbx-client/Rendering\RenderLib\RenderScene.cpp (function ?reflectionPass@RenderScene@Render@RBX@@AAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/RenderScene.cpp
