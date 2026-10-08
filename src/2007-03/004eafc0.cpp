// roc 2007-03 004eafc0  unit: seg_004e0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eafc0
//
// 004eafc0  83ec10               sub esp, 0x10
// 004eafc3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004eafc7  d900                 fld dword ptr [eax]
// 004eafc9  d91c24               fstp dword ptr [esp]
// 004eafcc  d94004               fld dword ptr [eax + 4]
// 004eafcf  d95c2404             fstp dword ptr [esp + 4]
// 004eafd3  d94008               fld dword ptr [eax + 8]
// 004eafd6  8d81a8040000         lea eax, [ecx + 0x4a8]
// 004eafdc  d95c2408             fstp dword ptr [esp + 8]
// 004eafe0  d90424               fld dword ptr [esp]
// 004eafe3  d918                 fstp dword ptr [eax]
// 004eafe5  d9442404             fld dword ptr [esp + 4]
// 004eafe9  d95804               fstp dword ptr [eax + 4]
// 004eafec  d9442408             fld dword ptr [esp + 8]
// 004eaff0  d95808               fstp dword ptr [eax + 8]
// 004eaff3  d9e8                 fld1 
// 004eaff5  d9580c               fstp dword ptr [eax + 0xc]
// 004eaff8  83c410               add esp, 0x10
// 004eaffb  89442404             mov dword ptr [esp + 4], eax
// 004eafff  ff257cec7700         jmp dword ptr [0x77ec7c]
// library rbxgs-render/Material.cpp (function ?setColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
