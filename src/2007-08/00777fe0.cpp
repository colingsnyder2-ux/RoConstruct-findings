// from server: 100% by auto
// roc 2007-08 00777fe0  unit: seg_00770000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777fe0
//
// 00777fe0  a1c0db8b00           mov eax, dword ptr [0x8bdbc0]
// 00777fe5  50                   push eax
// 00777fe6  e82578d8ff           call 0x4ff810
// 00777feb  33c0                 xor eax, eax
// 00777fed  83c404               add esp, 4
// 00777ff0  a3c0db8b00           mov dword ptr [0x8bdbc0], eax
// 00777ff5  a3c4db8b00           mov dword ptr [0x8bdbc4], eax
// 00777ffa  a3c8db8b00           mov dword ptr [0x8bdbc8], eax
// 00777fff  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
