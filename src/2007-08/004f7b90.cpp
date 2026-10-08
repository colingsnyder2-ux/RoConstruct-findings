// roc 2007-08 004f7b90  unit: G3D::Sphere  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7b90
//
// 004f7b90  55                   push ebp
// 004f7b91  8bec                 mov ebp, esp
// 004f7b93  83e4c0               and esp, 0xffffffc0
// 004f7b96  83ec34               sub esp, 0x34
// 004f7b99  53                   push ebx
// 004f7b9a  8b5910               mov ebx, dword ptr [ecx + 0x10]
// 004f7b9d  83eb01               sub ebx, 1
// 004f7ba0  56                   push esi
// 004f7ba1  57                   push edi
// 004f7ba2  894c243c             mov dword ptr [esp + 0x3c], ecx
// 004f7ba6  7845                 js 0x4f7bed
// 004f7ba8  8b7d08               mov edi, dword ptr [ebp + 8]
// 004f7bab  eb07                 jmp 0x4f7bb4
// 004f7bad  8d4900               lea ecx, [ecx]
// 004f7bb0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004f7bb4  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004f7bb7  8b3498               mov esi, dword ptr [eax + ebx*4]
// 004f7bba  56                   push esi
// 004f7bbb  8bcf                 mov ecx, edi
// 004f7bbd  e81ec9f7ff           call 0x4744e0
// 004f7bc2  d94638               fld dword ptr [esi + 0x38]
// 004f7bc5  83ec08               sub esp, 8
// 004f7bc8  8bcf                 mov ecx, edi
// 004f7bca  dd1c24               fstp qword ptr [esp]
// 004f7bcd  e82ecef7ff           call 0x474a00
// 004f7bd2  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 004f7bd5  57                   push edi
// 004f7bd6  e8d5370000           call 0x4fb3b0
// 004f7bdb  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 004f7bde  57                   push edi
// 004f7bdf  51                   push ecx
// 004f7be0  e88bccffff           call 0x4f4870
// 004f7be5  83c408               add esp, 8
// 004f7be8  83eb01               sub ebx, 1
// 004f7beb  79c3                 jns 0x4f7bb0
// 004f7bed  5f                   pop edi
// 004f7bee  5e                   pop esi
// 004f7bef  5b                   pop ebx
// 004f7bf0  8be5                 mov esp, ebp
// 004f7bf2  5d                   pop ebp
// 004f7bf3  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?sendDiffuseProxyMeshGeometry@RenderScene@Render@RBX@@ABEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
