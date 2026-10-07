// roc 2007-08 0073e72e  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073e72e
//
// 0073e72e  8b542408             mov edx, dword ptr [esp + 8]
// 0073e732  8d02                 lea eax, [edx]
// 0073e734  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073e737  33c8                 xor ecx, eax
// 0073e739  e8e022efff           call 0x630a1e
// 0073e73e  b8e8558400           mov eax, 0x8455e8
// 0073e743  e9d022efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
