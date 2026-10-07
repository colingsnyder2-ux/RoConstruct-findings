// roc 2011-06 0066c3b0  unit: DxUserInput  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0066c3b0
//
// 0066c3b0  8b442408             mov eax, dword ptr [esp + 8]
// 0066c3b4  83ec30               sub esp, 0x30
// 0066c3b7  56                   push esi
// 0066c3b8  8b742438             mov esi, dword ptr [esp + 0x38]
// 0066c3bc  50                   push eax
// 0066c3bd  56                   push esi
// 0066c3be  8d54240c             lea edx, [esp + 0xc]
// 0066c3c2  52                   push edx
// 0066c3c3  e87862edff           call 0x542640
// 0066c3c8  8bc8                 mov ecx, eax
// 0066c3ca  e8b1e5f9ff           call 0x60a980
// 0066c3cf  8bc6                 mov eax, esi
// 0066c3d1  5e                   pop esi
// 0066c3d2  83c430               add esp, 0x30
// 0066c3d5  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVBox@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
