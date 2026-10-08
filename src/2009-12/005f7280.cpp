// roc 2009-12 005f7280  unit: G3D::BinaryInput  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f7280
//
// 005f7280  51                   push ecx
// 005f7281  d94108               fld dword ptr [ecx + 8]
// 005f7284  56                   push esi
// 005f7285  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f7289  83ec18               sub esp, 0x18
// 005f728c  dd5c2410             fstp qword ptr [esp + 0x10]
// 005f7290  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005f7298  d94104               fld dword ptr [ecx + 4]
// 005f729b  dd5c2408             fstp qword ptr [esp + 8]
// 005f729f  d901                 fld dword ptr [ecx]
// 005f72a1  dd1c24               fstp qword ptr [esp]
// 005f72a4  6800269c00           push 0x9c2600
// 005f72a9  56                   push esi
// 005f72aa  e891260000           call 0x5f9940
// 005f72af  83c420               add esp, 0x20
// 005f72b2  8bc6                 mov eax, esi
// 005f72b4  5e                   pop esi
// 005f72b5  59                   pop ecx
// 005f72b6  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?toString@Color3@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
