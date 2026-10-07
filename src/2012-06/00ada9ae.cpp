// roc 2012-06 00ada9ae  unit: seg_00ad0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ada9ae
//
// 00ada9ae  8b542408             mov edx, dword ptr [esp + 8]
// 00ada9b2  8d02                 lea eax, [edx]
// 00ada9b4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ada9b7  33c8                 xor ecx, eax
// 00ada9b9  e87990eaff           call 0x983a37
// 00ada9be  b8e02ed300           mov eax, 0xd32ee0
// 00ada9c3  e91e87eaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
