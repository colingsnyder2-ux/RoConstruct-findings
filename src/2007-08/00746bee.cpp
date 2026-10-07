// roc 2007-08 00746bee  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00746bee
//
// 00746bee  8b542408             mov edx, dword ptr [esp + 8]
// 00746bf2  8d02                 lea eax, [edx]
// 00746bf4  8b4afc               mov ecx, dword ptr [edx - 4]
// 00746bf7  33c8                 xor ecx, eax
// 00746bf9  e8209eeeff           call 0x630a1e
// 00746bfe  b878d08400           mov eax, 0x84d078
// 00746c03  e9109eeeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
