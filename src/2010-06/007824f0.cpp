// roc 2010-06 007824f0  unit: seg_00780000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007824f0
//
// 007824f0  83ec50               sub esp, 0x50
// 007824f3  53                   push ebx
// 007824f4  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007824f8  8b4340               mov eax, dword ptr [ebx + 0x40]
// 007824fb  56                   push esi
// 007824fc  6a50                 push 0x50
// 007824fe  83c010               add eax, 0x10
// 00782501  50                   push eax
// 00782502  8d4c2410             lea ecx, [esp + 0x10]
// 00782506  51                   push ecx
// 00782507  e8f408fbff           call 0x732e00
// 0078250c  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00782510  8b4304               mov eax, dword ptr [ebx + 4]
// 00782513  52                   push edx
// 00782514  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00782517  50                   push eax
// 00782518  8d4c241c             lea ecx, [esp + 0x1c]
// 0078251c  51                   push ecx
// 0078251d  6808dea400           push 0xa4de08
// 00782522  52                   push edx
// 00782523  e8b808fbff           call 0x732de0
// 00782528  8bf0                 mov esi, eax
// 0078252a  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00782531  83c420               add esp, 0x20
// 00782534  85c0                 test eax, eax
// 00782536  743c                 je 0x782574
// 00782538  3d1c010000           cmp eax, 0x11c
// 0078253d  7c18                 jl 0x782557
// 0078253f  3d1e010000           cmp eax, 0x11e
// 00782544  7f11                 jg 0x782557
// 00782546  6a00                 push 0
// 00782548  e883feffff           call 0x7823d0
// 0078254d  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 00782550  8b00                 mov eax, dword ptr [eax]
// 00782552  83c404               add esp, 4
// 00782555  eb0a                 jmp 0x782561
// 00782557  50                   push eax
// 00782558  53                   push ebx
// 00782559  e832ffffff           call 0x782490
// 0078255e  83c408               add esp, 8
// 00782561  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00782564  50                   push eax
// 00782565  56                   push esi
// 00782566  684c36a500           push 0xa5364c
// 0078256b  51                   push ecx
// 0078256c  e86f08fbff           call 0x732de0
// 00782571  83c410               add esp, 0x10
// 00782574  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00782577  6a03                 push 3
// 00782579  52                   push edx
// 0078257a  e831dbfaff           call 0x7300b0
// 0078257f  83c408               add esp, 8
// 00782582  5e                   pop esi
// 00782583  5b                   pop ebx
// 00782584  83c450               add esp, 0x50
// 00782587  c3                   ret 
// library lua-5.1.4/llex.c (function _luaX_lexerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 llex.c
