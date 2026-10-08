// from server: 100% by auto
// roc 2007-08 005115e0  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005115e0
//
// 005115e0  51                   push ecx
// 005115e1  d94110               fld dword ptr [ecx + 0x10]
// 005115e4  56                   push esi
// 005115e5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005115e9  83ec20               sub esp, 0x20
// 005115ec  dd5c2418             fstp qword ptr [esp + 0x18]
// 005115f0  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005115f8  d9410c               fld dword ptr [ecx + 0xc]
// 005115fb  dd5c2410             fstp qword ptr [esp + 0x10]
// 005115ff  d94108               fld dword ptr [ecx + 8]
// 00511602  dd5c2408             fstp qword ptr [esp + 8]
// 00511606  d94104               fld dword ptr [ecx + 4]
// 00511609  dd1c24               fstp qword ptr [esp]
// 0051160c  68e00e7a00           push 0x7a0ee0
// 00511611  56                   push esi
// 00511612  e8a901ffff           call 0x5017c0
// 00511617  83c428               add esp, 0x28
// 0051161a  8bc6                 mov eax, esi
// 0051161c  5e                   pop esi
// 0051161d  59                   pop ecx
// 0051161e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Sphere.cpp
