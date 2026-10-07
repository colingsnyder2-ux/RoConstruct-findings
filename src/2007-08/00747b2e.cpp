// roc 2007-08 00747b2e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00747b2e
//
// 00747b2e  8b542408             mov edx, dword ptr [esp + 8]
// 00747b32  8d02                 lea eax, [edx]
// 00747b34  8b4afc               mov ecx, dword ptr [edx - 4]
// 00747b37  33c8                 xor ecx, eax
// 00747b39  e8e08eeeff           call 0x630a1e
// 00747b3e  b880e28400           mov eax, 0x84e280
// 00747b43  e9d08eeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
