// from server: 100% by auto
// roc 2010-06 0077aab0  unit: RBX::PartDropTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077aab0
//
// 0077aab0  53                   push ebx
// 0077aab1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0077aab5  56                   push esi
// 0077aab6  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0077aab9  57                   push edi
// 0077aaba  6afd                 push -3
// 0077aabc  8d461c               lea eax, [esi + 0x1c]
// 0077aabf  50                   push eax
// 0077aac0  53                   push ebx
// 0077aac1  c6461443             mov byte ptr [esi + 0x14], 0x43
// 0077aac5  e806feffff           call 0x77a8d0
// 0077aaca  33ff                 xor edi, edi
// 0077aacc  83c40c               add esp, 0xc
// 0077aacf  397e08               cmp dword ptr [esi + 8], edi
// 0077aad2  7e17                 jle 0x77aaeb
// 0077aad4  8b0e                 mov ecx, dword ptr [esi]
// 0077aad6  6afd                 push -3
// 0077aad8  8d14b9               lea edx, [ecx + edi*4]
// 0077aadb  52                   push edx
// 0077aadc  53                   push ebx
// 0077aadd  e8eefdffff           call 0x77a8d0
// 0077aae2  47                   inc edi
// 0077aae3  83c40c               add esp, 0xc
// 0077aae6  3b7e08               cmp edi, dword ptr [esi + 8]
// 0077aae9  7ce9                 jl 0x77aad4
// 0077aaeb  5f                   pop edi
// 0077aaec  5e                   pop esi
// 0077aaed  5b                   pop ebx
// 0077aaee  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_freeall)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
