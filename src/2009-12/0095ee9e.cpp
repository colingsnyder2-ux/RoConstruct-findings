// roc 2009-12 0095ee9e  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0095ee9e
//
// 0095ee9e  8b542408             mov edx, dword ptr [esp + 8]
// 0095eea2  8d02                 lea eax, [edx]
// 0095eea4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0095eea7  33c8                 xor ecx, eax
// 0095eea9  e8ec64e9ff           call 0x7f539a
// 0095eeae  b87cbdad00           mov eax, 0xadbd7c
// 0095eeb3  e96259e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
