// roc 2012-06 0062c050  unit: G3D::Sphere  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0062c050
//
// 0062c050  51                   push ecx
// 0062c051  d94108               fld dword ptr [ecx + 8]
// 0062c054  56                   push esi
// 0062c055  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062c059  83ec18               sub esp, 0x18
// 0062c05c  dd5c2410             fstp qword ptr [esp + 0x10]
// 0062c060  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0062c068  d94104               fld dword ptr [ecx + 4]
// 0062c06b  dd5c2408             fstp qword ptr [esp + 8]
// 0062c06f  d901                 fld dword ptr [ecx]
// 0062c071  dd1c24               fstp qword ptr [esp]
// 0062c074  683839b800           push 0xb83938
// 0062c079  56                   push esi
// 0062c07a  e8c1cc0000           call 0x638d40
// 0062c07f  83c420               add esp, 0x20
// 0062c082  8bc6                 mov eax, esi
// 0062c084  5e                   pop esi
// 0062c085  59                   pop ecx
// 0062c086  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?toString@Vector3@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
