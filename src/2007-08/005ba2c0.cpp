// from server: 100% by auto
// roc 2007-08 005ba2c0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ba2c0
//
// 005ba2c0  8b442408             mov eax, dword ptr [esp + 8]
// 005ba2c4  83ec30               sub esp, 0x30
// 005ba2c7  56                   push esi
// 005ba2c8  8b742438             mov esi, dword ptr [esp + 0x38]
// 005ba2cc  50                   push eax
// 005ba2cd  56                   push esi
// 005ba2ce  8d54240c             lea edx, [esp + 0xc]
// 005ba2d2  52                   push edx
// 005ba2d3  e8d8adebff           call 0x4750b0
// 005ba2d8  8bc8                 mov ecx, eax
// 005ba2da  e8218febff           call 0x473200
// 005ba2df  8bc6                 mov eax, esi
// 005ba2e1  5e                   pop esi
// 005ba2e2  83c430               add esp, 0x30
// 005ba2e5  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVBox@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
