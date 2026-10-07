// roc 2008-06 005304d0  unit: seg_00530000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005304d0
//
// 005304d0  56                   push esi
// 005304d1  8b742408             mov esi, dword ptr [esp + 8]
// 005304d5  6a00                 push 0
// 005304d7  56                   push esi
// 005304d8  e823bd0000           call 0x53c200
// 005304dd  83c408               add esp, 8
// 005304e0  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 005304e7  7517                 jne 0x530500
// 005304e9  56                   push esi
// 005304ea  e831b00000           call 0x53b520
// 005304ef  56                   push esi
// 005304f0  e8dba90000           call 0x53aed0
// 005304f5  6a00                 push 0
// 005304f7  56                   push esi
// 005304f8  e813a10000           call 0x53a610
// 005304fd  83c410               add esp, 0x10
// 00530500  56                   push esi
// 00530501  e80a9b0000           call 0x53a010
// 00530506  83c404               add esp, 4
// 00530509  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00530510  56                   push esi
// 00530511  7411                 je 0x530524
// 00530513  8b06                 mov eax, dword ptr [esi]
// 00530515  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0053051c  8b0e                 mov ecx, dword ptr [esi]
// 0053051e  8b11                 mov edx, dword ptr [ecx]
// 00530520  ffd2                 call edx
// 00530522  eb15                 jmp 0x530539
// 00530524  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0053052b  7407                 je 0x530534
// 0053052d  e8ee8d0000           call 0x539320
// 00530532  eb05                 jmp 0x530539
// 00530534  e877810000           call 0x5386b0
// 00530539  83c404               add esp, 4
// 0053053c  83bea800000001       cmp dword ptr [esi + 0xa8], 1
// 00530543  7f0d                 jg 0x530552
// 00530545  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0053054c  7504                 jne 0x530552
// 0053054e  32c0                 xor al, al
// 00530550  eb05                 jmp 0x530557
// 00530552  b801000000           mov eax, 1
// 00530557  50                   push eax
// 00530558  56                   push esi
// 00530559  e8b2720000           call 0x537810
// 0053055e  6a00                 push 0
// 00530560  56                   push esi
// 00530561  e89a6a0000           call 0x537000
// 00530566  56                   push esi
// 00530567  e804ffffff           call 0x530470
// 0053056c  8b4604               mov eax, dword ptr [esi + 4]
// 0053056f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00530572  56                   push esi
// 00530573  ffd1                 call ecx
// 00530575  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0053057b  8b02                 mov eax, dword ptr [edx]
// 0053057d  56                   push esi
// 0053057e  ffd0                 call eax
// 00530580  83c41c               add esp, 0x1c
// 00530583  5e                   pop esi
// 00530584  c3                   ret 
// library jpeg-6b/jcinit.c (function _jinit_compress_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcinit.c
