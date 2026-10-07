// roc 2007-08 0076126e  unit: seg_00760000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076126e
//
// 0076126e  8b542408             mov edx, dword ptr [esp + 8]
// 00761272  8d02                 lea eax, [edx]
// 00761274  8b4afc               mov ecx, dword ptr [edx - 4]
// 00761277  33c8                 xor ecx, eax
// 00761279  e8a0f7ecff           call 0x630a1e
// 0076127e  b864d58600           mov eax, 0x86d564
// 00761283  e990f7ecff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
