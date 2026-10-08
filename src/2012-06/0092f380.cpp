// from server: 100% by auto
// roc 2012-06 0092f380  unit: RBX::BuoyancyCornerWedgeContact  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0092f380
//
// 0092f380  8b442408             mov eax, dword ptr [esp + 8]
// 0092f384  56                   push esi
// 0092f385  8bf1                 mov esi, ecx
// 0092f387  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0092f38b  50                   push eax
// 0092f38c  51                   push ecx
// 0092f38d  8bce                 mov ecx, esi
// 0092f38f  e8fcd9ffff           call 0x92cd90
// 0092f394  c7067ceabf00         mov dword ptr [esi], 0xbfea7c
// 0092f39a  8bc6                 mov eax, esi
// 0092f39c  5e                   pop esi
// 0092f39d  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\PixelProgram.cpp (function ??0PixelProgram@G3D@@AAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PixelProgram.cpp
