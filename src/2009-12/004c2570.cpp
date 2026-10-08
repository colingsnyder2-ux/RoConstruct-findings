// roc 2009-12 004c2570  unit: Ogre::RbxCluster  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c2570
//
// 004c2570  8b442408             mov eax, dword ptr [esp + 8]
// 004c2574  83ec30               sub esp, 0x30
// 004c2577  56                   push esi
// 004c2578  8b742438             mov esi, dword ptr [esp + 0x38]
// 004c257c  50                   push eax
// 004c257d  56                   push esi
// 004c257e  8d54240c             lea edx, [esp + 0xc]
// 004c2582  52                   push edx
// 004c2583  e8b8feffff           call 0x4c2440
// 004c2588  8bc8                 mov ecx, eax
// 004c258a  e851b3fbff           call 0x47d8e0
// 004c258f  8bc6                 mov eax, esi
// 004c2591  5e                   pop esi
// 004c2592  83c430               add esp, 0x30
// 004c2595  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVBox@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
