// from server: 100% by auto
// roc 2010-06 00979f20  unit: seg_00970000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00979f20
//
// 00979f20  51                   push ecx
// 00979f21  d9410c               fld dword ptr [ecx + 0xc]
// 00979f24  56                   push esi
// 00979f25  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00979f29  83ec20               sub esp, 0x20
// 00979f2c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00979f30  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00979f38  d94108               fld dword ptr [ecx + 8]
// 00979f3b  dd5c2410             fstp qword ptr [esp + 0x10]
// 00979f3f  d94104               fld dword ptr [ecx + 4]
// 00979f42  dd5c2408             fstp qword ptr [esp + 8]
// 00979f46  d901                 fld dword ptr [ecx]
// 00979f48  dd1c24               fstp qword ptr [esp]
// 00979f4b  68c809a200           push 0xa209c8
// 00979f50  56                   push esi
// 00979f51  e85ad5bdff           call 0x5574b0
// 00979f56  83c428               add esp, 0x28
// 00979f59  8bc6                 mov eax, esi
// 00979f5b  5e                   pop esi
// 00979f5c  59                   pop ecx
// 00979f5d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ?toString@Vector4@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
