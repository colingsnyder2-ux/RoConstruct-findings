// from server: 100% by auto
// roc 2012-06 0092f400  unit: RBX::BuoyancyContact  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0092f400
//
// 0092f400  8b442408             mov eax, dword ptr [esp + 8]
// 0092f404  56                   push esi
// 0092f405  8bf1                 mov esi, ecx
// 0092f407  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0092f40b  50                   push eax
// 0092f40c  51                   push ecx
// 0092f40d  8bce                 mov ecx, esi
// 0092f40f  e88cf8ffff           call 0x92eca0
// 0092f414  c7066cebbf00         mov dword ptr [esi], 0xbfeb6c
// 0092f41a  8bc6                 mov eax, esi
// 0092f41c  5e                   pop esi
// 0092f41d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
