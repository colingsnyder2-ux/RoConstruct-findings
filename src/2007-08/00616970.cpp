// roc 2007-08 00616970  unit: seg_00610000  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00616970
//
// 00616970  51                   push ecx
// 00616971  8b4e04               mov ecx, dword ptr [esi + 4]
// 00616974  6a04                 push 4
// 00616976  8d442404             lea eax, [esp + 4]
// 0061697a  50                   push eax
// 0061697b  51                   push ecx
// 0061697c  e83fcaffff           call 0x6133c0
// 00616981  83c40c               add esp, 0xc
// 00616984  85c0                 test eax, eax
// 00616986  7423                 je 0x6169ab
// 00616988  8b560c               mov edx, dword ptr [esi + 0xc]
// 0061698b  8b06                 mov eax, dword ptr [esi]
// 0061698d  68e0357c00           push 0x7c35e0
// 00616992  52                   push edx
// 00616993  68c4357c00           push 0x7c35c4
// 00616998  50                   push eax
// 00616999  e8f284ffff           call 0x60ee90
// 0061699e  8b0e                 mov ecx, dword ptr [esi]
// 006169a0  6a03                 push 3
// 006169a2  51                   push ecx
// 006169a3  e878f6faff           call 0x5c6020
// 006169a8  83c418               add esp, 0x18
// 006169ab  8b0424               mov eax, dword ptr [esp]
// 006169ae  85c0                 test eax, eax
// 006169b0  7d27                 jge 0x6169d9
// 006169b2  8b560c               mov edx, dword ptr [esi + 0xc]
// 006169b5  8b06                 mov eax, dword ptr [esi]
// 006169b7  68f0357c00           push 0x7c35f0
// 006169bc  52                   push edx
// 006169bd  68c4357c00           push 0x7c35c4
// 006169c2  50                   push eax
// 006169c3  e8c884ffff           call 0x60ee90
// 006169c8  8b0e                 mov ecx, dword ptr [esi]
// 006169ca  6a03                 push 3
// 006169cc  51                   push ecx
// 006169cd  e84ef6faff           call 0x5c6020
// 006169d2  8b442418             mov eax, dword ptr [esp + 0x18]
// 006169d6  83c418               add esp, 0x18
// 006169d9  59                   pop ecx
// 006169da  c3                   ret 
// library lua-5.1.4/lundump.c (function _LoadInt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lundump.c
