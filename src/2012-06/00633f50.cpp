// from server: 100% by auto
// roc 2012-06 00633f50  unit: G3D::Random  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00633f50
//
// 00633f50  51                   push ecx
// 00633f51  d9410c               fld dword ptr [ecx + 0xc]
// 00633f54  56                   push esi
// 00633f55  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00633f59  83ec20               sub esp, 0x20
// 00633f5c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00633f60  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00633f68  d94108               fld dword ptr [ecx + 8]
// 00633f6b  dd5c2410             fstp qword ptr [esp + 0x10]
// 00633f6f  d94104               fld dword ptr [ecx + 4]
// 00633f72  dd5c2408             fstp qword ptr [esp + 8]
// 00633f76  d901                 fld dword ptr [ecx]
// 00633f78  dd1c24               fstp qword ptr [esp]
// 00633f7b  68a43bb800           push 0xb83ba4
// 00633f80  56                   push esi
// 00633f81  e8ba4d0000           call 0x638d40
// 00633f86  83c428               add esp, 0x28
// 00633f89  8bc6                 mov eax, esi
// 00633f8b  5e                   pop esi
// 00633f8c  59                   pop ecx
// 00633f8d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ?toString@Vector4@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
