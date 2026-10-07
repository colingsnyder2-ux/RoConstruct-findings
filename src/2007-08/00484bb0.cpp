// roc 2007-08 00484bb0  unit: G3D::Shader  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00484bb0
//
// 00484bb0  8b442408             mov eax, dword ptr [esp + 8]
// 00484bb4  83ec40               sub esp, 0x40
// 00484bb7  56                   push esi
// 00484bb8  8bf1                 mov esi, ecx
// 00484bba  50                   push eax
// 00484bbb  8d4c2408             lea ecx, [esp + 8]
// 00484bbf  e83c600800           call 0x50ac00
// 00484bc4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00484bc8  50                   push eax
// 00484bc9  51                   push ecx
// 00484bca  8bce                 mov ecx, esi
// 00484bcc  e84ff2ffff           call 0x483e20
// 00484bd1  5e                   pop esi
// 00484bd2  83c440               add esp, 0x40
// 00484bd5  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GPUProgram.cpp (function ?set@ArgList@GPUProgram@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVCoordinateFrame@3@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GPUProgram.cpp
