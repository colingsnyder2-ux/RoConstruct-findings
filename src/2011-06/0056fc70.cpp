// roc 2011-06 0056fc70  unit: seg_00560000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056fc70
//
// 0056fc70  56                   push esi
// 0056fc71  8b742408             mov esi, dword ptr [esp + 8]
// 0056fc75  8b4668               mov eax, dword ptr [esi + 0x68]
// 0056fc78  57                   push edi
// 0056fc79  a801                 test al, 1
// 0056fc7b  7404                 je 0x56fc81
// 0056fc7d  a804                 test al, 4
// 0056fc7f  750e                 jne 0x56fc8f
// 0056fc81  684465a800           push 0xa86544
// 0056fc86  56                   push esi
// 0056fc87  e8a416ffff           call 0x561330
// 0056fc8c  83c408               add esp, 8
// 0056fc8f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0056fc93  834e6818             or dword ptr [esi + 0x68], 0x18
// 0056fc97  85ff                 test edi, edi
// 0056fc99  740e                 je 0x56fca9
// 0056fc9b  682865a800           push 0xa86528
// 0056fca0  56                   push esi
// 0056fca1  e83a17ffff           call 0x5613e0
// 0056fca6  83c408               add esp, 8
// 0056fca9  57                   push edi
// 0056fcaa  56                   push esi
// 0056fcab  e890fbffff           call 0x56f840
// 0056fcb0  83c408               add esp, 8
// 0056fcb3  5f                   pop edi
// 0056fcb4  5e                   pop esi
// 0056fcb5  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_IEND)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
