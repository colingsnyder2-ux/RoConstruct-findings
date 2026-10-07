// roc 2009-06 0056d290  unit: G3D::Log  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d290
//
// 0056d290  51                   push ecx
// 0056d291  56                   push esi
// 0056d292  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056d296  51                   push ecx
// 0056d297  8bce                 mov ecx, esi
// 0056d299  c744240800000000     mov dword ptr [esp + 8], 0
// 0056d2a1  ff15b8e48900         call dword ptr [0x89e4b8]
// 0056d2a7  8bc6                 mov eax, esi
// 0056d2a9  5e                   pop esi
// 0056d2aa  59                   pop ecx
// 0056d2ab  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?getFilename@BinaryOutput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
