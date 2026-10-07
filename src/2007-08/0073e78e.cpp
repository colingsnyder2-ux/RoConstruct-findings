// roc 2007-08 0073e78e  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073e78e
//
// 0073e78e  8b542408             mov edx, dword ptr [esp + 8]
// 0073e792  8d02                 lea eax, [edx]
// 0073e794  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073e797  33c8                 xor ecx, eax
// 0073e799  e88022efff           call 0x630a1e
// 0073e79e  b840568400           mov eax, 0x845640
// 0073e7a3  e97022efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
