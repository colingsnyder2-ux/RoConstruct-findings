// roc 2010-06 0077df30  unit: RBX::PartDropTool  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077df30
//
// 0077df30  53                   push ebx
// 0077df31  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0077df35  56                   push esi
// 0077df36  57                   push edi
// 0077df37  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0077df3b  8bc3                 mov eax, ebx
// 0077df3d  c1e004               shl eax, 4
// 0077df40  83c018               add eax, 0x18
// 0077df43  50                   push eax
// 0077df44  6a00                 push 0
// 0077df46  6a00                 push 0
// 0077df48  57                   push edi
// 0077df49  e8b20a0000           call 0x77ea00
// 0077df4e  8bf0                 mov esi, eax
// 0077df50  6a06                 push 6
// 0077df52  56                   push esi
// 0077df53  57                   push edi
// 0077df54  e857d0ffff           call 0x77afb0
// 0077df59  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0077df5d  83c41c               add esp, 0x1c
// 0077df60  5f                   pop edi
// 0077df61  885e07               mov byte ptr [esi + 7], bl
// 0077df64  c6460601             mov byte ptr [esi + 6], 1
// 0077df68  894e0c               mov dword ptr [esi + 0xc], ecx
// 0077df6b  8bc6                 mov eax, esi
// 0077df6d  5e                   pop esi
// 0077df6e  5b                   pop ebx
// 0077df6f  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newCclosure)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
