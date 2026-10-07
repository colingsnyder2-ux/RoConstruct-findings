// roc 2008-06 0050ab60  unit: G3D::Log  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ab60
//
// 0050ab60  51                   push ecx
// 0050ab61  56                   push esi
// 0050ab62  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0050ab66  51                   push ecx
// 0050ab67  8bce                 mov ecx, esi
// 0050ab69  c744240800000000     mov dword ptr [esp + 8], 0
// 0050ab71  ff155c248000         call dword ptr [0x80245c]
// 0050ab77  8bc6                 mov eax, esi
// 0050ab79  5e                   pop esi
// 0050ab7a  59                   pop ecx
// 0050ab7b  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?getFilename@BinaryOutput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
