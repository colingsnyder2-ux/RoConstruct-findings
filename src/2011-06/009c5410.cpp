// from server: 100% by auto
// roc 2011-06 009c5410  unit: seg_009c0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c5410
//
// 009c5410  51                   push ecx
// 009c5411  d9410c               fld dword ptr [ecx + 0xc]
// 009c5414  56                   push esi
// 009c5415  8b74240c             mov esi, dword ptr [esp + 0xc]
// 009c5419  83ec20               sub esp, 0x20
// 009c541c  dd5c2418             fstp qword ptr [esp + 0x18]
// 009c5420  c744242400000000     mov dword ptr [esp + 0x24], 0
// 009c5428  d94108               fld dword ptr [ecx + 8]
// 009c542b  dd5c2410             fstp qword ptr [esp + 0x10]
// 009c542f  d94104               fld dword ptr [ecx + 4]
// 009c5432  dd5c2408             fstp qword ptr [esp + 8]
// 009c5436  d901                 fld dword ptr [ecx]
// 009c5438  dd1c24               fstp qword ptr [esp]
// 009c543b  68a006a800           push 0xa806a0
// 009c5440  56                   push esi
// 009c5441  e84a39b8ff           call 0x548d90
// 009c5446  83c428               add esp, 0x28
// 009c5449  8bc6                 mov eax, esi
// 009c544b  5e                   pop esi
// 009c544c  59                   pop ecx
// 009c544d  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ?toString@Vector4@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
