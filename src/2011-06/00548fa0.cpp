// from server: 100% by auto
// roc 2011-06 00548fa0  unit: G3D::TextInput::TokenException  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00548fa0
//
// 00548fa0  51                   push ecx
// 00548fa1  56                   push esi
// 00548fa2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00548fa6  6a01                 push 1
// 00548fa8  6a00                 push 0
// 00548faa  8d44240c             lea eax, [esp + 0xc]
// 00548fae  50                   push eax
// 00548faf  8bce                 mov ecx, esi
// 00548fb1  c64424102a           mov byte ptr [esp + 0x10], 0x2a
// 00548fb6  ff155805a400         call dword ptr [0xa40558]
// 00548fbc  8b0d2c04a400         mov ecx, dword ptr [0xa4042c]
// 00548fc2  3b01                 cmp eax, dword ptr [ecx]
// 00548fc4  7525                 jne 0x548feb
// 00548fc6  6a01                 push 1
// 00548fc8  6a00                 push 0
// 00548fca  8d54240c             lea edx, [esp + 0xc]
// 00548fce  52                   push edx
// 00548fcf  8bce                 mov ecx, esi
// 00548fd1  c64424103f           mov byte ptr [esp + 0x10], 0x3f
// 00548fd6  ff155805a400         call dword ptr [0xa40558]
// 00548fdc  8b0d2c04a400         mov ecx, dword ptr [0xa4042c]
// 00548fe2  3b01                 cmp eax, dword ptr [ecx]
// 00548fe4  7505                 jne 0x548feb
// 00548fe6  33c0                 xor eax, eax
// 00548fe8  5e                   pop esi
// 00548fe9  59                   pop ecx
// 00548fea  c3                   ret 
// 00548feb  b801000000           mov eax, 1
// 00548ff0  5e                   pop esi
// 00548ff1  59                   pop ecx
// 00548ff2  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?filenameContainsWildcards@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
