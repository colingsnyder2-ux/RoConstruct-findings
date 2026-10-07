// roc 2012-06 00adfade  unit: seg_00ad0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00adfade
//
// 00adfade  8b542408             mov edx, dword ptr [esp + 8]
// 00adfae2  8d02                 lea eax, [edx]
// 00adfae4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00adfae7  33c8                 xor ecx, eax
// 00adfae9  e8493feaff           call 0x983a37
// 00adfaee  b86c84d300           mov eax, 0xd3846c
// 00adfaf3  e9ee35eaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
