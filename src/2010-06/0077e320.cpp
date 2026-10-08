// from server: 100% by auto
// roc 2010-06 0077e320  unit: seg_00770000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e320
//
// 0077e320  56                   push esi
// 0077e321  8b742408             mov esi, dword ptr [esp + 8]
// 0077e325  8b560c               mov edx, dword ptr [esi + 0xc]
// 0077e328  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077e32b  8d4c2408             lea ecx, [esp + 8]
// 0077e32f  51                   push ecx
// 0077e330  52                   push edx
// 0077e331  50                   push eax
// 0077e332  8b4608               mov eax, dword ptr [esi + 8]
// 0077e335  ffd0                 call eax
// 0077e337  83c40c               add esp, 0xc
// 0077e33a  85c0                 test eax, eax
// 0077e33c  7419                 je 0x77e357
// 0077e33e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077e342  85c9                 test ecx, ecx
// 0077e344  7411                 je 0x77e357
// 0077e346  49                   dec ecx
// 0077e347  894604               mov dword ptr [esi + 4], eax
// 0077e34a  890e                 mov dword ptr [esi], ecx
// 0077e34c  0fb608               movzx ecx, byte ptr [eax]
// 0077e34f  40                   inc eax
// 0077e350  894604               mov dword ptr [esi + 4], eax
// 0077e353  8bc1                 mov eax, ecx
// 0077e355  5e                   pop esi
// 0077e356  c3                   ret 
// 0077e357  83c8ff               or eax, 0xffffffff
// 0077e35a  5e                   pop esi
// 0077e35b  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_fill)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
