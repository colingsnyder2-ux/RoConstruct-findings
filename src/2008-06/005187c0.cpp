// from server: 100% by auto
// roc 2008-06 005187c0  unit: G3D::TextInput::WrongSymbol  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005187c0
//
// 005187c0  8b442408             mov eax, dword ptr [esp + 8]
// 005187c4  83ec24               sub esp, 0x24
// 005187c7  56                   push esi
// 005187c8  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005187cc  50                   push eax
// 005187cd  56                   push esi
// 005187ce  8d54240c             lea edx, [esp + 0xc]
// 005187d2  52                   push edx
// 005187d3  e838adffff           call 0x513510
// 005187d8  8bc8                 mov ecx, eax
// 005187da  e8a1ddf5ff           call 0x476580
// 005187df  8bc6                 mov eax, esi
// 005187e1  5e                   pop esi
// 005187e2  83c424               add esp, 0x24
// 005187e5  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?vectorToObjectSpace@CoordinateFrame@G3D@@QBE?AVVector3@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
