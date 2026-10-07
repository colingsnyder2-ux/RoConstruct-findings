// roc 2007-08 0073d7be  unit: seg_00730000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0073d7be
//
// 0073d7be  8b542408             mov edx, dword ptr [esp + 8]
// 0073d7c2  8d02                 lea eax, [edx]
// 0073d7c4  8b4afc               mov ecx, dword ptr [edx - 4]
// 0073d7c7  33c8                 xor ecx, eax
// 0073d7c9  e85032efff           call 0x630a1e
// 0073d7ce  b8e4478400           mov eax, 0x8447e4
// 0073d7d3  e94032efff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
