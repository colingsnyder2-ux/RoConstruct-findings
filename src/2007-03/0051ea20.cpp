// roc 2007-03 0051ea20  unit: seg_00510000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051ea20
//
// 0051ea20  56                   push esi
// 0051ea21  8b742408             mov esi, dword ptr [esp + 8]
// 0051ea25  6a00                 push 0
// 0051ea27  56                   push esi
// 0051ea28  e8b3c50000           call 0x52afe0
// 0051ea2d  83c408               add esp, 8
// 0051ea30  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0051ea37  7517                 jne 0x51ea50
// 0051ea39  56                   push esi
// 0051ea3a  e881b80000           call 0x52a2c0
// 0051ea3f  56                   push esi
// 0051ea40  e81bb20000           call 0x529c60
// 0051ea45  6a00                 push 0
// 0051ea47  56                   push esi
// 0051ea48  e873a90000           call 0x5293c0
// 0051ea4d  83c410               add esp, 0x10
// 0051ea50  56                   push esi
// 0051ea51  e8caa30000           call 0x528e20
// 0051ea56  83c404               add esp, 4
// 0051ea59  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0051ea60  56                   push esi
// 0051ea61  7411                 je 0x51ea74
// 0051ea63  8b06                 mov eax, dword ptr [esi]
// 0051ea65  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0051ea6c  8b0e                 mov ecx, dword ptr [esi]
// 0051ea6e  8b11                 mov edx, dword ptr [ecx]
// 0051ea70  ffd2                 call edx
// 0051ea72  eb15                 jmp 0x51ea89
// 0051ea74  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0051ea7b  7407                 je 0x51ea84
// 0051ea7d  e8ce940000           call 0x527f50
// 0051ea82  eb05                 jmp 0x51ea89
// 0051ea84  e837890000           call 0x5273c0
// 0051ea89  83c404               add esp, 4
// 0051ea8c  83bea800000001       cmp dword ptr [esi + 0xa8], 1
// 0051ea93  7f0d                 jg 0x51eaa2
// 0051ea95  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0051ea9c  7504                 jne 0x51eaa2
// 0051ea9e  32c0                 xor al, al
// 0051eaa0  eb05                 jmp 0x51eaa7
// 0051eaa2  b801000000           mov eax, 1
// 0051eaa7  50                   push eax
// 0051eaa8  56                   push esi
// 0051eaa9  e862790000           call 0x526410
// 0051eaae  6a00                 push 0
// 0051eab0  56                   push esi
// 0051eab1  e89a710000           call 0x525c50
// 0051eab6  56                   push esi
// 0051eab7  e804ffffff           call 0x51e9c0
// 0051eabc  8b4604               mov eax, dword ptr [esi + 4]
// 0051eabf  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0051eac2  56                   push esi
// 0051eac3  ffd1                 call ecx
// 0051eac5  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0051eacb  8b02                 mov eax, dword ptr [edx]
// 0051eacd  56                   push esi
// 0051eace  ffd0                 call eax
// 0051ead0  83c41c               add esp, 0x1c
// 0051ead3  5e                   pop esi
// 0051ead4  c3                   ret 
// library jpeg-6b/jcinit.c (function _jinit_compress_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcinit.c
