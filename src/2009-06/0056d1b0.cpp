// roc 2009-06 0056d1b0  unit: G3D::Log  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056d1b0
//
// 0056d1b0  51                   push ecx
// 0056d1b1  56                   push esi
// 0056d1b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056d1b6  83c108               add ecx, 8
// 0056d1b9  51                   push ecx
// 0056d1ba  8bce                 mov ecx, esi
// 0056d1bc  c744240800000000     mov dword ptr [esp + 8], 0
// 0056d1c4  ff15b8e48900         call dword ptr [0x89e4b8]
// 0056d1ca  8bc6                 mov eax, esi
// 0056d1cc  5e                   pop esi
// 0056d1cd  59                   pop ecx
// 0056d1ce  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?getFilename@BinaryInput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
