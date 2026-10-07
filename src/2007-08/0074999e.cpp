// roc 2007-08 0074999e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074999e
//
// 0074999e  8b542408             mov edx, dword ptr [esp + 8]
// 007499a2  8d02                 lea eax, [edx]
// 007499a4  8b4afc               mov ecx, dword ptr [edx - 4]
// 007499a7  33c8                 xor ecx, eax
// 007499a9  e87070eeff           call 0x630a1e
// 007499ae  b8b0038500           mov eax, 0x8503b0
// 007499b3  e96070eeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
