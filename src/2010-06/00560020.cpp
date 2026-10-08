// from server: 100% by auto
// roc 2010-06 00560020  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00560020
//
// 00560020  51                   push ecx
// 00560021  d94110               fld dword ptr [ecx + 0x10]
// 00560024  56                   push esi
// 00560025  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00560029  83ec20               sub esp, 0x20
// 0056002c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00560030  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00560038  d9410c               fld dword ptr [ecx + 0xc]
// 0056003b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0056003f  d94108               fld dword ptr [ecx + 8]
// 00560042  dd5c2408             fstp qword ptr [esp + 8]
// 00560046  d94104               fld dword ptr [ecx + 4]
// 00560049  dd1c24               fstp qword ptr [esp]
// 0056004c  68500ca200           push 0xa20c50
// 00560051  56                   push esi
// 00560052  e85974ffff           call 0x5574b0
// 00560057  83c428               add esp, 0x28
// 0056005a  8bc6                 mov eax, esi
// 0056005c  5e                   pop esi
// 0056005d  59                   pop ecx
// 0056005e  c20400               ret 4
// library g3d-6.09/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Sphere.cpp
