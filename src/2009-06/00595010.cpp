// roc 2009-06 00595010  unit: seg_00590000  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00595010
//
// 00595010  56                   push esi
// 00595011  8b742408             mov esi, dword ptr [esp + 8]
// 00595015  8b4668               mov eax, dword ptr [esi + 0x68]
// 00595018  57                   push edi
// 00595019  a801                 test al, 1
// 0059501b  7404                 je 0x595021
// 0059501d  a804                 test al, 4
// 0059501f  750e                 jne 0x59502f
// 00595021  6850228d00           push 0x8d2250
// 00595026  56                   push esi
// 00595027  e83491ffff           call 0x58e160
// 0059502c  83c408               add esp, 8
// 0059502f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00595033  834e6818             or dword ptr [esi + 0x68], 0x18
// 00595037  85ff                 test edi, edi
// 00595039  740e                 je 0x595049
// 0059503b  6834228d00           push 0x8d2234
// 00595040  56                   push esi
// 00595041  e8ca91ffff           call 0x58e210
// 00595046  83c408               add esp, 8
// 00595049  57                   push edi
// 0059504a  56                   push esi
// 0059504b  e890fbffff           call 0x594be0
// 00595050  83c408               add esp, 8
// 00595053  5f                   pop edi
// 00595054  5e                   pop esi
// 00595055  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_IEND)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
