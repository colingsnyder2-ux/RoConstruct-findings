// from server: 100% by auto
// roc 2008-06 0065bfe0  unit: RBX::BallBallContact  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065bfe0
//
// 0065bfe0  53                   push ebx
// 0065bfe1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0065bfe5  56                   push esi
// 0065bfe6  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0065bfe9  57                   push edi
// 0065bfea  6afd                 push -3
// 0065bfec  8d461c               lea eax, [esi + 0x1c]
// 0065bfef  50                   push eax
// 0065bff0  53                   push ebx
// 0065bff1  c6461443             mov byte ptr [esi + 0x14], 0x43
// 0065bff5  e806feffff           call 0x65be00
// 0065bffa  33ff                 xor edi, edi
// 0065bffc  83c40c               add esp, 0xc
// 0065bfff  397e08               cmp dword ptr [esi + 8], edi
// 0065c002  7e17                 jle 0x65c01b
// 0065c004  8b0e                 mov ecx, dword ptr [esi]
// 0065c006  6afd                 push -3
// 0065c008  8d14b9               lea edx, [ecx + edi*4]
// 0065c00b  52                   push edx
// 0065c00c  53                   push ebx
// 0065c00d  e8eefdffff           call 0x65be00
// 0065c012  47                   inc edi
// 0065c013  83c40c               add esp, 0xc
// 0065c016  3b7e08               cmp edi, dword ptr [esi + 8]
// 0065c019  7ce9                 jl 0x65c004
// 0065c01b  5f                   pop edi
// 0065c01c  5e                   pop esi
// 0065c01d  5b                   pop ebx
// 0065c01e  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_freeall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
