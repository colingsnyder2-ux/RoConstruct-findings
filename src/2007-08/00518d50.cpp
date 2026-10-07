// roc 2007-08 00518d50  unit: seg_00510000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518d50
//
// 00518d50  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00518d54  85d2                 test edx, edx
// 00518d56  8b442404             mov eax, dword ptr [esp + 4]
// 00518d5a  750f                 jne 0x518d6b
// 00518d5c  68482d7a00           push 0x7a2d48
// 00518d61  50                   push eax
// 00518d62  e8295c0000           call 0x51e990
// 00518d67  83c408               add esp, 8
// 00518d6a  c3                   ret 
// 00518d6b  81487080000000       or dword ptr [eax + 0x70], 0x80
// 00518d72  dd442414             fld qword ptr [esp + 0x14]
// 00518d76  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00518d7a  56                   push esi
// 00518d7b  8b7070               mov esi, dword ptr [eax + 0x70]
// 00518d7e  57                   push edi
// 00518d7f  8b39                 mov edi, dword ptr [ecx]
// 00518d81  89b838010000         mov dword ptr [eax + 0x138], edi
// 00518d87  8b7904               mov edi, dword ptr [ecx + 4]
// 00518d8a  89b83c010000         mov dword ptr [eax + 0x13c], edi
// 00518d90  668b7908             mov di, word ptr [ecx + 8]
// 00518d94  d99834010000         fstp dword ptr [eax + 0x134]
// 00518d9a  6689b840010000       mov word ptr [eax + 0x140], di
// 00518da1  889030010000         mov byte ptr [eax + 0x130], dl
// 00518da7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00518dab  8bfa                 mov edi, edx
// 00518dad  f7df                 neg edi
// 00518daf  1bff                 sbb edi, edi
// 00518db1  81e700010000         and edi, 0x100
// 00518db7  0bfe                 or edi, esi
// 00518db9  85d2                 test edx, edx
// 00518dbb  897870               mov dword ptr [eax + 0x70], edi
// 00518dbe  5f                   pop edi
// 00518dbf  5e                   pop esi
// 00518dc0  740a                 je 0x518dcc
// 00518dc2  f6802601000002       test byte ptr [eax + 0x126], 2
// 00518dc9  7411                 je 0x518ddc
// 00518dcb  c3                   ret 
// 00518dcc  0fb75102             movzx edx, word ptr [ecx + 2]
// 00518dd0  663b5104             cmp dx, word ptr [ecx + 4]
// 00518dd4  750d                 jne 0x518de3
// 00518dd6  663b5106             cmp dx, word ptr [ecx + 6]
// 00518dda  7507                 jne 0x518de3
// 00518ddc  81486800080000       or dword ptr [eax + 0x68], 0x800
// 00518de3  c3                   ret 
// library libpng-1.2.5/pngrtran.c (function _png_set_background)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
