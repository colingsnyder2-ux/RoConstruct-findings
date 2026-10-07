// roc 2009-06 005767e0  unit: G3D::BinaryInput  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005767e0
//
// 005767e0  51                   push ecx
// 005767e1  d94108               fld dword ptr [ecx + 8]
// 005767e4  56                   push esi
// 005767e5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005767e9  83ec18               sub esp, 0x18
// 005767ec  dd5c2410             fstp qword ptr [esp + 0x10]
// 005767f0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005767f8  d94104               fld dword ptr [ecx + 4]
// 005767fb  dd5c2408             fstp qword ptr [esp + 8]
// 005767ff  d901                 fld dword ptr [ecx]
// 00576801  dd1c24               fstp qword ptr [esp]
// 00576804  6838b88c00           push 0x8cb838
// 00576809  56                   push esi
// 0057680a  e8712b0000           call 0x579380
// 0057680f  83c420               add esp, 0x20
// 00576812  8bc6                 mov eax, esi
// 00576814  5e                   pop esi
// 00576815  59                   pop ecx
// 00576816  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?toString@Vector3@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
