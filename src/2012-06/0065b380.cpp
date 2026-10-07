// roc 2012-06 0065b380  unit: seg_00650000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065b380
//
// 0065b380  56                   push esi
// 0065b381  8b742408             mov esi, dword ptr [esp + 8]
// 0065b385  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065b388  57                   push edi
// 0065b389  a801                 test al, 1
// 0065b38b  7404                 je 0x65b391
// 0065b38d  a804                 test al, 4
// 0065b38f  750e                 jne 0x65b39f
// 0065b391  6894a3b800           push 0xb8a394
// 0065b396  56                   push esi
// 0065b397  e8142effff           call 0x64e1b0
// 0065b39c  83c408               add esp, 8
// 0065b39f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0065b3a3  834e6818             or dword ptr [esi + 0x68], 0x18
// 0065b3a7  85ff                 test edi, edi
// 0065b3a9  740e                 je 0x65b3b9
// 0065b3ab  6878a3b800           push 0xb8a378
// 0065b3b0  56                   push esi
// 0065b3b1  e8aa2effff           call 0x64e260
// 0065b3b6  83c408               add esp, 8
// 0065b3b9  57                   push edi
// 0065b3ba  56                   push esi
// 0065b3bb  e890fbffff           call 0x65af50
// 0065b3c0  83c408               add esp, 8
// 0065b3c3  5f                   pop edi
// 0065b3c4  5e                   pop esi
// 0065b3c5  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_IEND)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
