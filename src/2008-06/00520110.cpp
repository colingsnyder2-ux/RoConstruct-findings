// from server: 100% by auto
// roc 2008-06 00520110  unit: seg_00520000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00520110
//
// 00520110  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00520114  8b442404             mov eax, dword ptr [esp + 4]
// 00520118  85d2                 test edx, edx
// 0052011a  750f                 jne 0x52012b
// 0052011c  6810ac8200           push 0x82ac10
// 00520121  50                   push eax
// 00520122  e829990000           call 0x529a50
// 00520127  83c408               add esp, 8
// 0052012a  c3                   ret 
// 0052012b  81487080000000       or dword ptr [eax + 0x70], 0x80
// 00520132  dd442414             fld qword ptr [esp + 0x14]
// 00520136  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052013a  56                   push esi
// 0052013b  8b7070               mov esi, dword ptr [eax + 0x70]
// 0052013e  57                   push edi
// 0052013f  8b39                 mov edi, dword ptr [ecx]
// 00520141  89b838010000         mov dword ptr [eax + 0x138], edi
// 00520147  8b7904               mov edi, dword ptr [ecx + 4]
// 0052014a  89b83c010000         mov dword ptr [eax + 0x13c], edi
// 00520150  668b7908             mov di, word ptr [ecx + 8]
// 00520154  d99834010000         fstp dword ptr [eax + 0x134]
// 0052015a  6689b840010000       mov word ptr [eax + 0x140], di
// 00520161  889030010000         mov byte ptr [eax + 0x130], dl
// 00520167  8b542418             mov edx, dword ptr [esp + 0x18]
// 0052016b  8bfa                 mov edi, edx
// 0052016d  f7df                 neg edi
// 0052016f  1bff                 sbb edi, edi
// 00520171  81e700010000         and edi, 0x100
// 00520177  0bfe                 or edi, esi
// 00520179  897870               mov dword ptr [eax + 0x70], edi
// 0052017c  5f                   pop edi
// 0052017d  5e                   pop esi
// 0052017e  85d2                 test edx, edx
// 00520180  740a                 je 0x52018c
// 00520182  f6802601000002       test byte ptr [eax + 0x126], 2
// 00520189  7411                 je 0x52019c
// 0052018b  c3                   ret 
// 0052018c  0fb75102             movzx edx, word ptr [ecx + 2]
// 00520190  663b5104             cmp dx, word ptr [ecx + 4]
// 00520194  750d                 jne 0x5201a3
// 00520196  663b5106             cmp dx, word ptr [ecx + 6]
// 0052019a  7507                 jne 0x5201a3
// 0052019c  81486800080000       or dword ptr [eax + 0x68], 0x800
// 005201a3  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_background)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
