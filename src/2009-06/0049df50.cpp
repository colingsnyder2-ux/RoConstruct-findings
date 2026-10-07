// roc 2009-06 0049df50  unit: G3D::VARArea  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049df50
//
// 0049df50  8b442408             mov eax, dword ptr [esp + 8]
// 0049df54  56                   push esi
// 0049df55  8b742408             mov esi, dword ptr [esp + 8]
// 0049df59  50                   push eax
// 0049df5a  56                   push esi
// 0049df5b  e800f50000           call 0x4ad460
// 0049df60  83c408               add esp, 8
// 0049df63  8bc6                 mov eax, esi
// 0049df65  5e                   pop esi
// 0049df66  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?project@RenderDevice@G3D@@QBE?AVVector4@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
