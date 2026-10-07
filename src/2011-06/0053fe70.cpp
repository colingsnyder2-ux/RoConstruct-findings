// roc 2011-06 0053fe70  unit: G3D::MemoryManager  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053fe70
//
// 0053fe70  51                   push ecx
// 0053fe71  d94108               fld dword ptr [ecx + 8]
// 0053fe74  56                   push esi
// 0053fe75  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053fe79  83ec18               sub esp, 0x18
// 0053fe7c  dd5c2410             fstp qword ptr [esp + 0x10]
// 0053fe80  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0053fe88  d94104               fld dword ptr [ecx + 4]
// 0053fe8b  dd5c2408             fstp qword ptr [esp + 8]
// 0053fe8f  d901                 fld dword ptr [ecx]
// 0053fe91  dd1c24               fstp qword ptr [esp]
// 0053fe94  6834fba700           push 0xa7fb34
// 0053fe99  56                   push esi
// 0053fe9a  e8f18e0000           call 0x548d90
// 0053fe9f  83c420               add esp, 0x20
// 0053fea2  8bc6                 mov eax, esi
// 0053fea4  5e                   pop esi
// 0053fea5  59                   pop ecx
// 0053fea6  c20400               ret 4
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?toString@Vector3@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
