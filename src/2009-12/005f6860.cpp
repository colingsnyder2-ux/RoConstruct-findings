// roc 2009-12 005f6860  unit: G3D::BinaryInput  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f6860
//
// 005f6860  51                   push ecx
// 005f6861  d9410c               fld dword ptr [ecx + 0xc]
// 005f6864  56                   push esi
// 005f6865  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005f6869  83ec20               sub esp, 0x20
// 005f686c  dd5c2418             fstp qword ptr [esp + 0x18]
// 005f6870  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005f6878  d94108               fld dword ptr [ecx + 8]
// 005f687b  dd5c2410             fstp qword ptr [esp + 0x10]
// 005f687f  d94104               fld dword ptr [ecx + 4]
// 005f6882  dd5c2408             fstp qword ptr [esp + 8]
// 005f6886  d901                 fld dword ptr [ecx]
// 005f6888  dd1c24               fstp qword ptr [esp]
// 005f688b  6820279c00           push 0x9c2720
// 005f6890  56                   push esi
// 005f6891  e8aa300000           call 0x5f9940
// 005f6896  83c428               add esp, 0x28
// 005f6899  8bc6                 mov eax, esi
// 005f689b  5e                   pop esi
// 005f689c  59                   pop ecx
// 005f689d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?toString@Color4@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
