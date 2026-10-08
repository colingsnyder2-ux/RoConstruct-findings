// from server: 100% by auto
// roc 2012-06 0063c5c0  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0063c5c0
//
// 0063c5c0  51                   push ecx
// 0063c5c1  56                   push esi
// 0063c5c2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063c5c6  51                   push ecx
// 0063c5c7  8bce                 mov ecx, esi
// 0063c5c9  c744240800000000     mov dword ptr [esp + 8], 0
// 0063c5d1  ff154426b200         call dword ptr [0xb22644]
// 0063c5d7  8bc6                 mov eax, esi
// 0063c5d9  5e                   pop esi
// 0063c5da  59                   pop ecx
// 0063c5db  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?getFilename@BinaryOutput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
