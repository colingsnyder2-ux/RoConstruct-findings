// roc 2009-12 0095ee6e  unit: seg_00950000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0095ee6e
//
// 0095ee6e  8b542408             mov edx, dword ptr [esp + 8]
// 0095ee72  8d02                 lea eax, [edx]
// 0095ee74  8b4afc               mov ecx, dword ptr [edx - 4]
// 0095ee77  33c8                 xor ecx, eax
// 0095ee79  e81c65e9ff           call 0x7f539a
// 0095ee7e  b850bdad00           mov eax, 0xadbd50
// 0095ee83  e99259e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
