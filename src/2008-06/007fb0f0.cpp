// roc 2008-06 007fb0f0  unit: seg_007f0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb0f0
//
// 007fb0f0  a1d4fa9600           mov eax, dword ptr [0x96fad4]
// 007fb0f5  50                   push eax
// 007fb0f6  e825ccd0ff           call 0x507d20
// 007fb0fb  33c0                 xor eax, eax
// 007fb0fd  83c404               add esp, 4
// 007fb100  a3d4fa9600           mov dword ptr [0x96fad4], eax
// 007fb105  a3d8fa9600           mov dword ptr [0x96fad8], eax
// 007fb10a  a3dcfa9600           mov dword ptr [0x96fadc], eax
// 007fb10f  c3                   ret 
// library g3d-6.09/G3Dcpp\CollisionDetection.cpp (function ??__F?ignoreArray@CollisionDetection@G3D@@0V?$Array@VVector3@G3D@@@2@A@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CollisionDetection.cpp
