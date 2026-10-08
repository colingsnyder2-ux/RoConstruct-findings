// roc 2007-03 004eb630  unit: seg_004e0000  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb630
//
// 004eb630  55                   push ebp
// 004eb631  8bec                 mov ebp, esp
// 004eb633  83e4c0               and esp, 0xffffffc0
// 004eb636  83ec34               sub esp, 0x34
// 004eb639  53                   push ebx
// 004eb63a  56                   push esi
// 004eb63b  57                   push edi
// 004eb63c  8b7d08               mov edi, dword ptr [ebp + 8]
// 004eb63f  8bf1                 mov esi, ecx
// 004eb641  6a03                 push 3
// 004eb643  8bcf                 mov ecx, edi
// 004eb645  8974242c             mov dword ptr [esp + 0x2c], esi
// 004eb649  e88284f8ff           call 0x473ad0
// 004eb64e  6a02                 push 2
// 004eb650  bb01000000           mov ebx, 1
// 004eb655  53                   push ebx
// 004eb656  6a00                 push 0
// 004eb658  8bcf                 mov ecx, edi
// 004eb65a  e8118cf8ff           call 0x474270
// 004eb65f  015f78               add dword ptr [edi + 0x78], ebx
// 004eb662  80bfe103000000       cmp byte ptr [edi + 0x3e1], 0
// 004eb669  7412                 je 0x4eb67d
// 004eb66b  015f70               add dword ptr [edi + 0x70], ebx
// 004eb66e  6a00                 push 0
// 004eb670  ff15b4eb7700         call dword ptr [0x77ebb4]
// 004eb676  c687e103000000       mov byte ptr [edi + 0x3e1], 0
// 004eb67d  837e2800             cmp dword ptr [esi + 0x28], 0
// 004eb681  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004eb689  0f8ea7000000         jle 0x4eb736
// 004eb68f  8d9fa8040000         lea ebx, [edi + 0x4a8]
// 004eb695  eb02                 jmp 0x4eb699
// 004eb697  8bf1                 mov esi, ecx
// 004eb699  8b4624               mov eax, dword ptr [esi + 0x24]
// 004eb69c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004eb6a0  8b3488               mov esi, dword ptr [eax + ecx*4]
// 004eb6a3  8b5634               mov edx, dword ptr [esi + 0x34]
// 004eb6a6  56                   push esi
// 004eb6a7  8bcf                 mov ecx, edi
// 004eb6a9  89542430             mov dword ptr [esp + 0x30], edx
// 004eb6ad  e82e8ff8ff           call 0x4745e0
// 004eb6b2  d94638               fld dword ptr [esi + 0x38]
// 004eb6b5  83ec08               sub esp, 8
// 004eb6b8  8bcf                 mov ecx, edi
// 004eb6ba  dd1c24               fstp qword ptr [esp]
// 004eb6bd  e83e94f8ff           call 0x474b00
// 004eb6c2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004eb6c5  57                   push edi
// 004eb6c6  e855380000           call 0x4eef20
// 004eb6cb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004eb6cf  d9400c               fld dword ptr [eax + 0xc]
// 004eb6d2  53                   push ebx
// 004eb6d3  d95c2434             fstp dword ptr [esp + 0x34]
// 004eb6d7  d94010               fld dword ptr [eax + 0x10]
// 004eb6da  d95c2438             fstp dword ptr [esp + 0x38]
// 004eb6de  d94014               fld dword ptr [eax + 0x14]
// 004eb6e1  d95c243c             fstp dword ptr [esp + 0x3c]
// 004eb6e5  d94024               fld dword ptr [eax + 0x24]
// 004eb6e8  d9e8                 fld1 
// 004eb6ea  dee1                 fsubrp st(1)
// 004eb6ec  d95c2440             fstp dword ptr [esp + 0x40]
// 004eb6f0  d9442434             fld dword ptr [esp + 0x34]
// 004eb6f4  d91b                 fstp dword ptr [ebx]
// 004eb6f6  d9442438             fld dword ptr [esp + 0x38]
// 004eb6fa  d95b04               fstp dword ptr [ebx + 4]
// 004eb6fd  d944243c             fld dword ptr [esp + 0x3c]
// 004eb701  d95b08               fstp dword ptr [ebx + 8]
// 004eb704  d9442440             fld dword ptr [esp + 0x40]
// 004eb708  d95b0c               fstp dword ptr [ebx + 0xc]
// 004eb70b  ff15b0eb7700         call dword ptr [0x77ebb0]
// 004eb711  8b463c               mov eax, dword ptr [esi + 0x3c]
// 004eb714  57                   push edi
// 004eb715  50                   push eax
// 004eb716  e8b5cbffff           call 0x4e82d0
// 004eb71b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004eb71f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004eb723  83c001               add eax, 1
// 004eb726  83c408               add esp, 8
// 004eb729  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 004eb72c  89442424             mov dword ptr [esp + 0x24], eax
// 004eb730  0f8c61ffffff         jl 0x4eb697
// 004eb736  5f                   pop edi
// 004eb737  5e                   pop esi
// 004eb738  5b                   pop ebx
// 004eb739  8be5                 mov esp, ebp
// 004eb73b  5d                   pop ebp
// 004eb73c  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?transparentPass@RenderScene@Render@RBX@@AAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
