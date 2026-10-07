// roc 2011-06 0054ef80  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0054ef80
//
// 0054ef80  51                   push ecx
// 0054ef81  56                   push esi
// 0054ef82  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054ef86  51                   push ecx
// 0054ef87  8bce                 mov ecx, esi
// 0054ef89  c744240800000000     mov dword ptr [esp + 8], 0
// 0054ef91  ff15c804a400         call dword ptr [0xa404c8]
// 0054ef97  8bc6                 mov eax, esi
// 0054ef99  5e                   pop esi
// 0054ef9a  59                   pop ecx
// 0054ef9b  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?getFilename@BinaryOutput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
