// from server: 100% by auto
// roc 2011-06 007f2980  unit: RBX::AdvLuaDragTool  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2980
//
// 007f2980  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007f2984  56                   push esi
// 007f2985  8b742408             mov esi, dword ptr [esp + 8]
// 007f2989  8b460c               mov eax, dword ptr [esi + 0xc]
// 007f298c  8b4808               mov ecx, dword ptr [eax + 8]
// 007f298f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f2993  42                   inc edx
// 007f2994  c1e217               shl edx, 0x17
// 007f2997  c1e006               shl eax, 6
// 007f299a  0bd0                 or edx, eax
// 007f299c  51                   push ecx
// 007f299d  83ca1e               or edx, 0x1e
// 007f29a0  52                   push edx
// 007f29a1  e86afdffff           call 0x7f2710
// 007f29a6  83c408               add esp, 8
// 007f29a9  5e                   pop esi
// 007f29aa  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_ret)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
