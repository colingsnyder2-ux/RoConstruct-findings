// roc 2009-06 006ecc90  unit: RBX::PartDropTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ecc90
//
// 006ecc90  53                   push ebx
// 006ecc91  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006ecc95  56                   push esi
// 006ecc96  57                   push edi
// 006ecc97  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006ecc9b  8bc3                 mov eax, ebx
// 006ecc9d  c1e004               shl eax, 4
// 006ecca0  83c018               add eax, 0x18
// 006ecca3  50                   push eax
// 006ecca4  6a00                 push 0
// 006ecca6  6a00                 push 0
// 006ecca8  57                   push edi
// 006ecca9  e8b20a0000           call 0x6ed760
// 006eccae  8bf0                 mov esi, eax
// 006eccb0  6a06                 push 6
// 006eccb2  56                   push esi
// 006eccb3  57                   push edi
// 006eccb4  e857d0ffff           call 0x6e9d10
// 006eccb9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006eccbd  83c41c               add esp, 0x1c
// 006eccc0  5f                   pop edi
// 006eccc1  885e07               mov byte ptr [esi + 7], bl
// 006eccc4  c6460601             mov byte ptr [esi + 6], 1
// 006eccc8  894e0c               mov dword ptr [esi + 0xc], ecx
// 006ecccb  8bc6                 mov eax, esi
// 006ecccd  5e                   pop esi
// 006eccce  5b                   pop ebx
// 006ecccf  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newCclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
