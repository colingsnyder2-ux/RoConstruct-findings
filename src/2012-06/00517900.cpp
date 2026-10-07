// roc 2012-06 00517900  unit: Ogre::RbxCluster::RbxPartBinding  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00517900
//
// 00517900  8b442408             mov eax, dword ptr [esp + 8]
// 00517904  83ec30               sub esp, 0x30
// 00517907  56                   push esi
// 00517908  8b742438             mov esi, dword ptr [esp + 0x38]
// 0051790c  50                   push eax
// 0051790d  56                   push esi
// 0051790e  8d54240c             lea edx, [esp + 0xc]
// 00517912  52                   push edx
// 00517913  e818ffffff           call 0x517830
// 00517918  8bc8                 mov ecx, eax
// 0051791a  e8119ffaff           call 0x4c1830
// 0051791f  8bc6                 mov eax, esi
// 00517921  5e                   pop esi
// 00517922  83c430               add esp, 0x30
// 00517925  c20800               ret 8
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?toObjectSpace@CoordinateFrame@G3D@@QBE?AVBox@2@ABV32@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
