// from server: 100% by auto
// roc 2012-06 009368c0  unit: seg_00930000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009368c0
//
// 009368c0  56                   push esi
// 009368c1  8b742408             mov esi, dword ptr [esp + 8]
// 009368c5  833e00               cmp dword ptr [esi], 0
// 009368c8  753f                 jne 0x936909
// 009368ca  8b560c               mov edx, dword ptr [esi + 0xc]
// 009368cd  8b4610               mov eax, dword ptr [esi + 0x10]
// 009368d0  8d4c2408             lea ecx, [esp + 8]
// 009368d4  51                   push ecx
// 009368d5  52                   push edx
// 009368d6  50                   push eax
// 009368d7  8b4608               mov eax, dword ptr [esi + 8]
// 009368da  ffd0                 call eax
// 009368dc  83c40c               add esp, 0xc
// 009368df  85c0                 test eax, eax
// 009368e1  741a                 je 0x9368fd
// 009368e3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009368e7  85c9                 test ecx, ecx
// 009368e9  7412                 je 0x9368fd
// 009368eb  49                   dec ecx
// 009368ec  894604               mov dword ptr [esi + 4], eax
// 009368ef  890e                 mov dword ptr [esi], ecx
// 009368f1  0fb610               movzx edx, byte ptr [eax]
// 009368f4  40                   inc eax
// 009368f5  894604               mov dword ptr [esi + 4], eax
// 009368f8  83faff               cmp edx, -1
// 009368fb  7505                 jne 0x936902
// 009368fd  83c8ff               or eax, 0xffffffff
// 00936900  5e                   pop esi
// 00936901  c3                   ret 
// 00936902  41                   inc ecx
// 00936903  48                   dec eax
// 00936904  890e                 mov dword ptr [esi], ecx
// 00936906  894604               mov dword ptr [esi + 4], eax
// 00936909  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093690c  0fb601               movzx eax, byte ptr [ecx]
// 0093690f  5e                   pop esi
// 00936910  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
