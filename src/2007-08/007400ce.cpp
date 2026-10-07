// roc 2007-08 007400ce  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007400ce
//
// 007400ce  8b542408             mov edx, dword ptr [esp + 8]
// 007400d2  8d02                 lea eax, [edx]
// 007400d4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007400d7  33c8                 xor ecx, eax
// 007400d9  e84009efff           call 0x630a1e
// 007400de  b838718400           mov eax, 0x847138
// 007400e3  e93009efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
