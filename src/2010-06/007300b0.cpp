// roc 2010-06 007300b0  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007300b0
//
// 007300b0  83ec18               sub esp, 0x18
// 007300b3  56                   push esi
// 007300b4  8b742420             mov esi, dword ptr [esp + 0x20]
// 007300b8  8b4670               mov eax, dword ptr [esi + 0x70]
// 007300bb  85c0                 test eax, eax
// 007300bd  743a                 je 0x7300f9
// 007300bf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007300c3  894808               mov dword ptr [eax + 8], ecx
// 007300c6  57                   push edi
// 007300c7  8b7e70               mov edi, dword ptr [esi + 0x70]
// 007300ca  8d4c2408             lea ecx, [esp + 8]
// 007300ce  ff1518a99e00         call dword ptr [0x9ea918]
// 007300d4  68b806b400           push 0xb406b8
// 007300d9  8d54240c             lea edx, [esp + 0xc]
// 007300dd  52                   push edx
// 007300de  c7442410e0dba400     mov dword ptr [esp + 0x10], 0xa4dbe0
// 007300e6  8974241c             mov dword ptr [esp + 0x1c], esi
// 007300ea  897c2420             mov dword ptr [esp + 0x20], edi
// 007300ee  c644242400           mov byte ptr [esp + 0x24], 0
// 007300f3  e8ba880700           call 0x7a89b2
// 007300f8  5f                   pop edi
// 007300f9  8b442424             mov eax, dword ptr [esp + 0x24]
// 007300fd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00730100  884606               mov byte ptr [esi + 6], al
// 00730103  83795800             cmp dword ptr [ecx + 0x58], 0
// 00730107  7412                 je 0x73011b
// 00730109  50                   push eax
// 0073010a  e821ffffff           call 0x730030
// 0073010f  8b5610               mov edx, dword ptr [esi + 0x10]
// 00730112  8b4258               mov eax, dword ptr [edx + 0x58]
// 00730115  56                   push esi
// 00730116  ffd0                 call eax
// 00730118  83c408               add esp, 8
// 0073011b  6a01                 push 1
// 0073011d  ff1550a79e00         call dword ptr [0x9ea750]
// copied from an identical function in another client (function ?luaD_throw@@YAXPAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp