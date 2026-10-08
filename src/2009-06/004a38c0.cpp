// roc 2009-06 004a38c0  unit: G3D::PBVTextureFormat::?$Table  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a38c0
//
// 004a38c0  64a100000000         mov eax, dword ptr fs:[0]
// 004a38c6  6aff                 push -1
// 004a38c8  6884738500           push 0x857384
// 004a38cd  50                   push eax
// 004a38ce  64892500000000       mov dword ptr fs:[0], esp
// 004a38d5  83ec38               sub esp, 0x38
// 004a38d8  53                   push ebx
// 004a38d9  56                   push esi
// 004a38da  57                   push edi
// 004a38db  8bf1                 mov esi, ecx
// 004a38dd  83cfff               or edi, 0xffffffff
// 004a38e0  837e0800             cmp dword ptr [esi + 8], 0
// 004a38e4  7432                 je 0x4a3918
// 004a38e6  6890038c00           push 0x8c0390
// 004a38eb  8d4c2410             lea ecx, [esp + 0x10]
// 004a38ef  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a38f5  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a38f8  8d44240c             lea eax, [esp + 0xc]
// 004a38fc  50                   push eax
// 004a38fd  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004a3905  e8d6950c00           call 0x56cee0
// 004a390a  8d4c240c             lea ecx, [esp + 0xc]
// 004a390e  897c244c             mov dword ptr [esp + 0x4c], edi
// 004a3912  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3918  837e0800             cmp dword ptr [esi + 8], 0
// 004a391c  bb01000000           mov ebx, 1
// 004a3921  742e                 je 0x4a3951
// 004a3923  687c038c00           push 0x8c037c
// 004a3928  8d4c2410             lea ecx, [esp + 0x10]
// 004a392c  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3932  8d4c240c             lea ecx, [esp + 0xc]
// 004a3936  51                   push ecx
// 004a3937  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a393a  895c2450             mov dword ptr [esp + 0x50], ebx
// 004a393e  e89d950c00           call 0x56cee0
// 004a3943  8d4c240c             lea ecx, [esp + 0xc]
// 004a3947  897c244c             mov dword ptr [esp + 0x4c], edi
// 004a394b  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a3951  d9e8                 fld1 
// 004a3953  83ec10               sub esp, 0x10
// 004a3956  dd542408             fst qword ptr [esp + 8]
// 004a395a  8bce                 mov ecx, esi
// 004a395c  dd1c24               fstp qword ptr [esp]
// 004a395f  e83cfbffff           call 0x4a34a0
// 004a3964  837e0800             cmp dword ptr [esi + 8], 0
// 004a3968  7432                 je 0x4a399c
// 004a396a  6864038c00           push 0x8c0364
// 004a396f  8d4c2410             lea ecx, [esp + 0x10]
// 004a3973  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a3979  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a397c  8d54240c             lea edx, [esp + 0xc]
// 004a3980  52                   push edx
// 004a3981  c744245002000000     mov dword ptr [esp + 0x50], 2
// 004a3989  e852950c00           call 0x56cee0
// 004a398e  8d4c240c             lea ecx, [esp + 0xc]
// 004a3992  897c244c             mov dword ptr [esp + 0x4c], edi
// 004a3996  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a399c  807e0400             cmp byte ptr [esi + 4], 0
// 004a39a0  744e                 je 0x4a39f0
// 004a39a2  837e0800             cmp dword ptr [esi + 8], 0
// 004a39a6  7432                 je 0x4a39da
// 004a39a8  6850038c00           push 0x8c0350
// 004a39ad  8d4c242c             lea ecx, [esp + 0x2c]
// 004a39b1  ff15b4e48900         call dword ptr [0x89e4b4]
// 004a39b7  8b4e08               mov ecx, dword ptr [esi + 8]
// 004a39ba  8d442428             lea eax, [esp + 0x28]
// 004a39be  50                   push eax
// 004a39bf  c744245003000000     mov dword ptr [esp + 0x50], 3
// 004a39c7  e814950c00           call 0x56cee0
// 004a39cc  8d4c2428             lea ecx, [esp + 0x28]
// 004a39d0  897c244c             mov dword ptr [esp + 0x4c], edi
// 004a39d4  ff15c4e48900         call dword ptr [0x89e4c4]
// 004a39da  e8e1a0ffff           call 0x49dac0
// 004a39df  8b0e                 mov ecx, dword ptr [esi]
// 004a39e1  85c9                 test ecx, ecx
// 004a39e3  740b                 je 0x4a39f0
// 004a39e5  8b11                 mov edx, dword ptr [ecx]
// 004a39e7  8b829c000000         mov eax, dword ptr [edx + 0x9c]
// 004a39ed  53                   push ebx
// 004a39ee  ffd0                 call eax
// 004a39f0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004a39f4  889e99080000         mov byte ptr [esi + 0x899], bl
// 004a39fa  5f                   pop edi
// 004a39fb  5e                   pop esi
// 004a39fc  5b                   pop ebx
// 004a39fd  64890d00000000       mov dword ptr fs:[0], ecx
// 004a3a04  83c444               add esp, 0x44
// 004a3a07  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?cleanup@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
