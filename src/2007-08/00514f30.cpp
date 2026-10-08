// from server: 100% by auto
// roc 2007-08 00514f30  unit: G3D::_internal::DialogTemplate  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514f30
//
// 00514f30  817c240820010000     cmp dword ptr [esp + 8], 0x120
// 00514f38  56                   push esi
// 00514f39  8b742408             mov esi, dword ptr [esp + 8]
// 00514f3d  8b06                 mov eax, dword ptr [esi]
// 00514f3f  7312                 jae 0x514f53
// 00514f41  50                   push eax
// 00514f42  e8199d0000           call 0x51ec60
// 00514f47  6a02                 push 2
// 00514f49  e8f29c0000           call 0x51ec40
// 00514f4e  83c408               add esp, 8
// 00514f51  8906                 mov dword ptr [esi], eax
// 00514f53  6820010000           push 0x120
// 00514f58  6a00                 push 0
// 00514f5a  50                   push eax
// 00514f5b  e82cbc1100           call 0x630b8c
// 00514f60  83c40c               add esp, 0xc
// 00514f63  5e                   pop esi
// 00514f64  c3                   ret 
// library libpng-1.2.5/png.c (function _png_info_init_3)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
