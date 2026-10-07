// roc 2011-06 00762ff0  unit: seg_00760000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00762ff0
//
// 00762ff0  8b442408             mov eax, dword ptr [esp + 8]
// 00762ff4  56                   push esi
// 00762ff5  8b742408             mov esi, dword ptr [esp + 8]
// 00762ff9  57                   push edi
// 00762ffa  8bce                 mov ecx, esi
// 00762ffc  bf01000000           mov edi, 1
// 00763001  e8aaf1ffff           call 0x7621b0
// 00763006  8b4808               mov ecx, dword ptr [eax + 8]
// 00763009  83e906               sub ecx, 6
// 0076300c  7436                 je 0x763044
// 0076300e  2bcf                 sub ecx, edi
// 00763010  7425                 je 0x763037
// 00763012  2bcf                 sub ecx, edi
// 00763014  740b                 je 0x763021
// 00763016  33ff                 xor edi, edi
// 00763018  834608f0             add dword ptr [esi + 8], -0x10
// 0076301c  8bc7                 mov eax, edi
// 0076301e  5f                   pop edi
// 0076301f  5e                   pop esi
// 00763020  c3                   ret 
// 00763021  8b08                 mov ecx, dword ptr [eax]
// 00763023  8b5608               mov edx, dword ptr [esi + 8]
// 00763026  8b52f0               mov edx, dword ptr [edx - 0x10]
// 00763029  83c148               add ecx, 0x48
// 0076302c  8911                 mov dword ptr [ecx], edx
// 0076302e  c7410805000000       mov dword ptr [ecx + 8], 5
// 00763035  eb18                 jmp 0x76304f
// 00763037  8b4e08               mov ecx, dword ptr [esi + 8]
// 0076303a  8b10                 mov edx, dword ptr [eax]
// 0076303c  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 0076303f  894a0c               mov dword ptr [edx + 0xc], ecx
// 00763042  eb0b                 jmp 0x76304f
// 00763044  8b5608               mov edx, dword ptr [esi + 8]
// 00763047  8b08                 mov ecx, dword ptr [eax]
// 00763049  8b52f0               mov edx, dword ptr [edx - 0x10]
// 0076304c  89510c               mov dword ptr [ecx + 0xc], edx
// 0076304f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00763052  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 00763055  f6410503             test byte ptr [ecx + 5], 3
// 00763059  7413                 je 0x76306e
// 0076305b  8b00                 mov eax, dword ptr [eax]
// 0076305d  f6400504             test byte ptr [eax + 5], 4
// 00763061  740b                 je 0x76306e
// 00763063  51                   push ecx
// 00763064  50                   push eax
// 00763065  56                   push esi
// 00763066  e825420700           call 0x7d7290
// 0076306b  83c40c               add esp, 0xc
// 0076306e  834608f0             add dword ptr [esi + 8], -0x10
// 00763072  8bc7                 mov eax, edi
// 00763074  5f                   pop edi
// 00763075  5e                   pop esi
// 00763076  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
