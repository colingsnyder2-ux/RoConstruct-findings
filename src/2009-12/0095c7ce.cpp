// roc 2009-12 0095c7ce  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0095c7ce
//
// 0095c7ce  8b542408             mov edx, dword ptr [esp + 8]
// 0095c7d2  8d02                 lea eax, [edx]
// 0095c7d4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0095c7d7  33c8                 xor ecx, eax
// 0095c7d9  e8bc8be9ff           call 0x7f539a
// 0095c7de  b8c09aad00           mov eax, 0xad9ac0
// 0095c7e3  e93280e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
