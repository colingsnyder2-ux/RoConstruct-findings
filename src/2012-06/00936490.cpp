// from server: 100% by auto
// roc 2012-06 00936490  unit: RBX::BallCellContact  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936490
//
// 00936490  53                   push ebx
// 00936491  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00936495  56                   push esi
// 00936496  57                   push edi
// 00936497  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0093649b  8bc3                 mov eax, ebx
// 0093649d  c1e004               shl eax, 4
// 009364a0  83c018               add eax, 0x18
// 009364a3  50                   push eax
// 009364a4  6a00                 push 0
// 009364a6  6a00                 push 0
// 009364a8  57                   push edi
// 009364a9  e8b20a0000           call 0x936f60
// 009364ae  8bf0                 mov esi, eax
// 009364b0  6a06                 push 6
// 009364b2  56                   push esi
// 009364b3  57                   push edi
// 009364b4  e847cfffff           call 0x933400
// 009364b9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 009364bd  83c41c               add esp, 0x1c
// 009364c0  5f                   pop edi
// 009364c1  885e07               mov byte ptr [esi + 7], bl
// 009364c4  c6460601             mov byte ptr [esi + 6], 1
// 009364c8  894e0c               mov dword ptr [esi + 0xc], ecx
// 009364cb  8bc6                 mov eax, esi
// 009364cd  5e                   pop esi
// 009364ce  5b                   pop ebx
// 009364cf  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newCclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
