// roc 2008-06 00507420  unit: RBX::Render::RenderScene  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507420
//
// 00507420  83ec20               sub esp, 0x20
// 00507423  57                   push edi
// 00507424  8bf9                 mov edi, ecx
// 00507426  833f00               cmp dword ptr [edi], 0
// 00507429  0f8484000000         je 0x5074b3
// 0050742f  56                   push esi
// 00507430  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00507434  8bce                 mov ecx, esi
// 00507436  e8655ff7ff           call 0x47d3a0
// 0050743b  8d442418             lea eax, [esp + 0x18]
// 0050743f  50                   push eax
// 00507440  8bce                 mov ecx, esi
// 00507442  e819f9f6ff           call 0x476d60
// 00507447  8d4c2418             lea ecx, [esp + 0x18]
// 0050744b  51                   push ecx
// 0050744c  8bcf                 mov ecx, edi
// 0050744e  e87dfdffff           call 0x5071d0
// 00507453  8b4f04               mov ecx, dword ptr [edi + 4]
// 00507456  6a01                 push 1
// 00507458  8d54241c             lea edx, [esp + 0x1c]
// 0050745c  52                   push edx
// 0050745d  e88ec5f6ff           call 0x4739f0
// 00507462  8b4f08               mov ecx, dword ptr [edi + 8]
// 00507465  6a01                 push 1
// 00507467  8d44241c             lea eax, [esp + 0x1c]
// 0050746b  50                   push eax
// 0050746c  e87fc5f6ff           call 0x4739f0
// 00507471  57                   push edi
// 00507472  8bce                 mov ecx, esi
// 00507474  e8a71af7ff           call 0x478f20
// 00507479  e8e2d50000           call 0x514a60
// 0050747e  d900                 fld dword ptr [eax]
// 00507480  d95c2408             fstp dword ptr [esp + 8]
// 00507484  8d4c2408             lea ecx, [esp + 8]
// 00507488  d94004               fld dword ptr [eax + 4]
// 0050748b  51                   push ecx
// 0050748c  d95c2410             fstp dword ptr [esp + 0x10]
// 00507490  8d54241c             lea edx, [esp + 0x1c]
// 00507494  d94008               fld dword ptr [eax + 8]
// 00507497  56                   push esi
// 00507498  d95c2418             fstp dword ptr [esp + 0x18]
// 0050749c  52                   push edx
// 0050749d  d9e8                 fld1 
// 0050749f  d95c2420             fstp dword ptr [esp + 0x20]
// 005074a3  e8c88c2a00           call 0x7b0170
// 005074a8  83c40c               add esp, 0xc
// 005074ab  8bce                 mov ecx, esi
// 005074ad  e8ae5ef7ff           call 0x47d360
// 005074b2  5e                   pop esi
// 005074b3  5f                   pop edi
// 005074b4  83c420               add esp, 0x20
// 005074b7  c20400               ret 4
// library rbxgs-render/DepthBlur.cpp (function ?apply@DepthBlur@Render@RBX@@QAEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
