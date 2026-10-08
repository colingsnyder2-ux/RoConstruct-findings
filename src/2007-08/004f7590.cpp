// roc 2007-08 004f7590  unit: seg_004f0000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7590
//
// 004f7590  83ec10               sub esp, 0x10
// 004f7593  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f7597  d900                 fld dword ptr [eax]
// 004f7599  d91c24               fstp dword ptr [esp]
// 004f759c  d94004               fld dword ptr [eax + 4]
// 004f759f  d95c2404             fstp dword ptr [esp + 4]
// 004f75a3  d94008               fld dword ptr [eax + 8]
// 004f75a6  8d81a8040000         lea eax, [ecx + 0x4a8]
// 004f75ac  d95c2408             fstp dword ptr [esp + 8]
// 004f75b0  d90424               fld dword ptr [esp]
// 004f75b3  d918                 fstp dword ptr [eax]
// 004f75b5  d9442404             fld dword ptr [esp + 4]
// 004f75b9  d95804               fstp dword ptr [eax + 4]
// 004f75bc  d9442408             fld dword ptr [esp + 8]
// 004f75c0  d95808               fstp dword ptr [eax + 8]
// 004f75c3  d9e8                 fld1 
// 004f75c5  d9580c               fstp dword ptr [eax + 0xc]
// 004f75c8  83c410               add esp, 0x10
// 004f75cb  89442404             mov dword ptr [esp + 4], eax
// 004f75cf  ff2540ea7700         jmp dword ptr [0x77ea40]
// library rbxgs-render/Material.cpp (function ?setColor@RenderDevice@G3D@@QAEXABVColor3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
