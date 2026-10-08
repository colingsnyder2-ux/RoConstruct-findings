// roc 2009-12 005ec3a0  unit: G3D::Log  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec3a0
//
// 005ec3a0  51                   push ecx
// 005ec3a1  56                   push esi
// 005ec3a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005ec3a6  51                   push ecx
// 005ec3a7  8bce                 mov ecx, esi
// 005ec3a9  c744240800000000     mov dword ptr [esp + 8], 0
// 005ec3b1  ff15f0b69800         call dword ptr [0x98b6f0]
// 005ec3b7  8bc6                 mov eax, esi
// 005ec3b9  5e                   pop esi
// 005ec3ba  59                   pop ecx
// 005ec3bb  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_png.cpp (function ?getFilename@BinaryOutput@G3D@@QBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_png.cpp
