// roc 2007-03 004eef20  unit: seg_004e0000  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eef20
//
// 004eef20  83ec10               sub esp, 0x10
// 004eef23  56                   push esi
// 004eef24  8bf1                 mov esi, ecx
// 004eef26  d9460c               fld dword ptr [esi + 0xc]
// 004eef29  57                   push edi
// 004eef2a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004eef2e  d95c2408             fstp dword ptr [esp + 8]
// 004eef32  d94610               fld dword ptr [esi + 0x10]
// 004eef35  8d87a8040000         lea eax, [edi + 0x4a8]
// 004eef3b  d95c240c             fstp dword ptr [esp + 0xc]
// 004eef3f  50                   push eax
// 004eef40  d94614               fld dword ptr [esi + 0x14]
// 004eef43  d95c2414             fstp dword ptr [esp + 0x14]
// 004eef47  d944240c             fld dword ptr [esp + 0xc]
// 004eef4b  d918                 fstp dword ptr [eax]
// 004eef4d  d9442410             fld dword ptr [esp + 0x10]
// 004eef51  d95804               fstp dword ptr [eax + 4]
// 004eef54  d9442414             fld dword ptr [esp + 0x14]
// 004eef58  d95808               fstp dword ptr [eax + 8]
// 004eef5b  d9e8                 fld1 
// 004eef5d  d9580c               fstp dword ptr [eax + 0xc]
// 004eef60  ff157cec7700         call dword ptr [0x77ec7c]
// 004eef66  d94618               fld dword ptr [esi + 0x18]
// 004eef69  51                   push ecx
// 004eef6a  d91c24               fstp dword ptr [esp]
// 004eef6d  8bcf                 mov ecx, edi
// 004eef6f  e84c66f8ff           call 0x4755c0
// 004eef74  d9461c               fld dword ptr [esi + 0x1c]
// 004eef77  51                   push ecx
// 004eef78  8bcf                 mov ecx, edi
// 004eef7a  d91c24               fstp dword ptr [esp]
// 004eef7d  e82e48f8ff           call 0x4737b0
// 004eef82  51                   push ecx
// 004eef83  8bc4                 mov eax, esp
// 004eef85  89642420             mov dword ptr [esp + 0x20], esp
// 004eef89  57                   push edi
// 004eef8a  50                   push eax
// 004eef8b  8bce                 mov ecx, esi
// 004eef8d  e81ecbffff           call 0x4ebab0
// 004eef92  6a00                 push 0
// 004eef94  8bcf                 mov ecx, edi
// 004eef96  e81574f8ff           call 0x4763b0
// 004eef9b  5f                   pop edi
// 004eef9c  5e                   pop esi
// 004eef9d  83c410               add esp, 0x10
// 004eefa0  c20400               ret 4
// library rbxgs-render/Material.cpp (function ?configureRenderDevice@Level@Material@Render@RBX@@QBEXPAVRenderDevice@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
