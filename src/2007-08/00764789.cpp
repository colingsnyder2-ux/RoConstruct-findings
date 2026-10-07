// roc 2007-08 00764789  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00764789
//
// 00764789  8b542408             mov edx, dword ptr [esp + 8]
// 0076478d  8d02                 lea eax, [edx]
// 0076478f  8b4afc               mov ecx, dword ptr [edx - 4]
// 00764792  33c8                 xor ecx, eax
// 00764794  e885c2ecff           call 0x630a1e
// 00764799  b8d4068700           mov eax, 0x8706d4
// 0076479e  e975c2ecff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
