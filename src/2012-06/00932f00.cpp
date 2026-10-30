// from server: 100% by auto
// roc 2012-06 00932f00  unit: RBX::BallCellContact  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00932f00
//
// 00932f00  53                   push ebx
// 00932f01  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00932f05  56                   push esi
// 00932f06  8b7310               mov esi, dword ptr [ebx + 0x10]
// 00932f09  57                   push edi
// 00932f0a  6afd                 push -3
// 00932f0c  8d461c               lea eax, [esi + 0x1c]
// 00932f0f  50                   push eax
// 00932f10  53                   push ebx
// 00932f11  c6461443             mov byte ptr [esi + 0x14], 0x43
// 00932f15  e8e6fdffff           call 0x932d00
// 00932f1a  33ff                 xor edi, edi
// 00932f1c  83c40c               add esp, 0xc
// 00932f1f  397e08               cmp dword ptr [esi + 8], edi
// 00932f22  7e17                 jle 0x932f3b
// 00932f24  8b0e                 mov ecx, dword ptr [esi]
// 00932f26  6afd                 push -3
// 00932f28  8d14b9               lea edx, [ecx + edi*4]
// 00932f2b  52                   push edx
// 00932f2c  53                   push ebx
// 00932f2d  e8cefdffff           call 0x932d00
// 00932f32  47                   inc edi
// 00932f33  83c40c               add esp, 0xc
// 00932f36  3b7e08               cmp edi, dword ptr [esi + 8]
// 00932f39  7ce9                 jl 0x932f24
// 00932f3b  5f                   pop edi
// 00932f3c  5e                   pop esi
// 00932f3d  5b                   pop ebx
// 00932f3e  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_freeall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
