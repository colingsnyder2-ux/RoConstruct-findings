// from server: 100% by auto
// roc 2007-08 00612f10  unit: seg_00610000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00612f10
//
// 00612f10  53                   push ebx
// 00612f11  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00612f15  56                   push esi
// 00612f16  57                   push edi
// 00612f17  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00612f1b  8bc3                 mov eax, ebx
// 00612f1d  c1e004               shl eax, 4
// 00612f20  83c018               add eax, 0x18
// 00612f23  50                   push eax
// 00612f24  6a00                 push 0
// 00612f26  6a00                 push 0
// 00612f28  57                   push edi
// 00612f29  e8c20a0000           call 0x6139f0
// 00612f2e  8bf0                 mov esi, eax
// 00612f30  6a06                 push 6
// 00612f32  56                   push esi
// 00612f33  57                   push edi
// 00612f34  e817d0ffff           call 0x60ff50
// 00612f39  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00612f3d  83c41c               add esp, 0x1c
// 00612f40  5f                   pop edi
// 00612f41  885e07               mov byte ptr [esi + 7], bl
// 00612f44  c6460601             mov byte ptr [esi + 6], 1
// 00612f48  894e0c               mov dword ptr [esi + 0xc], ecx
// 00612f4b  8bc6                 mov eax, esi
// 00612f4d  5e                   pop esi
// 00612f4e  5b                   pop ebx
// 00612f4f  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newCclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
