// roc 2007-08 0073f7ee  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073f7ee
//
// 0073f7ee  8b542408             mov edx, dword ptr [esp + 8]
// 0073f7f2  8d02                 lea eax, [edx]
// 0073f7f4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073f7f7  33c8                 xor ecx, eax
// 0073f7f9  e82012efff           call 0x630a1e
// 0073f7fe  b828688400           mov eax, 0x846828
// 0073f803  e91012efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
