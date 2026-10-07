// roc 2009-06 006ed080  unit: seg_006e0000  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ed080
//
// 006ed080  56                   push esi
// 006ed081  8b742408             mov esi, dword ptr [esp + 8]
// 006ed085  8b560c               mov edx, dword ptr [esi + 0xc]
// 006ed088  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ed08b  8d4c2408             lea ecx, [esp + 8]
// 006ed08f  51                   push ecx
// 006ed090  52                   push edx
// 006ed091  50                   push eax
// 006ed092  8b4608               mov eax, dword ptr [esi + 8]
// 006ed095  ffd0                 call eax
// 006ed097  83c40c               add esp, 0xc
// 006ed09a  85c0                 test eax, eax
// 006ed09c  7419                 je 0x6ed0b7
// 006ed09e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ed0a2  85c9                 test ecx, ecx
// 006ed0a4  7411                 je 0x6ed0b7
// 006ed0a6  49                   dec ecx
// 006ed0a7  894604               mov dword ptr [esi + 4], eax
// 006ed0aa  890e                 mov dword ptr [esi], ecx
// 006ed0ac  0fb608               movzx ecx, byte ptr [eax]
// 006ed0af  40                   inc eax
// 006ed0b0  894604               mov dword ptr [esi + 4], eax
// 006ed0b3  8bc1                 mov eax, ecx
// 006ed0b5  5e                   pop esi
// 006ed0b6  c3                   ret 
// 006ed0b7  83c8ff               or eax, 0xffffffff
// 006ed0ba  5e                   pop esi
// 006ed0bb  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_fill)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
