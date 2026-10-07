// roc 2007-08 0074ec1e  unit: seg_00740000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0074ec1e
//
// 0074ec1e  8b542408             mov edx, dword ptr [esp + 8]
// 0074ec22  8d02                 lea eax, [edx]
// 0074ec24  8b4afc               mov ecx, dword ptr [edx - 4]
// 0074ec27  33c8                 xor ecx, eax
// 0074ec29  e8f01deeff           call 0x630a1e
// 0074ec2e  b81c5a8500           mov eax, 0x855a1c
// 0074ec33  e9e01deeff           jmp 0x630a18
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
