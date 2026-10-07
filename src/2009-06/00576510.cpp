// roc 2009-06 00576510  unit: G3D::BinaryInput  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576510
//
// 00576510  b801000000           mov eax, 1
// 00576515  8405f82aa400         test byte ptr [0xa42af8], al
// 0057651b  751a                 jne 0x576537
// 0057651d  d9ee                 fldz 
// 0057651f  0905f82aa400         or dword ptr [0xa42af8], eax
// 00576525  d915ec2aa400         fst dword ptr [0xa42aec]
// 0057652b  d915f02aa400         fst dword ptr [0xa42af0]
// 00576531  d91df42aa400         fstp dword ptr [0xa42af4]
// 00576537  b8ec2aa400           mov eax, 0xa42aec
// 0057653c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
