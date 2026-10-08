// from server: 100% by auto
// roc 2011-06 0056a880  unit: seg_00560000  size: 181 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a880
//
// 0056a880  56                   push esi
// 0056a881  8b742408             mov esi, dword ptr [esp + 8]
// 0056a885  6a00                 push 0
// 0056a887  56                   push esi
// 0056a888  e8135a0100           call 0x5802a0
// 0056a88d  83c408               add esp, 8
// 0056a890  80beb000000000       cmp byte ptr [esi + 0xb0], 0
// 0056a897  7517                 jne 0x56a8b0
// 0056a899  56                   push esi
// 0056a89a  e8214d0100           call 0x57f5c0
// 0056a89f  56                   push esi
// 0056a8a0  e8cb460100           call 0x57ef70
// 0056a8a5  6a00                 push 0
// 0056a8a7  56                   push esi
// 0056a8a8  e8033e0100           call 0x57e6b0
// 0056a8ad  83c410               add esp, 0x10
// 0056a8b0  56                   push esi
// 0056a8b1  e8fa370100           call 0x57e0b0
// 0056a8b6  83c404               add esp, 4
// 0056a8b9  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0056a8c0  56                   push esi
// 0056a8c1  7411                 je 0x56a8d4
// 0056a8c3  8b06                 mov eax, dword ptr [esi]
// 0056a8c5  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0056a8cc  8b0e                 mov ecx, dword ptr [esi]
// 0056a8ce  8b11                 mov edx, dword ptr [ecx]
// 0056a8d0  ffd2                 call edx
// 0056a8d2  eb15                 jmp 0x56a8e9
// 0056a8d4  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0056a8db  7407                 je 0x56a8e4
// 0056a8dd  e85e2b0100           call 0x57d440
// 0056a8e2  eb05                 jmp 0x56a8e9
// 0056a8e4  e8e71e0100           call 0x57c7d0
// 0056a8e9  83c404               add esp, 4
// 0056a8ec  83bea800000001       cmp dword ptr [esi + 0xa8], 1
// 0056a8f3  7f0d                 jg 0x56a902
// 0056a8f5  80beb200000000       cmp byte ptr [esi + 0xb2], 0
// 0056a8fc  7504                 jne 0x56a902
// 0056a8fe  32c0                 xor al, al
// 0056a900  eb05                 jmp 0x56a907
// 0056a902  b801000000           mov eax, 1
// 0056a907  50                   push eax
// 0056a908  56                   push esi
// 0056a909  e822100100           call 0x57b930
// 0056a90e  6a00                 push 0
// 0056a910  56                   push esi
// 0056a911  e80a080100           call 0x57b120
// 0056a916  56                   push esi
// 0056a917  e804ffffff           call 0x56a820
// 0056a91c  8b4604               mov eax, dword ptr [esi + 4]
// 0056a91f  8b4818               mov ecx, dword ptr [eax + 0x18]
// 0056a922  56                   push esi
// 0056a923  ffd1                 call ecx
// 0056a925  8b964c010000         mov edx, dword ptr [esi + 0x14c]
// 0056a92b  8b02                 mov eax, dword ptr [edx]
// 0056a92d  56                   push esi
// 0056a92e  ffd0                 call eax
// 0056a930  83c41c               add esp, 0x1c
// 0056a933  5e                   pop esi
// 0056a934  c3                   ret 
// library jpeg-6b/jcinit.c (function _jinit_compress_master)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcinit.c
