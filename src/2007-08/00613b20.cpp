// roc 2007-08 00613b20  unit: seg_00610000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00613b20
//
// 00613b20  397e10               cmp dword ptr [esi + 0x10], edi
// 00613b23  7509                 jne 0x613b2e
// 00613b25  89742404             mov dword ptr [esp + 4], esi
// 00613b29  e9c24e0000           jmp 0x6189f0
// 00613b2e  3b4604               cmp eax, dword ptr [esi + 4]
// 00613b31  7521                 jne 0x613b54
// 00613b33  57                   push edi
// 00613b34  56                   push esi
// 00613b35  e886390000           call 0x6174c0
// 00613b3a  50                   push eax
// 00613b3b  8b4634               mov eax, dword ptr [esi + 0x34]
// 00613b3e  6870337c00           push 0x7c3370
// 00613b43  50                   push eax
// 00613b44  e847b3ffff           call 0x60ee90
// 00613b49  50                   push eax
// 00613b4a  56                   push esi
// 00613b4b  e8703a0000           call 0x6175c0
// 00613b50  83c41c               add esp, 0x1c
// 00613b53  c3                   ret 
// 00613b54  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00613b58  50                   push eax
// 00613b59  51                   push ecx
// 00613b5a  56                   push esi
// 00613b5b  e860390000           call 0x6174c0
// 00613b60  83c408               add esp, 8
// 00613b63  50                   push eax
// 00613b64  57                   push edi
// 00613b65  56                   push esi
// 00613b66  e855390000           call 0x6174c0
// 00613b6b  8b5634               mov edx, dword ptr [esi + 0x34]
// 00613b6e  83c408               add esp, 8
// 00613b71  50                   push eax
// 00613b72  68cc337c00           push 0x7c33cc
// 00613b77  52                   push edx
// 00613b78  e813b3ffff           call 0x60ee90
// 00613b7d  50                   push eax
// 00613b7e  56                   push esi
// 00613b7f  e83c3a0000           call 0x6175c0
// 00613b84  83c41c               add esp, 0x1c
// 00613b87  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
