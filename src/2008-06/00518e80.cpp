// from server: 100% by auto
// roc 2008-06 00518e80  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00518e80
//
// 00518e80  51                   push ecx
// 00518e81  d94110               fld dword ptr [ecx + 0x10]
// 00518e84  56                   push esi
// 00518e85  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00518e89  83ec20               sub esp, 0x20
// 00518e8c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00518e90  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00518e98  d9410c               fld dword ptr [ecx + 0xc]
// 00518e9b  dd5c2410             fstp qword ptr [esp + 0x10]
// 00518e9f  d94108               fld dword ptr [ecx + 8]
// 00518ea2  dd5c2408             fstp qword ptr [esp + 8]
// 00518ea6  d94104               fld dword ptr [ecx + 4]
// 00518ea9  dd1c24               fstp qword ptr [esp]
// 00518eac  68708b8200           push 0x828b70
// 00518eb1  56                   push esi
// 00518eb2  e8590cffff           call 0x509b10
// 00518eb7  83c428               add esp, 0x28
// 00518eba  8bc6                 mov eax, esi
// 00518ebc  5e                   pop esi
// 00518ebd  59                   pop ecx
// 00518ebe  c20400               ret 4
// library g3d-6.09/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Sphere.cpp
