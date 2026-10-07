// roc 2007-08 0073ff29  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073ff29
//
// 0073ff29  8b542408             mov edx, dword ptr [esp + 8]
// 0073ff2d  8d02                 lea eax, [edx]
// 0073ff2f  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073ff32  33c8                 xor ecx, eax
// 0073ff34  e8e50aefff           call 0x630a1e
// 0073ff39  b8806f8400           mov eax, 0x846f80
// 0073ff3e  e9d50aefff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
