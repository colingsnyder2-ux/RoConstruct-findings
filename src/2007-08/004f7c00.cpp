// roc 2007-08 004f7c00  unit: G3D::Sphere  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7c00
//
// 004f7c00  55                   push ebp
// 004f7c01  8bec                 mov ebp, esp
// 004f7c03  83e4c0               and esp, 0xffffffc0
// 004f7c06  83ec34               sub esp, 0x34
// 004f7c09  53                   push ebx
// 004f7c0a  56                   push esi
// 004f7c0b  57                   push edi
// 004f7c0c  8b7d08               mov edi, dword ptr [ebp + 8]
// 004f7c0f  8bf1                 mov esi, ecx
// 004f7c11  6a03                 push 3
// 004f7c13  8bcf                 mov ecx, edi
// 004f7c15  8974242c             mov dword ptr [esp + 0x2c], esi
// 004f7c19  e8b2bdf7ff           call 0x4739d0
// 004f7c1e  6a02                 push 2
// 004f7c20  bb01000000           mov ebx, 1
// 004f7c25  53                   push ebx
// 004f7c26  6a00                 push 0
// 004f7c28  8bcf                 mov ecx, edi
// 004f7c2a  e841c5f7ff           call 0x474170
// 004f7c2f  015f78               add dword ptr [edi + 0x78], ebx
// 004f7c32  80bfe103000000       cmp byte ptr [edi + 0x3e1], 0
// 004f7c39  7412                 je 0x4f7c4d
// 004f7c3b  015f70               add dword ptr [edi + 0x70], ebx
// 004f7c3e  6a00                 push 0
// 004f7c40  ff1508eb7700         call dword ptr [0x77eb08]
// 004f7c46  c687e103000000       mov byte ptr [edi + 0x3e1], 0
// 004f7c4d  837e2800             cmp dword ptr [esi + 0x28], 0
// 004f7c51  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004f7c59  0f8ea7000000         jle 0x4f7d06
// 004f7c5f  8d9fa8040000         lea ebx, [edi + 0x4a8]
// 004f7c65  eb02                 jmp 0x4f7c69
// 004f7c67  8bf1                 mov esi, ecx
// 004f7c69  8b4624               mov eax, dword ptr [esi + 0x24]
// 004f7c6c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004f7c70  8b3488               mov esi, dword ptr [eax + ecx*4]
// 004f7c73  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f7c76  56                   push esi
// 004f7c77  8bcf                 mov ecx, edi
// 004f7c79  89542430             mov dword ptr [esp + 0x30], edx
// 004f7c7d  e85ec8f7ff           call 0x4744e0
// 004f7c82  d94638               fld dword ptr [esi + 0x38]
// 004f7c85  83ec08               sub esp, 8
// 004f7c88  8bcf                 mov ecx, edi
// 004f7c8a  dd1c24               fstp qword ptr [esp]
// 004f7c8d  e86ecdf7ff           call 0x474a00
// 004f7c92  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7c95  57                   push edi
// 004f7c96  e815370000           call 0x4fb3b0
// 004f7c9b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f7c9f  d9400c               fld dword ptr [eax + 0xc]
// 004f7ca2  53                   push ebx
// 004f7ca3  d95c2434             fstp dword ptr [esp + 0x34]
// 004f7ca7  d94010               fld dword ptr [eax + 0x10]
// 004f7caa  d95c2438             fstp dword ptr [esp + 0x38]
// 004f7cae  d94014               fld dword ptr [eax + 0x14]
// 004f7cb1  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f7cb5  d94024               fld dword ptr [eax + 0x24]
// 004f7cb8  d9e8                 fld1 
// 004f7cba  dee1                 fsubrp st(1)
// 004f7cbc  d95c2440             fstp dword ptr [esp + 0x40]
// 004f7cc0  d9442434             fld dword ptr [esp + 0x34]
// 004f7cc4  d91b                 fstp dword ptr [ebx]
// 004f7cc6  d9442438             fld dword ptr [esp + 0x38]
// 004f7cca  d95b04               fstp dword ptr [ebx + 4]
// 004f7ccd  d944243c             fld dword ptr [esp + 0x3c]
// 004f7cd1  d95b08               fstp dword ptr [ebx + 8]
// 004f7cd4  d9442440             fld dword ptr [esp + 0x40]
// 004f7cd8  d95b0c               fstp dword ptr [ebx + 0xc]
// 004f7cdb  ff150ceb7700         call dword ptr [0x77eb0c]
// 004f7ce1  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004f7ce4  57                   push edi
// 004f7ce5  50                   push eax
// 004f7ce6  e885cbffff           call 0x4f4870
// 004f7ceb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f7cef  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004f7cf3  83c001               add eax, 1
// 004f7cf6  83c408               add esp, 8
// 004f7cf9  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 004f7cfc  89442424             mov dword ptr [esp + 0x24], eax
// 004f7d00  0f8c61ffffff         jl 0x4f7c67
// 004f7d06  5f                   pop edi
// 004f7d07  5e                   pop esi
// 004f7d08  5b                   pop ebx
// 004f7d09  8be5                 mov esp, ebp
// 004f7d0b  5d                   pop ebp
// 004f7d0c  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?transparentPass@RenderScene@Render@RBX@@AAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
