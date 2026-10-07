// roc 2010-06 0055a100  unit: G3D::BinaryInput  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055a100
//
// 0055a100  51                   push ecx
// 0055a101  d94108               fld dword ptr [ecx + 8]
// 0055a104  56                   push esi
// 0055a105  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055a109  83ec18               sub esp, 0x18
// 0055a10c  dd5c2410             fstp qword ptr [esp + 0x10]
// 0055a110  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0055a118  d94104               fld dword ptr [ecx + 4]
// 0055a11b  dd5c2408             fstp qword ptr [esp + 8]
// 0055a11f  d901                 fld dword ptr [ecx]
// 0055a121  dd1c24               fstp qword ptr [esp]
// 0055a124  68f409a200           push 0xa209f4
// 0055a129  56                   push esi
// 0055a12a  e881d3ffff           call 0x5574b0
// 0055a12f  83c420               add esp, 0x20
// 0055a132  8bc6                 mov eax, esi
// 0055a134  5e                   pop esi
// 0055a135  59                   pop ecx
// 0055a136  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?toString@Vector3@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
