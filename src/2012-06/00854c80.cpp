// roc 2012-06 00854c80  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854c80
//
// 00854c80  83ec18               sub esp, 0x18
// 00854c83  56                   push esi
// 00854c84  8b742420             mov esi, dword ptr [esp + 0x20]
// 00854c88  8b4670               mov eax, dword ptr [esi + 0x70]
// 00854c8b  85c0                 test eax, eax
// 00854c8d  743a                 je 0x854cc9
// 00854c8f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00854c93  894808               mov dword ptr [eax + 8], ecx
// 00854c96  57                   push edi
// 00854c97  8b7e70               mov edi, dword ptr [esi + 0x70]
// 00854c9a  8d4c2408             lea ecx, [esp + 8]
// 00854c9e  ff15dc29b200         call dword ptr [0xb229dc]
// 00854ca4  68081bd200           push 0xd21b08
// 00854ca9  8d54240c             lea edx, [esp + 0xc]
// 00854cad  52                   push edx
// 00854cae  c7442410fc38bd00     mov dword ptr [esp + 0x10], 0xbd38fc
// 00854cb6  8974241c             mov dword ptr [esp + 0x1c], esi
// 00854cba  897c2420             mov dword ptr [esp + 0x20], edi
// 00854cbe  c644242400           mov byte ptr [esp + 0x24], 0
// 00854cc3  e87ce41200           call 0x983144
// 00854cc8  5f                   pop edi
// 00854cc9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00854ccd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00854cd0  884606               mov byte ptr [esi + 6], al
// 00854cd3  83795800             cmp dword ptr [ecx + 0x58], 0
// 00854cd7  7412                 je 0x854ceb
// 00854cd9  50                   push eax
// 00854cda  e821ffffff           call 0x854c00
// 00854cdf  8b5610               mov edx, dword ptr [esi + 0x10]
// 00854ce2  8b4258               mov eax, dword ptr [edx + 0x58]
// 00854ce5  56                   push esi
// 00854ce6  ffd0                 call eax
// 00854ce8  83c408               add esp, 8
// 00854ceb  6a01                 push 1
// 00854ced  ff158029b200         call dword ptr [0xb22980]
// copied from an identical function in another client (function ?luaD_throw@@YAXPAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp