// roc 2007-03 005c0200  unit: seg_005c0000  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0200
//
// 005c0200  83ec18               sub esp, 0x18
// 005c0203  56                   push esi
// 005c0204  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c0208  8b4670               mov eax, dword ptr [esi + 0x70]
// 005c020b  85c0                 test eax, eax
// 005c020d  743a                 je 0x5c0249
// 005c020f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005c0213  894808               mov dword ptr [eax + 8], ecx
// 005c0216  57                   push edi
// 005c0217  8b7e70               mov edi, dword ptr [esi + 0x70]
// 005c021a  8d4c2408             lea ecx, [esp + 8]
// 005c021e  ff1560e97700         call dword ptr [0x77e960]
// 005c0224  68001d8600           push 0x861d00
// 005c0229  8d54240c             lea edx, [esp + 0xc]
// 005c022d  52                   push edx
// 005c022e  c74424100c977b00     mov dword ptr [esp + 0x10], 0x7b970c
// 005c0236  8974241c             mov dword ptr [esp + 0x1c], esi
// 005c023a  897c2420             mov dword ptr [esp + 0x20], edi
// 005c023e  c644242400           mov byte ptr [esp + 0x24], 0
// 005c0243  e8e6ed0500           call 0x61f02e
// 005c0248  5f                   pop edi
// 005c0249  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c024d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005c0250  884606               mov byte ptr [esi + 6], al
// 005c0253  83795800             cmp dword ptr [ecx + 0x58], 0
// 005c0257  7412                 je 0x5c026b
// 005c0259  50                   push eax
// 005c025a  e831ffffff           call 0x5c0190
// 005c025f  8b5610               mov edx, dword ptr [esi + 0x10]
// 005c0262  8b4258               mov eax, dword ptr [edx + 0x58]
// 005c0265  56                   push esi
// 005c0266  ffd0                 call eax
// 005c0268  83c408               add esp, 8
// 005c026b  6a01                 push 1
// 005c026d  ff15f8e97700         call dword ptr [0x77e9f8]
// copied from an identical function in another client (function ?luaD_throw@@YAXPAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp