// roc 2007-08 0075dcee  unit: seg_00750000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0075dcee
//
// 0075dcee  8b542408             mov edx, dword ptr [esp + 8]
// 0075dcf2  8d02                 lea eax, [edx]
// 0075dcf4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0075dcf7  33c8                 xor ecx, eax
// 0075dcf9  e8202dedff           call 0x630a1e
// 0075dcfe  b854a08600           mov eax, 0x86a054
// 0075dd03  e9102dedff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
