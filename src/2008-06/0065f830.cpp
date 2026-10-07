// roc 2008-06 0065f830  unit: seg_00650000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f830
//
// 0065f830  56                   push esi
// 0065f831  8b742408             mov esi, dword ptr [esp + 8]
// 0065f835  8b560c               mov edx, dword ptr [esi + 0xc]
// 0065f838  8b4610               mov eax, dword ptr [esi + 0x10]
// 0065f83b  8d4c2408             lea ecx, [esp + 8]
// 0065f83f  51                   push ecx
// 0065f840  52                   push edx
// 0065f841  50                   push eax
// 0065f842  8b4608               mov eax, dword ptr [esi + 8]
// 0065f845  ffd0                 call eax
// 0065f847  83c40c               add esp, 0xc
// 0065f84a  85c0                 test eax, eax
// 0065f84c  7419                 je 0x65f867
// 0065f84e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065f852  85c9                 test ecx, ecx
// 0065f854  7411                 je 0x65f867
// 0065f856  49                   dec ecx
// 0065f857  894604               mov dword ptr [esi + 4], eax
// 0065f85a  890e                 mov dword ptr [esi], ecx
// 0065f85c  0fb608               movzx ecx, byte ptr [eax]
// 0065f85f  40                   inc eax
// 0065f860  894604               mov dword ptr [esi + 4], eax
// 0065f863  8bc1                 mov eax, ecx
// 0065f865  5e                   pop esi
// 0065f866  c3                   ret 
// 0065f867  83c8ff               or eax, 0xffffffff
// 0065f86a  5e                   pop esi
// 0065f86b  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_fill)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
