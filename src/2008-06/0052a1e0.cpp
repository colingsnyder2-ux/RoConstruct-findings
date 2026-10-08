// from server: 100% by auto
// roc 2008-06 0052a1e0  unit: seg_00520000  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a1e0
//
// 0052a1e0  56                   push esi
// 0052a1e1  8b742408             mov esi, dword ptr [esp + 8]
// 0052a1e5  85f6                 test esi, esi
// 0052a1e7  0f8449010000         je 0x52a336
// 0052a1ed  f7467000001000       test dword ptr [esi + 0x70], 0x100000
// 0052a1f4  741c                 je 0x52a212
// 0052a1f6  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0052a1f9  85c0                 test eax, eax
// 0052a1fb  7415                 je 0x52a212
// 0052a1fd  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052a203  41                   inc ecx
// 0052a204  51                   push ecx
// 0052a205  8d9600010000         lea edx, [esi + 0x100]
// 0052a20b  52                   push edx
// 0052a20c  56                   push esi
// 0052a20d  ffd0                 call eax
// 0052a20f  83c40c               add esp, 0xc
// 0052a212  f7467000800000       test dword ptr [esi + 0x70], 0x8000
// 0052a219  741b                 je 0x52a236
// 0052a21b  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0052a21e  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052a224  50                   push eax
// 0052a225  41                   inc ecx
// 0052a226  51                   push ecx
// 0052a227  8d9600010000         lea edx, [esi + 0x100]
// 0052a22d  52                   push edx
// 0052a22e  e8bd5bffff           call 0x51fdf0
// 0052a233  83c40c               add esp, 0xc
// 0052a236  f7467000000100       test dword ptr [esi + 0x70], 0x10000
// 0052a23d  7417                 je 0x52a256
// 0052a23f  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0052a245  40                   inc eax
// 0052a246  50                   push eax
// 0052a247  8d8e00010000         lea ecx, [esi + 0x100]
// 0052a24d  51                   push ecx
// 0052a24e  e84d5bffff           call 0x51fda0
// 0052a253  83c408               add esp, 8
// 0052a256  f6467004             test byte ptr [esi + 0x70], 4
// 0052a25a  741f                 je 0x52a27b
// 0052a25c  0fb69627010000       movzx edx, byte ptr [esi + 0x127]
// 0052a263  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0052a269  52                   push edx
// 0052a26a  40                   inc eax
// 0052a26b  50                   push eax
// 0052a26c  8d8e00010000         lea ecx, [esi + 0x100]
// 0052a272  51                   push ecx
// 0052a273  e888f8ffff           call 0x529b00
// 0052a278  83c40c               add esp, 0xc
// 0052a27b  f6467010             test byte ptr [esi + 0x70], 0x10
// 0052a27f  7417                 je 0x52a298
// 0052a281  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0052a287  42                   inc edx
// 0052a288  52                   push edx
// 0052a289  8d8600010000         lea eax, [esi + 0x100]
// 0052a28f  50                   push eax
// 0052a290  e8cb5affff           call 0x51fd60
// 0052a295  83c408               add esp, 8
// 0052a298  f6467008             test byte ptr [esi + 0x70], 8
// 0052a29c  741e                 je 0x52a2bc
// 0052a29e  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0052a2a4  8d8e81010000         lea ecx, [esi + 0x181]
// 0052a2aa  51                   push ecx
// 0052a2ab  42                   inc edx
// 0052a2ac  52                   push edx
// 0052a2ad  8d8600010000         lea eax, [esi + 0x100]
// 0052a2b3  50                   push eax
// 0052a2b4  e877f9ffff           call 0x529c30
// 0052a2b9  83c40c               add esp, 0xc
// 0052a2bc  f7467000000800       test dword ptr [esi + 0x70], 0x80000
// 0052a2c3  7417                 je 0x52a2dc
// 0052a2c5  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052a2cb  41                   inc ecx
// 0052a2cc  51                   push ecx
// 0052a2cd  8d9600010000         lea edx, [esi + 0x100]
// 0052a2d3  52                   push edx
// 0052a2d4  e817fdffff           call 0x529ff0
// 0052a2d9  83c408               add esp, 8
// 0052a2dc  f7467000000200       test dword ptr [esi + 0x70], 0x20000
// 0052a2e3  7417                 je 0x52a2fc
// 0052a2e5  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0052a2eb  40                   inc eax
// 0052a2ec  50                   push eax
// 0052a2ed  8d8e00010000         lea ecx, [esi + 0x100]
// 0052a2f3  51                   push ecx
// 0052a2f4  e8d7fbffff           call 0x529ed0
// 0052a2f9  83c408               add esp, 8
// 0052a2fc  f6467001             test byte ptr [esi + 0x70], 1
// 0052a300  7417                 je 0x52a319
// 0052a302  8b96ec000000         mov edx, dword ptr [esi + 0xec]
// 0052a308  42                   inc edx
// 0052a309  52                   push edx
// 0052a30a  8d8600010000         lea eax, [esi + 0x100]
// 0052a310  50                   push eax
// 0052a311  e81a5dffff           call 0x520030
// 0052a316  83c408               add esp, 8
// 0052a319  f6467020             test byte ptr [esi + 0x70], 0x20
// 0052a31d  7417                 je 0x52a336
// 0052a31f  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 0052a325  41                   inc ecx
// 0052a326  51                   push ecx
// 0052a327  81c600010000         add esi, 0x100
// 0052a32d  56                   push esi
// 0052a32e  e89d59ffff           call 0x51fcd0
// 0052a333  83c408               add esp, 8
// 0052a336  5e                   pop esi
// 0052a337  c3                   ret 
// library libpng-1.2.5/pngwtran.c (function _png_do_write_transformations)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngwtran.c
