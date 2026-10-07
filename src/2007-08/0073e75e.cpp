// roc 2007-08 0073e75e  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073e75e
//
// 0073e75e  8b542408             mov edx, dword ptr [esp + 8]
// 0073e762  8d02                 lea eax, [edx]
// 0073e764  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073e767  33c8                 xor ecx, eax
// 0073e769  e8b022efff           call 0x630a1e
// 0073e76e  b814568400           mov eax, 0x845614
// 0073e773  e9a022efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
