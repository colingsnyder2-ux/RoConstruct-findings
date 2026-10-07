// roc 2012-06 0063eda0  unit: G3D::Sphere  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063eda0
//
// 0063eda0  51                   push ecx
// 0063eda1  d94110               fld dword ptr [ecx + 0x10]
// 0063eda4  56                   push esi
// 0063eda5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063eda9  83ec20               sub esp, 0x20
// 0063edac  dd5c2418             fstp qword ptr [esp + 0x18]
// 0063edb0  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0063edb8  d9410c               fld dword ptr [ecx + 0xc]
// 0063edbb  dd5c2410             fstp qword ptr [esp + 0x10]
// 0063edbf  d94108               fld dword ptr [ecx + 8]
// 0063edc2  dd5c2408             fstp qword ptr [esp + 8]
// 0063edc6  d94104               fld dword ptr [ecx + 4]
// 0063edc9  dd1c24               fstp qword ptr [esp]
// 0063edcc  682c45b800           push 0xb8452c
// 0063edd1  56                   push esi
// 0063edd2  e8699fffff           call 0x638d40
// 0063edd7  83c428               add esp, 0x28
// 0063edda  8bc6                 mov eax, esi
// 0063eddc  5e                   pop esi
// 0063eddd  59                   pop ecx
// 0063edde  c20400               ret 4
// library g3d-6.09/G3Dcpp\Sphere.cpp (function ?toString@Sphere@G3D@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Sphere.cpp
