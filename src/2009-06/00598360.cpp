// roc 2009-06 00598360  unit: seg_00590000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598360
//
// 00598360  56                   push esi
// 00598361  8b742408             mov esi, dword ptr [esp + 8]
// 00598365  6a00                 push 0
// 00598367  56                   push esi
// 00598368  e873e10000           call 0x5a64e0
// 0059836d  83c408               add esp, 8
// 00598370  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 00598377  7517                 jne 0x598390
// 00598379  56                   push esi
// 0059837a  e881d40000           call 0x5a5800
// 0059837f  56                   push esi
// 00598380  e82bce0000           call 0x5a51b0
// 00598385  6a00                 push 0
// 00598387  56                   push esi
// 00598388  e863c50000           call 0x5a48f0
// 0059838d  83c410               add esp, 0x10
// 00598390  56                   push esi
// 00598391  e85abf0000           call 0x5a42f0
// 00598396  83c404               add esp, 4
// 00598399  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 005983a0  56                   push esi
// 005983a1  7411                 je 0x5983b4
// 005983a3  8b06                 mov eax, dword ptr [esi]
// 005983a5  c7401401000000       mov dword ptr [eax + 0x14], 1
// 005983ac  8b0e                 mov ecx, dword ptr [esi]
// 005983ae  8b11                 mov edx, dword ptr [ecx]
// 005983b0  ffd2                 call edx
// 005983b2  eb15                 jmp 0x5983c9
// 005983b4  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 005983bb  7407                 je 0x5983c4
// 005983bd  e83eb20000           call 0x5a3600
// 005983c2  eb05                 jmp 0x5983c9
// 005983c4  e8c7a50000           call 0x5a2990
// 005983c9  83c404               add esp, 4
// 005983cc  83bea800000001       cmp dword ptr [esi + 0xa8], 1
// 005983d3  7f0d                 jg 0x5983e2
// 005983d5  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 005983dc  7504                 jne 0x5983e2
// 005983de  32c0                 xor al, al
// 005983e0  eb05                 jmp 0x5983e7
// 005983e2  b801000000           mov eax, 1
// 005983e7  50                   push eax
// 005983e8  56                   push esi
// 005983e9  e802970000           call 0x5a1af0
// 005983ee  6a00                 push 0
// 005983f0  56                   push esi
// 005983f1  e8ea8e0000           call 0x5a12e0
// 005983f6  56                   push esi
// 005983f7  e804ffffff           call 0x598300
// 005983fc  8b4604               mov eax, dword ptr [esi + 4]
// 005983ff  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00598402  56                   push esi
// 00598403  ffd1                 call ecx
// 00598405  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0059840b  8b02                 mov eax, dword ptr [edx]
// 0059840d  56                   push esi
// 0059840e  ffd0                 call eax
// 00598410  83c41c               add esp, 0x1c
// 00598413  5e                   pop esi
// 00598414  c3                   ret 
// library jpeg-6b/jcinit.c (function _jinit_compress_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcinit.c
