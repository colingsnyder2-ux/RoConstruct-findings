// from server: 100% by auto
// roc 2007-08 00521b20  unit: seg_00520000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00521b20
//
// 00521b20  56                   push esi
// 00521b21  8b742408             mov esi, dword ptr [esp + 8]
// 00521b25  8b4668               mov eax, dword ptr [esi + 0x68]
// 00521b28  a801                 test al, 1
// 00521b2a  57                   push edi
// 00521b2b  7404                 je 0x521b31
// 00521b2d  a804                 test al, 4
// 00521b2f  750e                 jne 0x521b3f
// 00521b31  68b0387a00           push 0x7a38b0
// 00521b36  56                   push esi
// 00521b37  e8a4cdffff           call 0x51e8e0
// 00521b3c  83c408               add esp, 8
// 00521b3f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00521b43  834e6818             or dword ptr [esi + 0x68], 0x18
// 00521b47  85ff                 test edi, edi
// 00521b49  740e                 je 0x521b59
// 00521b4b  6894387a00           push 0x7a3894
// 00521b50  56                   push esi
// 00521b51  e83aceffff           call 0x51e990
// 00521b56  83c408               add esp, 8
// 00521b59  57                   push edi
// 00521b5a  56                   push esi
// 00521b5b  e8f0fbffff           call 0x521750
// 00521b60  83c408               add esp, 8
// 00521b63  5f                   pop edi
// 00521b64  5e                   pop esi
// 00521b65  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_IEND)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
