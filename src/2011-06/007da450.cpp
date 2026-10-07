// roc 2011-06 007da450  unit: seg_007d0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da450
//
// 007da450  8b542404             mov edx, dword ptr [esp + 4]
// 007da454  837a6800             cmp dword ptr [edx + 0x68], 0
// 007da458  53                   push ebx
// 007da459  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007da45d  56                   push esi
// 007da45e  8d7268               lea esi, [edx + 0x68]
// 007da461  57                   push edi
// 007da462  8b7a10               mov edi, dword ptr [edx + 0x10]
// 007da465  7412                 je 0x7da479
// 007da467  8b06                 mov eax, dword ptr [esi]
// 007da469  8b4808               mov ecx, dword ptr [eax + 8]
// 007da46c  3bcb                 cmp ecx, ebx
// 007da46e  7209                 jb 0x7da479
// 007da470  7448                 je 0x7da4ba
// 007da472  833800               cmp dword ptr [eax], 0
// 007da475  8bf0                 mov esi, eax
// 007da477  75ee                 jne 0x7da467
// 007da479  6a20                 push 0x20
// 007da47b  6a00                 push 0
// 007da47d  6a00                 push 0
// 007da47f  52                   push edx
// 007da480  e8bb090000           call 0x7dae40
// 007da485  c640040a             mov byte ptr [eax + 4], 0xa
// 007da489  8a4f14               mov cl, byte ptr [edi + 0x14]
// 007da48c  895808               mov dword ptr [eax + 8], ebx
// 007da48f  83c410               add esp, 0x10
// 007da492  80e103               and cl, 3
// 007da495  884805               mov byte ptr [eax + 5], cl
// 007da498  8b16                 mov edx, dword ptr [esi]
// 007da49a  8910                 mov dword ptr [eax], edx
// 007da49c  8906                 mov dword ptr [esi], eax
// 007da49e  8d4f78               lea ecx, [edi + 0x78]
// 007da4a1  894810               mov dword ptr [eax + 0x10], ecx
// 007da4a4  8b8f8c000000         mov ecx, dword ptr [edi + 0x8c]
// 007da4aa  894814               mov dword ptr [eax + 0x14], ecx
// 007da4ad  894110               mov dword ptr [ecx + 0x10], eax
// 007da4b0  89878c000000         mov dword ptr [edi + 0x8c], eax
// 007da4b6  5f                   pop edi
// 007da4b7  5e                   pop esi
// 007da4b8  5b                   pop ebx
// 007da4b9  c3                   ret 
// 007da4ba  8a4805               mov cl, byte ptr [eax + 5]
// 007da4bd  0fb65f14             movzx ebx, byte ptr [edi + 0x14]
// 007da4c1  0fb6d1               movzx edx, cl
// 007da4c4  83e203               and edx, 3
// 007da4c7  f7d3                 not ebx
// 007da4c9  84d3                 test bl, dl
// 007da4cb  74e9                 je 0x7da4b6
// 007da4cd  5f                   pop edi
// 007da4ce  80f103               xor cl, 3
// 007da4d1  5e                   pop esi
// 007da4d2  884805               mov byte ptr [eax + 5], cl
// 007da4d5  5b                   pop ebx
// 007da4d6  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_findupval)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
