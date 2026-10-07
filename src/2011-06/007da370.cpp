// roc 2011-06 007da370  unit: seg_007d0000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da370
//
// 007da370  53                   push ebx
// 007da371  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 007da375  56                   push esi
// 007da376  57                   push edi
// 007da377  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007da37b  8bc3                 mov eax, ebx
// 007da37d  c1e004               shl eax, 4
// 007da380  83c018               add eax, 0x18
// 007da383  50                   push eax
// 007da384  6a00                 push 0
// 007da386  6a00                 push 0
// 007da388  57                   push edi
// 007da389  e8b20a0000           call 0x7dae40
// 007da38e  8bf0                 mov esi, eax
// 007da390  6a06                 push 6
// 007da392  56                   push esi
// 007da393  57                   push edi
// 007da394  e857cfffff           call 0x7d72f0
// 007da399  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007da39d  83c41c               add esp, 0x1c
// 007da3a0  5f                   pop edi
// 007da3a1  885e07               mov byte ptr [esi + 7], bl
// 007da3a4  c6460601             mov byte ptr [esi + 6], 1
// 007da3a8  894e0c               mov dword ptr [esi + 0xc], ecx
// 007da3ab  8bc6                 mov eax, esi
// 007da3ad  5e                   pop esi
// 007da3ae  5b                   pop ebx
// 007da3af  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newCclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
