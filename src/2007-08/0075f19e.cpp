// roc 2007-08 0075f19e  unit: seg_00750000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0075f19e
//
// 0075f19e  8b542408             mov edx, dword ptr [esp + 8]
// 0075f1a2  8d02                 lea eax, [edx]
// 0075f1a4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0075f1a7  33c8                 xor ecx, eax
// 0075f1a9  e87018edff           call 0x630a1e
// 0075f1ae  b818b48600           mov eax, 0x86b418
// 0075f1b3  e96018edff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
