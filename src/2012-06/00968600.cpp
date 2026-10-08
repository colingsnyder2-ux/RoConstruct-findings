// from server: 100% by auto
// roc 2012-06 00968600  unit: RBX::CellContact  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00968600
//
// 00968600  8b442408             mov eax, dword ptr [esp + 8]
// 00968604  83f80e               cmp eax, 0xe
// 00968607  7766                 ja 0x96866f
// 00968609  0fb68098869600       movzx eax, byte ptr [eax + 0x968698]
// 00968610  ff248584869600       jmp dword ptr [eax*4 + 0x968684]
// 00968617  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0096861b  8b542404             mov edx, dword ptr [esp + 4]
// 0096861f  51                   push ecx
// 00968620  52                   push edx
// 00968621  e89afbffff           call 0x9681c0
// 00968626  83c408               add esp, 8
// 00968629  c3                   ret 
// 0096862a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0096862e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00968632  e929fcffff           jmp 0x968260
// 00968637  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0096863b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0096863f  50                   push eax
// 00968640  51                   push ecx
// 00968641  e82af7ffff           call 0x967d70
// 00968646  83c408               add esp, 8
// 00968649  c3                   ret 
// 0096864a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0096864e  833805               cmp dword ptr [eax], 5
// 00968651  750d                 jne 0x968660
// 00968653  83c9ff               or ecx, 0xffffffff
// 00968656  394810               cmp dword ptr [eax + 0x10], ecx
// 00968659  7505                 jne 0x968660
// 0096865b  394814               cmp dword ptr [eax + 0x14], ecx
// 0096865e  7421                 je 0x968681
// 00968660  8b542404             mov edx, dword ptr [esp + 4]
// 00968664  50                   push eax
// 00968665  52                   push edx
// 00968666  e8f5f7ffff           call 0x967e60
// 0096866b  83c408               add esp, 8
// 0096866e  c3                   ret 
// 0096866f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00968673  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00968677  50                   push eax
// 00968678  51                   push ecx
// 00968679  e8e2f7ffff           call 0x967e60
// 0096867e  83c408               add esp, 8
// 00968681  c3                   ret 
// 00968682  8bff                 mov edi, edi
// 00968684  4a                   dec edx
// 00968685  869600378696         xchg byte ptr [esi - 0x6979c900], dl
// 0096868b  0017                 add byte ptr [edi], dl
// 0096868d  8696002a8696         xchg byte ptr [esi - 0x6979d600], dl
// 00968693  006f86               add byte ptr [edi - 0x7a], ch
// 00968696  96                   xchg esi, eax
// 00968697  0000                 add byte ptr [eax], al
// 00968699  0000                 add byte ptr [eax], al
// 0096869b  0000                 add byte ptr [eax], al
// 0096869d  0001                 add byte ptr [ecx], al
// 0096869f  0404                 add al, 4
// 009686a1  0404                 add al, 4
// 009686a3  0404                 add al, 4
// 009686a5  0203                 add al, byte ptr [ebx]
// library lua-5.1.4/lcode.c (function _luaK_infix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
