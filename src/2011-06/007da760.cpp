// roc 2011-06 007da760  unit: seg_007d0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007da760
//
// 007da760  56                   push esi
// 007da761  8b742408             mov esi, dword ptr [esp + 8]
// 007da765  8b560c               mov edx, dword ptr [esi + 0xc]
// 007da768  8b4610               mov eax, dword ptr [esi + 0x10]
// 007da76b  8d4c2408             lea ecx, [esp + 8]
// 007da76f  51                   push ecx
// 007da770  52                   push edx
// 007da771  50                   push eax
// 007da772  8b4608               mov eax, dword ptr [esi + 8]
// 007da775  ffd0                 call eax
// 007da777  83c40c               add esp, 0xc
// 007da77a  85c0                 test eax, eax
// 007da77c  7419                 je 0x7da797
// 007da77e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007da782  85c9                 test ecx, ecx
// 007da784  7411                 je 0x7da797
// 007da786  49                   dec ecx
// 007da787  894604               mov dword ptr [esi + 4], eax
// 007da78a  890e                 mov dword ptr [esi], ecx
// 007da78c  0fb608               movzx ecx, byte ptr [eax]
// 007da78f  40                   inc eax
// 007da790  894604               mov dword ptr [esi + 4], eax
// 007da793  8bc1                 mov eax, ecx
// 007da795  5e                   pop esi
// 007da796  c3                   ret 
// 007da797  83c8ff               or eax, 0xffffffff
// 007da79a  5e                   pop esi
// 007da79b  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_fill)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
