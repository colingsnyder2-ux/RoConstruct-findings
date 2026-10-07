// roc 2009-06 00561b90  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00561b90
//
// 00561b90  8b442408             mov eax, dword ptr [esp + 8]
// 00561b94  56                   push esi
// 00561b95  8bf1                 mov esi, ecx
// 00561b97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00561b9b  50                   push eax
// 00561b9c  51                   push ecx
// 00561b9d  8bce                 mov ecx, esi
// 00561b9f  e8bcfcffff           call 0x561860
// 00561ba4  c7061ca78c00         mov dword ptr [esi], 0x8ca71c
// 00561baa  8bc6                 mov eax, esi
// 00561bac  5e                   pop esi
// 00561bad  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
