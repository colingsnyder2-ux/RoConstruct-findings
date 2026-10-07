// roc 2008-06 0065f450  unit: seg_00650000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f450
//
// 0065f450  53                   push ebx
// 0065f451  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0065f455  56                   push esi
// 0065f456  57                   push edi
// 0065f457  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065f45b  8bc3                 mov eax, ebx
// 0065f45d  c1e004               shl eax, 4
// 0065f460  83c018               add eax, 0x18
// 0065f463  50                   push eax
// 0065f464  6a00                 push 0
// 0065f466  6a00                 push 0
// 0065f468  57                   push edi
// 0065f469  e882120000           call 0x6606f0
// 0065f46e  8bf0                 mov esi, eax
// 0065f470  6a06                 push 6
// 0065f472  56                   push esi
// 0065f473  57                   push edi
// 0065f474  e867d0ffff           call 0x65c4e0
// 0065f479  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0065f47d  83c41c               add esp, 0x1c
// 0065f480  5f                   pop edi
// 0065f481  885e07               mov byte ptr [esi + 7], bl
// 0065f484  c6460601             mov byte ptr [esi + 6], 1
// 0065f488  894e0c               mov dword ptr [esi + 0xc], ecx
// 0065f48b  8bc6                 mov eax, esi
// 0065f48d  5e                   pop esi
// 0065f48e  5b                   pop ebx
// 0065f48f  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newCclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
