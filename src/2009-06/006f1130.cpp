// roc 2009-06 006f1130  unit: seg_006f0000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f1130
//
// 006f1130  56                   push esi
// 006f1131  8b733c               mov esi, dword ptr [ebx + 0x3c]
// 006f1134  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f1137  8b4608               mov eax, dword ptr [esi + 8]
// 006f113a  41                   inc ecx
// 006f113b  3bc8                 cmp ecx, eax
// 006f113d  764b                 jbe 0x6f118a
// 006f113f  3dfeffff7f           cmp eax, 0x7ffffffe
// 006f1144  7210                 jb 0x6f1156
// 006f1146  6a00                 push 0
// 006f1148  68c0e18e00           push 0x8ee1c0
// 006f114d  53                   push ebx
// 006f114e  e8fd000000           call 0x6f1250
// 006f1153  83c40c               add esp, 0xc
// 006f1156  8b4608               mov eax, dword ptr [esi + 8]
// 006f1159  57                   push edi
// 006f115a  8d3c00               lea edi, [eax + eax]
// 006f115d  8d5701               lea edx, [edi + 1]
// 006f1160  83fafd               cmp edx, -3
// 006f1163  7713                 ja 0x6f1178
// 006f1165  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006f1168  57                   push edi
// 006f1169  50                   push eax
// 006f116a  8b06                 mov eax, dword ptr [esi]
// 006f116c  50                   push eax
// 006f116d  51                   push ecx
// 006f116e  e8edc5ffff           call 0x6ed760
// 006f1173  83c410               add esp, 0x10
// 006f1176  eb0c                 jmp 0x6f1184
// 006f1178  8b5334               mov edx, dword ptr [ebx + 0x34]
// 006f117b  52                   push edx
// 006f117c  e8bfc5ffff           call 0x6ed740
// 006f1181  83c404               add esp, 4
// 006f1184  897e08               mov dword ptr [esi + 8], edi
// 006f1187  8906                 mov dword ptr [esi], eax
// 006f1189  5f                   pop edi
// 006f118a  8b4604               mov eax, dword ptr [esi + 4]
// 006f118d  8b0e                 mov ecx, dword ptr [esi]
// 006f118f  8a542408             mov dl, byte ptr [esp + 8]
// 006f1193  881408               mov byte ptr [eax + ecx], dl
// 006f1196  ff4604               inc dword ptr [esi + 4]
// 006f1199  5e                   pop esi
// 006f119a  c3                   ret 
// library lua-5.1.4/llex.c (function _save)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
