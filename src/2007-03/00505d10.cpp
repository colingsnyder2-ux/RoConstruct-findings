// roc 2007-03 00505d10  unit: seg_00500000  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505d10
//
// 00505d10  51                   push ecx
// 00505d11  d94110               fld dword ptr [ecx + 0x10]
// 00505d14  56                   push esi
// 00505d15  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00505d19  83ec20               sub esp, 0x20
// 00505d1c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00505d20  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00505d28  d9410c               fld dword ptr [ecx + 0xc]
// 00505d2b  dd5c2410             fstp qword ptr [esp + 0x10]
// 00505d2f  d94108               fld dword ptr [ecx + 8]
// 00505d32  dd5c2408             fstp qword ptr [esp + 8]
// 00505d36  d94104               fld dword ptr [ecx + 4]
// 00505d39  dd1c24               fstp qword ptr [esp]
// 00505d3c  68a8067a00           push 0x7a06a8
// 00505d41  56                   push esi
// 00505d42  e8e9f5feff           call 0x4f5330
// 00505d47  83c428               add esp, 0x28
// 00505d4a  8bc6                 mov eax, esi
// 00505d4c  5e                   pop esi
// 00505d4d  59                   pop ecx
// 00505d4e  c20400               ret 4
// library rbxgs-g3d/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/Sphere.cpp
