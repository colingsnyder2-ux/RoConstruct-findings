// roc 2009-06 0065bf10  unit: RBX::VPVInstance::?$NonFactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bf10
//
// 0065bf10  8b442408             mov eax, dword ptr [esp + 8]
// 0065bf14  83ec30               sub esp, 0x30
// 0065bf17  56                   push esi
// 0065bf18  8b742438             mov esi, dword ptr [esp + 0x38]
// 0065bf1c  50                   push eax
// 0065bf1d  56                   push esi
// 0065bf1e  8d54240c             lea edx, [esp + 0xc]
// 0065bf22  52                   push edx
// 0065bf23  e8e839e4ff           call 0x49f910
// 0065bf28  8bc8                 mov ecx, eax
// 0065bf2a  e8411ee4ff           call 0x49dd70
// 0065bf2f  8bc6                 mov eax, esi
// 0065bf31  5e                   pop esi
// 0065bf32  83c430               add esp, 0x30
// 0065bf35  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVBox@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
