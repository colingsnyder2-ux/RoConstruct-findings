// roc 2007-08 004fb3b0  unit: RBX::Render::TextureProxy  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb3b0
//
// 004fb3b0  83ec10               sub esp, 0x10
// 004fb3b3  56                   push esi
// 004fb3b4  8bf1                 mov esi, ecx
// 004fb3b6  d9460c               fld dword ptr [esi + 0xc]
// 004fb3b9  57                   push edi
// 004fb3ba  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004fb3be  d95c2408             fstp dword ptr [esp + 8]
// 004fb3c2  d94610               fld dword ptr [esi + 0x10]
// 004fb3c5  8d87a8040000         lea eax, [edi + 0x4a8]
// 004fb3cb  d95c240c             fstp dword ptr [esp + 0xc]
// 004fb3cf  50                   push eax
// 004fb3d0  d94614               fld dword ptr [esi + 0x14]
// 004fb3d3  d95c2414             fstp dword ptr [esp + 0x14]
// 004fb3d7  d944240c             fld dword ptr [esp + 0xc]
// 004fb3db  d918                 fstp dword ptr [eax]
// 004fb3dd  d9442410             fld dword ptr [esp + 0x10]
// 004fb3e1  d95804               fstp dword ptr [eax + 4]
// 004fb3e4  d9442414             fld dword ptr [esp + 0x14]
// 004fb3e8  d95808               fstp dword ptr [eax + 8]
// 004fb3eb  d9e8                 fld1 
// 004fb3ed  d9580c               fstp dword ptr [eax + 0xc]
// 004fb3f0  ff1540ea7700         call dword ptr [0x77ea40]
// 004fb3f6  d94618               fld dword ptr [esi + 0x18]
// 004fb3f9  51                   push ecx
// 004fb3fa  d91c24               fstp dword ptr [esp]
// 004fb3fd  8bcf                 mov ecx, edi
// 004fb3ff  e89ca0f7ff           call 0x4754a0
// 004fb404  d9461c               fld dword ptr [esi + 0x1c]
// 004fb407  51                   push ecx
// 004fb408  8bcf                 mov ecx, edi
// 004fb40a  d91c24               fstp dword ptr [esp]
// 004fb40d  e8ae82f7ff           call 0x4736c0
// 004fb412  51                   push ecx
// 004fb413  8bc4                 mov eax, esp
// 004fb415  89642420             mov dword ptr [esp + 0x20], esp
// 004fb419  57                   push edi
// 004fb41a  50                   push eax
// 004fb41b  8bce                 mov ecx, esi
// 004fb41d  e85eccffff           call 0x4f8080
// 004fb422  6a00                 push 0
// 004fb424  8bcf                 mov ecx, edi
// 004fb426  e825aef7ff           call 0x476250
// 004fb42b  5f                   pop edi
// 004fb42c  5e                   pop esi
// 004fb42d  83c410               add esp, 0x10
// 004fb430  c20400               ret 4
// library rbxgs-render/Material.cpp (function ?configureRenderDevice@Level@Material@Render@RBX@@QBEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
