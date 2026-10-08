// from server: 100% by auto
// roc 2010-06 005502a0  unit: G3D::Log  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005502a0
//
// 005502a0  51                   push ecx
// 005502a1  56                   push esi
// 005502a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005502a6  51                   push ecx
// 005502a7  8bce                 mov ecx, esi
// 005502a9  c744240800000000     mov dword ptr [esp + 8], 0
// 005502b1  ff150ca49e00         call dword ptr [0x9ea40c]
// 005502b7  8bc6                 mov eax, esi
// 005502b9  5e                   pop esi
// 005502ba  59                   pop ecx
// 005502bb  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?getFilename@BinaryOutput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
