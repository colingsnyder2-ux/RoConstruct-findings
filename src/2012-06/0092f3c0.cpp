// from server: 100% by auto
// roc 2012-06 0092f3c0  unit: RBX::BuoyancyCornerWedgeContact  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0092f3c0
//
// 0092f3c0  8b442408             mov eax, dword ptr [esp + 8]
// 0092f3c4  56                   push esi
// 0092f3c5  8bf1                 mov esi, ecx
// 0092f3c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0092f3cb  50                   push eax
// 0092f3cc  51                   push ecx
// 0092f3cd  8bce                 mov ecx, esi
// 0092f3cf  e8ccf8ffff           call 0x92eca0
// 0092f3d4  c7061cebbf00         mov dword ptr [esi], 0xbfeb1c
// 0092f3da  8bc6                 mov eax, esi
// 0092f3dc  5e                   pop esi
// 0092f3dd  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
