// roc 2009-06 008745ce  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008745ce
//
// 008745ce  8b542408             mov edx, dword ptr [esp + 8]
// 008745d2  8d02                 lea eax, [edx]
// 008745d4  8b4afc               mov ecx, dword ptr [edx - 4]
// 008745d7  33c8                 xor ecx, eax
// 008745d9  e89c5feaff           call 0x71a57a
// 008745de  b8f4279b00           mov eax, 0x9b27f4
// 008745e3  e90454eaff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
