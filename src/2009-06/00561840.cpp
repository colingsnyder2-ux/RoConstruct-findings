// from server: 100% by auto
// roc 2009-06 00561840  unit: RBX::Mesh::Level  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00561840
//
// 00561840  8b442408             mov eax, dword ptr [esp + 8]
// 00561844  56                   push esi
// 00561845  8bf1                 mov esi, ecx
// 00561847  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056184b  50                   push eax
// 0056184c  51                   push ecx
// 0056184d  8bce                 mov ecx, esi
// 0056184f  e8dcfcffff           call 0x561530
// 00561854  c70600a78c00         mov dword ptr [esi], 0x8ca700
// 0056185a  8bc6                 mov eax, esi
// 0056185c  5e                   pop esi
// 0056185d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
