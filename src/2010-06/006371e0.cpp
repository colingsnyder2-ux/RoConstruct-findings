// roc 2010-06 006371e0  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006371e0
//
// 006371e0  8b442408             mov eax, dword ptr [esp + 8]
// 006371e4  83ec30               sub esp, 0x30
// 006371e7  56                   push esi
// 006371e8  8b742438             mov esi, dword ptr [esp + 0x38]
// 006371ec  50                   push eax
// 006371ed  56                   push esi
// 006371ee  8d54240c             lea edx, [esp + 0xc]
// 006371f2  52                   push edx
// 006371f3  e8b8b6e5ff           call 0x4928b0
// 006371f8  8bc8                 mov ecx, eax
// 006371fa  e8c199e5ff           call 0x490bc0
// 006371ff  8bc6                 mov eax, esi
// 00637201  5e                   pop esi
// 00637202  83c430               add esp, 0x30
// 00637205  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVBox@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
