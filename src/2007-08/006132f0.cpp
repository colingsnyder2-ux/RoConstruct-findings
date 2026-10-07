// roc 2007-08 006132f0  unit: seg_00610000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006132f0
//
// 006132f0  56                   push esi
// 006132f1  8b742408             mov esi, dword ptr [esp + 8]
// 006132f5  8b560c               mov edx, dword ptr [esi + 0xc]
// 006132f8  8b4610               mov eax, dword ptr [esi + 0x10]
// 006132fb  8d4c2408             lea ecx, [esp + 8]
// 006132ff  51                   push ecx
// 00613300  52                   push edx
// 00613301  50                   push eax
// 00613302  8b4608               mov eax, dword ptr [esi + 8]
// 00613305  ffd0                 call eax
// 00613307  83c40c               add esp, 0xc
// 0061330a  85c0                 test eax, eax
// 0061330c  741d                 je 0x61332b
// 0061330e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00613312  85c9                 test ecx, ecx
// 00613314  7415                 je 0x61332b
// 00613316  83c1ff               add ecx, -1
// 00613319  894604               mov dword ptr [esi + 4], eax
// 0061331c  890e                 mov dword ptr [esi], ecx
// 0061331e  0fb608               movzx ecx, byte ptr [eax]
// 00613321  83c001               add eax, 1
// 00613324  894604               mov dword ptr [esi + 4], eax
// 00613327  8bc1                 mov eax, ecx
// 00613329  5e                   pop esi
// 0061332a  c3                   ret 
// 0061332b  83c8ff               or eax, 0xffffffff
// 0061332e  5e                   pop esi
// 0061332f  c3                   ret 
// library lua-5.1.4/lzio.c (function _luaZ_fill)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lzio.c
