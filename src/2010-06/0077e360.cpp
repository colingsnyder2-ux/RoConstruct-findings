// roc 2010-06 0077e360  unit: seg_00770000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077e360
//
// 0077e360  56                   push esi
// 0077e361  8b742408             mov esi, dword ptr [esp + 8]
// 0077e365  833e00               cmp dword ptr [esi], 0
// 0077e368  753f                 jne 0x77e3a9
// 0077e36a  8b560c               mov edx, dword ptr [esi + 0xc]
// 0077e36d  8b4610               mov eax, dword ptr [esi + 0x10]
// 0077e370  8d4c2408             lea ecx, [esp + 8]
// 0077e374  51                   push ecx
// 0077e375  52                   push edx
// 0077e376  50                   push eax
// 0077e377  8b4608               mov eax, dword ptr [esi + 8]
// 0077e37a  ffd0                 call eax
// 0077e37c  83c40c               add esp, 0xc
// 0077e37f  85c0                 test eax, eax
// 0077e381  741a                 je 0x77e39d
// 0077e383  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0077e387  85c9                 test ecx, ecx
// 0077e389  7412                 je 0x77e39d
// 0077e38b  49                   dec ecx
// 0077e38c  894604               mov dword ptr [esi + 4], eax
// 0077e38f  890e                 mov dword ptr [esi], ecx
// 0077e391  0fb610               movzx edx, byte ptr [eax]
// 0077e394  40                   inc eax
// 0077e395  894604               mov dword ptr [esi + 4], eax
// 0077e398  83faff               cmp edx, -1
// 0077e39b  7505                 jne 0x77e3a2
// 0077e39d  83c8ff               or eax, 0xffffffff
// 0077e3a0  5e                   pop esi
// 0077e3a1  c3                   ret 
// 0077e3a2  41                   inc ecx
// 0077e3a3  48                   dec eax
// 0077e3a4  890e                 mov dword ptr [esi], ecx
// 0077e3a6  894604               mov dword ptr [esi + 4], eax
// 0077e3a9  8b4e04               mov ecx, dword ptr [esi + 4]
// 0077e3ac  0fb601               movzx eax, byte ptr [ecx]
// 0077e3af  5e                   pop esi
// 0077e3b0  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_lookahead)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
