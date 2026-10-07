// roc 2007-08 007637fe  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007637fe
//
// 007637fe  8b542408             mov edx, dword ptr [esp + 8]
// 00763802  8d02                 lea eax, [edx]
// 00763804  8b4afc               mov ecx, dword ptr [edx - 4]
// 00763807  33c8                 xor ecx, eax
// 00763809  e810d2ecff           call 0x630a1e
// 0076380e  b8e0f68600           mov eax, 0x86f6e0
// 00763813  e900d2ecff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
