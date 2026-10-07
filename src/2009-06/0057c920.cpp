// roc 2009-06 0057c920  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c920
//
// 0057c920  51                   push ecx
// 0057c921  d94110               fld dword ptr [ecx + 0x10]
// 0057c924  56                   push esi
// 0057c925  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057c929  83ec20               sub esp, 0x20
// 0057c92c  dd5c2418             fstp qword ptr [esp + 0x18]
// 0057c930  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0057c938  d9410c               fld dword ptr [ecx + 0xc]
// 0057c93b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0057c93f  d94108               fld dword ptr [ecx + 8]
// 0057c942  dd5c2408             fstp qword ptr [esp + 8]
// 0057c946  d94104               fld dword ptr [ecx + 4]
// 0057c949  dd1c24               fstp qword ptr [esp]
// 0057c94c  6850c08c00           push 0x8cc050
// 0057c951  56                   push esi
// 0057c952  e829caffff           call 0x579380
// 0057c957  83c428               add esp, 0x28
// 0057c95a  8bc6                 mov eax, esi
// 0057c95c  5e                   pop esi
// 0057c95d  59                   pop ecx
// 0057c95e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Sphere.cpp
