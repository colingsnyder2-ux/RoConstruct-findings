// from server: 100% by auto
// roc 2011-06 007d6df0  unit: RBX::EquationDisplay  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d6df0
//
// 007d6df0  53                   push ebx
// 007d6df1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007d6df5  56                   push esi
// 007d6df6  8b7310               mov esi, dword ptr [ebx + 0x10]
// 007d6df9  57                   push edi
// 007d6dfa  6afd                 push -3
// 007d6dfc  8d461c               lea eax, [esi + 0x1c]
// 007d6dff  50                   push eax
// 007d6e00  53                   push ebx
// 007d6e01  c6461443             mov byte ptr [esi + 0x14], 0x43
// 007d6e05  e8f6fdffff           call 0x7d6c00
// 007d6e0a  33ff                 xor edi, edi
// 007d6e0c  83c40c               add esp, 0xc
// 007d6e0f  397e08               cmp dword ptr [esi + 8], edi
// 007d6e12  7e17                 jle 0x7d6e2b
// 007d6e14  8b0e                 mov ecx, dword ptr [esi]
// 007d6e16  6afd                 push -3
// 007d6e18  8d14b9               lea edx, [ecx + edi*4]
// 007d6e1b  52                   push edx
// 007d6e1c  53                   push ebx
// 007d6e1d  e8defdffff           call 0x7d6c00
// 007d6e22  47                   inc edi
// 007d6e23  83c40c               add esp, 0xc
// 007d6e26  3b7e08               cmp edi, dword ptr [esi + 8]
// 007d6e29  7ce9                 jl 0x7d6e14
// 007d6e2b  5f                   pop edi
// 007d6e2c  5e                   pop esi
// 007d6e2d  5b                   pop ebx
// 007d6e2e  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_freeall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
