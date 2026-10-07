// roc 2012-06 0092f3a0  unit: RBX::BuoyancyCornerWedgeContact  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0092f3a0
//
// 0092f3a0  8b442408             mov eax, dword ptr [esp + 8]
// 0092f3a4  56                   push esi
// 0092f3a5  8bf1                 mov esi, ecx
// 0092f3a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0092f3ab  50                   push eax
// 0092f3ac  51                   push ecx
// 0092f3ad  8bce                 mov ecx, esi
// 0092f3af  e8ecf8ffff           call 0x92eca0
// 0092f3b4  c706cceabf00         mov dword ptr [esi], 0xbfeacc
// 0092f3ba  8bc6                 mov eax, esi
// 0092f3bc  5e                   pop esi
// 0092f3bd  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
