// roc 2009-06 0087cfa9  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0087cfa9
//
// 0087cfa9  8b542408             mov edx, dword ptr [esp + 8]
// 0087cfad  8d02                 lea eax, [edx]
// 0087cfaf  8b4afc               mov ecx, dword ptr [edx - 4]
// 0087cfb2  33c8                 xor ecx, eax
// 0087cfb4  e8c1d5e9ff           call 0x71a57a
// 0087cfb9  b848a99b00           mov eax, 0x9ba948
// 0087cfbe  e929cae9ff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
