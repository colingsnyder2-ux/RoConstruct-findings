// roc 2012-06 00936880  unit: seg_00930000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00936880
//
// 00936880  56                   push esi
// 00936881  8b742408             mov esi, dword ptr [esp + 8]
// 00936885  8b560c               mov edx, dword ptr [esi + 0xc]
// 00936888  8b4610               mov eax, dword ptr [esi + 0x10]
// 0093688b  8d4c2408             lea ecx, [esp + 8]
// 0093688f  51                   push ecx
// 00936890  52                   push edx
// 00936891  50                   push eax
// 00936892  8b4608               mov eax, dword ptr [esi + 8]
// 00936895  ffd0                 call eax
// 00936897  83c40c               add esp, 0xc
// 0093689a  85c0                 test eax, eax
// 0093689c  7419                 je 0x9368b7
// 0093689e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009368a2  85c9                 test ecx, ecx
// 009368a4  7411                 je 0x9368b7
// 009368a6  49                   dec ecx
// 009368a7  894604               mov dword ptr [esi + 4], eax
// 009368aa  890e                 mov dword ptr [esi], ecx
// 009368ac  0fb608               movzx ecx, byte ptr [eax]
// 009368af  40                   inc eax
// 009368b0  894604               mov dword ptr [esi + 4], eax
// 009368b3  8bc1                 mov eax, ecx
// 009368b5  5e                   pop esi
// 009368b6  c3                   ret 
// 009368b7  83c8ff               or eax, 0xffffffff
// 009368ba  5e                   pop esi
// 009368bb  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_fill)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
