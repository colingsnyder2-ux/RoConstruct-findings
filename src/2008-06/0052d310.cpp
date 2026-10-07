// roc 2008-06 0052d310  unit: seg_00520000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052d310
//
// 0052d310  56                   push esi
// 0052d311  8b742408             mov esi, dword ptr [esp + 8]
// 0052d315  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052d318  57                   push edi
// 0052d319  a801                 test al, 1
// 0052d31b  7404                 je 0x52d321
// 0052d31d  a804                 test al, 4
// 0052d31f  750e                 jne 0x52d32f
// 0052d321  687cbe8200           push 0x82be7c
// 0052d326  56                   push esi
// 0052d327  e884c6ffff           call 0x5299b0
// 0052d32c  83c408               add esp, 8
// 0052d32f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0052d333  834e6818             or dword ptr [esi + 0x68], 0x18
// 0052d337  85ff                 test edi, edi
// 0052d339  740e                 je 0x52d349
// 0052d33b  6860be8200           push 0x82be60
// 0052d340  56                   push esi
// 0052d341  e80ac7ffff           call 0x529a50
// 0052d346  83c408               add esp, 8
// 0052d349  57                   push edi
// 0052d34a  56                   push esi
// 0052d34b  e890fbffff           call 0x52cee0
// 0052d350  83c408               add esp, 8
// 0052d353  5f                   pop edi
// 0052d354  5e                   pop esi
// 0052d355  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_IEND)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
