// roc 2009-06 00881ade  unit: seg_00880000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00881ade
//
// 00881ade  8b542408             mov edx, dword ptr [esp + 8]
// 00881ae2  8d02                 lea eax, [edx]
// 00881ae4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00881ae7  33c8                 xor ecx, eax
// 00881ae9  e88c8ae9ff           call 0x71a57a
// 00881aee  b868eb9b00           mov eax, 0x9beb68
// 00881af3  e9f47ee9ff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
