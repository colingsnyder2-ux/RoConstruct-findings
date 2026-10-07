// roc 2007-08 00748eee  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00748eee
//
// 00748eee  8b542408             mov edx, dword ptr [esp + 8]
// 00748ef2  8d02                 lea eax, [edx]
// 00748ef4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00748ef7  33c8                 xor ecx, eax
// 00748ef9  e8207beeff           call 0x630a1e
// 00748efe  b8a4f78400           mov eax, 0x84f7a4
// 00748f03  e9107beeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
