// from server: 100% by auto
// roc 2010-06 00547d60  unit: RBX::RbxG3D::Material  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00547d60
//
// 00547d60  8b442408             mov eax, dword ptr [esp + 8]
// 00547d64  56                   push esi
// 00547d65  8bf1                 mov esi, ecx
// 00547d67  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00547d6b  50                   push eax
// 00547d6c  51                   push ecx
// 00547d6d  8bce                 mov ecx, esi
// 00547d6f  e8dcfcffff           call 0x547a50
// 00547d74  c70604f4a100         mov dword ptr [esi], 0xa1f404
// 00547d7a  8bc6                 mov eax, esi
// 00547d7c  5e                   pop esi
// 00547d7d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
