// roc 2009-12 005fe700  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fe700
//
// 005fe700  51                   push ecx
// 005fe701  d94110               fld dword ptr [ecx + 0x10]
// 005fe704  56                   push esi
// 005fe705  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005fe709  83ec20               sub esp, 0x20
// 005fe70c  dd5c2418             fstp qword ptr [esp + 0x18]
// 005fe710  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005fe718  d9410c               fld dword ptr [ecx + 0xc]
// 005fe71b  dd5c2410             fstp qword ptr [esp + 0x10]
// 005fe71f  d94108               fld dword ptr [ecx + 8]
// 005fe722  dd5c2408             fstp qword ptr [esp + 8]
// 005fe726  d94104               fld dword ptr [ecx + 4]
// 005fe729  dd1c24               fstp qword ptr [esp]
// 005fe72c  68f82e9c00           push 0x9c2ef8
// 005fe731  56                   push esi
// 005fe732  e809b2ffff           call 0x5f9940
// 005fe737  83c428               add esp, 0x28
// 005fe73a  8bc6                 mov eax, esi
// 005fe73c  5e                   pop esi
// 005fe73d  59                   pop ecx
// 005fe73e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Sphere.cpp
