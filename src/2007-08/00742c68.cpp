// roc 2007-08 00742c68  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00742c68
//
// 00742c68  8b542408             mov edx, dword ptr [esp + 8]
// 00742c6c  8d02                 lea eax, [edx]
// 00742c6e  8b4afc               mov ecx, dword ptr [edx - 4]
// 00742c71  33c8                 xor ecx, eax
// 00742c73  e8a6ddeeff           call 0x630a1e
// 00742c78  b8409c8400           mov eax, 0x849c40
// 00742c7d  e996ddeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
