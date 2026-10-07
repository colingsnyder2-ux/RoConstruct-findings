// roc 2012-06 00655f90  unit: seg_00650000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655f90
//
// 00655f90  56                   push esi
// 00655f91  8b742408             mov esi, dword ptr [esp + 8]
// 00655f95  6a00                 push 0
// 00655f97  56                   push esi
// 00655f98  e8135a0100           call 0x66b9b0
// 00655f9d  83c408               add esp, 8
// 00655fa0  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00655fa7  7517                 jne 0x655fc0
// 00655fa9  56                   push esi
// 00655faa  e8214d0100           call 0x66acd0
// 00655faf  56                   push esi
// 00655fb0  e8cb460100           call 0x66a680
// 00655fb5  6a00                 push 0
// 00655fb7  56                   push esi
// 00655fb8  e8033e0100           call 0x669dc0
// 00655fbd  83c410               add esp, 0x10
// 00655fc0  56                   push esi
// 00655fc1  e8fa370100           call 0x6697c0
// 00655fc6  83c404               add esp, 4
// 00655fc9  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00655fd0  56                   push esi
// 00655fd1  7411                 je 0x655fe4
// 00655fd3  8b06                 mov eax, dword ptr [esi]
// 00655fd5  c7401401000000       mov dword ptr [eax + 0x14], 1
// 00655fdc  8b0e                 mov ecx, dword ptr [esi]
// 00655fde  8b11                 mov edx, dword ptr [ecx]
// 00655fe0  ffd2                 call edx
// 00655fe2  eb15                 jmp 0x655ff9
// 00655fe4  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00655feb  7407                 je 0x655ff4
// 00655fed  e85e2b0100           call 0x668b50
// 00655ff2  eb05                 jmp 0x655ff9
// 00655ff4  e8e71e0100           call 0x667ee0
// 00655ff9  83c404               add esp, 4
// 00655ffc  83bea800000001       cmp dword ptr [esi + 0xa8], 1
// 00656003  7f0d                 jg 0x656012
// 00656005  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0065600c  7504                 jne 0x656012
// 0065600e  32c0                 xor al, al
// 00656010  eb05                 jmp 0x656017
// 00656012  b801000000           mov eax, 1
// 00656017  50                   push eax
// 00656018  56                   push esi
// 00656019  e822100100           call 0x667040
// 0065601e  6a00                 push 0
// 00656020  56                   push esi
// 00656021  e80a080100           call 0x666830
// 00656026  56                   push esi
// 00656027  e804ffffff           call 0x655f30
// 0065602c  8b4604               mov eax, dword ptr [esi + 4]
// 0065602f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00656032  56                   push esi
// 00656033  ffd1                 call ecx
// 00656035  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0065603b  8b02                 mov eax, dword ptr [edx]
// 0065603d  56                   push esi
// 0065603e  ffd0                 call eax
// 00656040  83c41c               add esp, 0x1c
// 00656043  5e                   pop esi
// 00656044  c3                   ret 
// library jpeg-6b/jcinit.c (function _jinit_compress_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcinit.c
