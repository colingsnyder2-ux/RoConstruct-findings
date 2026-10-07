// roc 2009-06 0087abee  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0087abee
//
// 0087abee  8b542408             mov edx, dword ptr [esp + 8]
// 0087abf2  8d02                 lea eax, [edx]
// 0087abf4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0087abf7  33c8                 xor ecx, eax
// 0087abf9  e87cf9e9ff           call 0x71a57a
// 0087abfe  b854889b00           mov eax, 0x9b8854
// 0087ac03  e9e4ede9ff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
