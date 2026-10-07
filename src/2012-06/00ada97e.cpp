// roc 2012-06 00ada97e  unit: seg_00ad0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ada97e
//
// 00ada97e  8b542408             mov edx, dword ptr [esp + 8]
// 00ada982  8d02                 lea eax, [edx]
// 00ada984  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ada987  33c8                 xor ecx, eax
// 00ada989  e8a990eaff           call 0x983a37
// 00ada98e  b8b42ed300           mov eax, 0xd32eb4
// 00ada993  e94e87eaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
