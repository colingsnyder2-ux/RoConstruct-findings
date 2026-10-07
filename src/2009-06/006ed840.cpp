// roc 2009-06 006ed840  unit: seg_006e0000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed840
//
// 006ed840  8b06                 mov eax, dword ptr [esi]
// 006ed842  8b403c               mov eax, dword ptr [eax + 0x3c]
// 006ed845  51                   push ecx
// 006ed846  52                   push edx
// 006ed847  85c0                 test eax, eax
// 006ed849  7521                 jne 0x6ed86c
// 006ed84b  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ed84e  68f0dd8e00           push 0x8eddf0
// 006ed853  51                   push ecx
// 006ed854  e847b8fdff           call 0x6c90a0
// 006ed859  83c410               add esp, 0x10
// 006ed85c  6a00                 push 0
// 006ed85e  50                   push eax
// 006ed85f  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ed862  50                   push eax
// 006ed863  e8e8390000           call 0x6f1250
// 006ed868  83c40c               add esp, 0xc
// 006ed86b  c3                   ret 
// 006ed86c  8b5610               mov edx, dword ptr [esi + 0x10]
// 006ed86f  50                   push eax
// 006ed870  68c8dd8e00           push 0x8eddc8
// 006ed875  52                   push edx
// 006ed876  e825b8fdff           call 0x6c90a0
// 006ed87b  83c414               add esp, 0x14
// 006ed87e  6a00                 push 0
// 006ed880  50                   push eax
// 006ed881  8b460c               mov eax, dword ptr [esi + 0xc]
// 006ed884  50                   push eax
// 006ed885  e8c6390000           call 0x6f1250
// 006ed88a  83c40c               add esp, 0xc
// 006ed88d  c3                   ret 
// library lua-5.1.4/lparser.c (function _errorlimit)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
