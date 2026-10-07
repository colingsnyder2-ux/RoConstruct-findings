// roc 2009-06 008740ee  unit: seg_00870000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 008740ee
//
// 008740ee  8b542408             mov edx, dword ptr [esp + 8]
// 008740f2  8d02                 lea eax, [edx]
// 008740f4  8b4afc               mov ecx, dword ptr [edx - 4]
// 008740f7  33c8                 xor ecx, eax
// 008740f9  e87c64eaff           call 0x71a57a
// 008740fe  b838229b00           mov eax, 0x9b2238
// 00874103  e9e458eaff           jmp 0x7199ec
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
