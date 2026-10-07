// roc 2010-06 0057bcb0  unit: seg_00570000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057bcb0
//
// 0057bcb0  56                   push esi
// 0057bcb1  8b742408             mov esi, dword ptr [esp + 8]
// 0057bcb5  6a00                 push 0
// 0057bcb7  56                   push esi
// 0057bcb8  e833e30000           call 0x589ff0
// 0057bcbd  83c408               add esp, 8
// 0057bcc0  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0057bcc7  7517                 jne 0x57bce0
// 0057bcc9  56                   push esi
// 0057bcca  e841d60000           call 0x589310
// 0057bccf  56                   push esi
// 0057bcd0  e8ebcf0000           call 0x588cc0
// 0057bcd5  6a00                 push 0
// 0057bcd7  56                   push esi
// 0057bcd8  e823c70000           call 0x588400
// 0057bcdd  83c410               add esp, 0x10
// 0057bce0  56                   push esi
// 0057bce1  e81ac10000           call 0x587e00
// 0057bce6  83c404               add esp, 4
// 0057bce9  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0057bcf0  56                   push esi
// 0057bcf1  7411                 je 0x57bd04
// 0057bcf3  8b06                 mov eax, dword ptr [esi]
// 0057bcf5  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0057bcfc  8b0e                 mov ecx, dword ptr [esi]
// 0057bcfe  8b11                 mov edx, dword ptr [ecx]
// 0057bd00  ffd2                 call edx
// 0057bd02  eb15                 jmp 0x57bd19
// 0057bd04  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0057bd0b  7407                 je 0x57bd14
// 0057bd0d  e87eb40000           call 0x587190
// 0057bd12  eb05                 jmp 0x57bd19
// 0057bd14  e807a80000           call 0x586520
// 0057bd19  83c404               add esp, 4
// 0057bd1c  83bea800000001       cmp dword ptr [esi + 0xa8], 1
// 0057bd23  7f0d                 jg 0x57bd32
// 0057bd25  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0057bd2c  7504                 jne 0x57bd32
// 0057bd2e  32c0                 xor al, al
// 0057bd30  eb05                 jmp 0x57bd37
// 0057bd32  b801000000           mov eax, 1
// 0057bd37  50                   push eax
// 0057bd38  56                   push esi
// 0057bd39  e842990000           call 0x585680
// 0057bd3e  6a00                 push 0
// 0057bd40  56                   push esi
// 0057bd41  e82a910000           call 0x584e70
// 0057bd46  56                   push esi
// 0057bd47  e804ffffff           call 0x57bc50
// 0057bd4c  8b4604               mov eax, dword ptr [esi + 4]
// 0057bd4f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0057bd52  56                   push esi
// 0057bd53  ffd1                 call ecx
// 0057bd55  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0057bd5b  8b02                 mov eax, dword ptr [edx]
// 0057bd5d  56                   push esi
// 0057bd5e  ffd0                 call eax
// 0057bd60  83c41c               add esp, 0x1c
// 0057bd63  5e                   pop esi
// 0057bd64  c3                   ret 
// library jpeg-6b/jcinit.c (function _jinit_compress_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcinit.c
