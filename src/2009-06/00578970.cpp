// roc 2009-06 00578970  unit: G3D::LineSegment  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00578970
//
// 00578970  51                   push ecx
// 00578971  d9410c               fld dword ptr [ecx + 0xc]
// 00578974  56                   push esi
// 00578975  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00578979  83ec20               sub esp, 0x20
// 0057897c  dd5c2418             fstp qword ptr [esp + 0x18]
// 00578980  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00578988  d94108               fld dword ptr [ecx + 8]
// 0057898b  dd5c2410             fstp qword ptr [esp + 0x10]
// 0057898f  d94104               fld dword ptr [ecx + 4]
// 00578992  dd5c2408             fstp qword ptr [esp + 8]
// 00578996  d901                 fld dword ptr [ecx]
// 00578998  dd1c24               fstp qword ptr [esp]
// 0057899b  6800b98c00           push 0x8cb900
// 005789a0  56                   push esi
// 005789a1  e8da090000           call 0x579380
// 005789a6  83c428               add esp, 0x28
// 005789a9  8bc6                 mov eax, esi
// 005789ab  5e                   pop esi
// 005789ac  59                   pop ecx
// 005789ad  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector4.cpp (function ?toString@Vector4@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector4.cpp
