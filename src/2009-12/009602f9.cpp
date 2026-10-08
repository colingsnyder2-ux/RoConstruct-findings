// roc 2009-12 009602f9  unit: seg_00960000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 009602f9
//
// 009602f9  8b542408             mov edx, dword ptr [esp + 8]
// 009602fd  8d02                 lea eax, [edx]
// 009602ff  8b4afc               mov ecx, dword ptr [edx - 4]
// 00960302  33c8                 xor ecx, eax
// 00960304  e89150e9ff           call 0x7f539a
// 00960309  b8f4d1ad00           mov eax, 0xadd1f4
// 0096030e  e90745e9ff           jmp 0x7f481a
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
