// roc 2009-06 004a4880  unit: G3D::PBVTextureFormat::?$Table  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004a4880
//
// 004a4880  6aff                 push -1
// 004a4882  6898748500           push 0x857498
// 004a4887  64a100000000         mov eax, dword ptr fs:[0]
// 004a488d  50                   push eax
// 004a488e  64892500000000       mov dword ptr fs:[0], esp
// 004a4895  83ec14               sub esp, 0x14
// 004a4898  d981c0030000         fld dword ptr [ecx + 0x3c0]
// 004a489e  33c0                 xor eax, eax
// 004a48a0  d95c2404             fstp dword ptr [esp + 4]
// 004a48a4  890424               mov dword ptr [esp], eax
// 004a48a7  d981c4030000         fld dword ptr [ecx + 0x3c4]
// 004a48ad  d95c2408             fstp dword ptr [esp + 8]
// 004a48b1  d981c8030000         fld dword ptr [ecx + 0x3c8]
// 004a48b7  d95c240c             fstp dword ptr [esp + 0xc]
// 004a48bb  d981cc030000         fld dword ptr [ecx + 0x3cc]
// 004a48c1  d95c2410             fstp dword ptr [esp + 0x10]
// 004a48c5  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a48c9  8d442404             lea eax, [esp + 4]
// 004a48cd  50                   push eax
// 004a48ce  8d542404             lea edx, [esp + 4]
// 004a48d2  52                   push edx
// 004a48d3  e848feffff           call 0x4a4720
// 004a48d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a48dc  64890d00000000       mov dword ptr fs:[0], ecx
// 004a48e3  83c420               add esp, 0x20
// 004a48e6  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?push2D@RenderDevice@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
