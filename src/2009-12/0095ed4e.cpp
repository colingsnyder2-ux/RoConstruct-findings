// roc 2009-12 0095ed4e  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0095ed4e
//
// 0095ed4e  8b542408             mov edx, dword ptr [esp + 8]
// 0095ed52  8d02                 lea eax, [edx]
// 0095ed54  8b4afc               mov ecx, dword ptr [edx - 4]
// 0095ed57  33c8                 xor ecx, eax
// 0095ed59  e83c66e9ff           call 0x7f539a
// 0095ed5e  b840bcad00           mov eax, 0xadbc40
// 0095ed63  e9b25ae9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
