// roc 2012-06 00ae28c9  unit: seg_00ae0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00ae28c9
//
// 00ae28c9  8b542408             mov edx, dword ptr [esp + 8]
// 00ae28cd  8d02                 lea eax, [edx]
// 00ae28cf  8b4afc               mov ecx, dword ptr [edx - 4]
// 00ae28d2  33c8                 xor ecx, eax
// 00ae28d4  e85e11eaff           call 0x983a37
// 00ae28d9  b8b4afd300           mov eax, 0xd3afb4
// 00ae28de  e90308eaff           jmp 0x9830e6
// library g3d-6.09/G3Dcpp\System.cpp (function __ehhandler$?build@System@G3D@@SAABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/System.cpp
