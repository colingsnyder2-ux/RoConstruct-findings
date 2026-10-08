// from server: 100% by auto
// roc 2009-06 0057c2d0  unit: G3D::TextInput::WrongSymbol  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c2d0
//
// 0057c2d0  8b442408             mov eax, dword ptr [esp + 8]
// 0057c2d4  83ec24               sub esp, 0x24
// 0057c2d7  56                   push esi
// 0057c2d8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0057c2dc  50                   push eax
// 0057c2dd  56                   push esi
// 0057c2de  8d54240c             lea edx, [esp + 0xc]
// 0057c2e2  52                   push edx
// 0057c2e3  e898bbffff           call 0x577e80
// 0057c2e8  8bc8                 mov ecx, eax
// 0057c2ea  e83119f2ff           call 0x49dc20
// 0057c2ef  8bc6                 mov eax, esi
// 0057c2f1  5e                   pop esi
// 0057c2f2  83c424               add esp, 0x24
// 0057c2f5  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?vectorToObjectSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
