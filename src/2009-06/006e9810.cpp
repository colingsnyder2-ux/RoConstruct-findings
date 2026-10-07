// roc 2009-06 006e9810  unit: RBX::PartDropTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006e9810
//
// 006e9810  53                   push ebx
// 006e9811  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006e9815  56                   push esi
// 006e9816  8b7310               mov esi, dword ptr [ebx + 0x10]
// 006e9819  57                   push edi
// 006e981a  6afd                 push -3
// 006e981c  8d461c               lea eax, [esi + 0x1c]
// 006e981f  50                   push eax
// 006e9820  53                   push ebx
// 006e9821  c6461443             mov byte ptr [esi + 0x14], 0x43
// 006e9825  e806feffff           call 0x6e9630
// 006e982a  33ff                 xor edi, edi
// 006e982c  83c40c               add esp, 0xc
// 006e982f  397e08               cmp dword ptr [esi + 8], edi
// 006e9832  7e17                 jle 0x6e984b
// 006e9834  8b0e                 mov ecx, dword ptr [esi]
// 006e9836  6afd                 push -3
// 006e9838  8d14b9               lea edx, [ecx + edi*4]
// 006e983b  52                   push edx
// 006e983c  53                   push ebx
// 006e983d  e8eefdffff           call 0x6e9630
// 006e9842  47                   inc edi
// 006e9843  83c40c               add esp, 0xc
// 006e9846  3b7e08               cmp edi, dword ptr [esi + 8]
// 006e9849  7ce9                 jl 0x6e9834
// 006e984b  5f                   pop edi
// 006e984c  5e                   pop esi
// 006e984d  5b                   pop ebx
// 006e984e  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_freeall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
