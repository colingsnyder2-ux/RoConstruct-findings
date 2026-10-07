// roc 2010-06 00548090  unit: RBX::RbxG3D::Material  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00548090
//
// 00548090  8b442408             mov eax, dword ptr [esp + 8]
// 00548094  56                   push esi
// 00548095  8bf1                 mov esi, ecx
// 00548097  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054809b  50                   push eax
// 0054809c  51                   push ecx
// 0054809d  8bce                 mov ecx, esi
// 0054809f  e8dcfcffff           call 0x547d80
// 005480a4  c7061cf4a100         mov dword ptr [esi], 0xa1f41c
// 005480aa  8bc6                 mov eax, esi
// 005480ac  5e                   pop esi
// 005480ad  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
