// from server: 100% by auto
// roc 2011-06 00551cf0  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00551cf0
//
// 00551cf0  51                   push ecx
// 00551cf1  d94110               fld dword ptr [ecx + 0x10]
// 00551cf4  56                   push esi
// 00551cf5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00551cf9  83ec20               sub esp, 0x20
// 00551cfc  dd5c2418             fstp qword ptr [esp + 0x18]
// 00551d00  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00551d08  d9410c               fld dword ptr [ecx + 0xc]
// 00551d0b  dd5c2410             fstp qword ptr [esp + 0x10]
// 00551d0f  d94108               fld dword ptr [ecx + 8]
// 00551d12  dd5c2408             fstp qword ptr [esp + 8]
// 00551d16  d94104               fld dword ptr [ecx + 4]
// 00551d19  dd1c24               fstp qword ptr [esp]
// 00551d1c  683806a800           push 0xa80638
// 00551d21  56                   push esi
// 00551d22  e86970ffff           call 0x548d90
// 00551d27  83c428               add esp, 0x28
// 00551d2a  8bc6                 mov eax, esi
// 00551d2c  5e                   pop esi
// 00551d2d  59                   pop ecx
// 00551d2e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Sphere.cpp
