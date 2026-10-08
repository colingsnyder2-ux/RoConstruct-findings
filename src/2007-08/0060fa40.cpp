// from server: 100% by auto
// roc 2007-08 0060fa40  unit: RBX::Ball  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060fa40
//
// 0060fa40  53                   push ebx
// 0060fa41  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0060fa45  56                   push esi
// 0060fa46  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0060fa49  57                   push edi
// 0060fa4a  6afd                 push -3
// 0060fa4c  8d461c               lea eax, [esi + 0x1c]
// 0060fa4f  50                   push eax
// 0060fa50  53                   push ebx
// 0060fa51  c6461443             mov byte ptr [esi + 0x14], 0x43
// 0060fa55  e806feffff           call 0x60f860
// 0060fa5a  33ff                 xor edi, edi
// 0060fa5c  83c40c               add esp, 0xc
// 0060fa5f  397e08               cmp dword ptr [esi + 8], edi
// 0060fa62  7e19                 jle 0x60fa7d
// 0060fa64  8b0e                 mov ecx, dword ptr [esi]
// 0060fa66  6afd                 push -3
// 0060fa68  8d14b9               lea edx, [ecx + edi*4]
// 0060fa6b  52                   push edx
// 0060fa6c  53                   push ebx
// 0060fa6d  e8eefdffff           call 0x60f860
// 0060fa72  83c701               add edi, 1
// 0060fa75  83c40c               add esp, 0xc
// 0060fa78  3b7e08               cmp edi, dword ptr [esi + 8]
// 0060fa7b  7ce7                 jl 0x60fa64
// 0060fa7d  5f                   pop edi
// 0060fa7e  5e                   pop esi
// 0060fa7f  5b                   pop ebx
// 0060fa80  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_freeall)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
