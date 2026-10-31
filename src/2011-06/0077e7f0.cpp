// roc 2011-06 0077e7f0  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e7f0
//
// 0077e7f0  83ec18               sub esp, 0x18
// 0077e7f3  56                   push esi
// 0077e7f4  8b742420             mov esi, dword ptr [esp + 0x20]
// 0077e7f8  8b4670               mov eax, dword ptr [esi + 0x70]
// 0077e7fb  85c0                 test eax, eax
// 0077e7fd  743a                 je 0x77e839
// 0077e7ff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0077e803  894808               mov dword ptr [eax + 8], ecx
// 0077e806  57                   push edi
// 0077e807  8b7e70               mov edi, dword ptr [esi + 0x70]
// 0077e80a  8d4c2408             lea ecx, [esp + 8]
// 0077e80e  ff15600aa400         call dword ptr [0xa40a60]
// 0077e814  68bcb4bc00           push 0xbcb4bc
// 0077e819  8d54240c             lea edx, [esp + 0xc]
// 0077e81d  52                   push edx
// 0077e81e  c74424102c78ab00     mov dword ptr [esp + 0x10], 0xab782c
// 0077e826  8974241c             mov dword ptr [esp + 0x1c], esi
// 0077e82a  897c2420             mov dword ptr [esp + 0x20], edi
// 0077e82e  c644242400           mov byte ptr [esp + 0x24], 0
// 0077e833  e874c80800           call 0x80b0ac
// 0077e838  5f                   pop edi
// 0077e839  8b442424             mov eax, dword ptr [esp + 0x24]
// 0077e83d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0077e840  884606               mov byte ptr [esi + 6], al
// 0077e843  83795800             cmp dword ptr [ecx + 0x58], 0
// 0077e847  7412                 je 0x77e85b
// 0077e849  50                   push eax
// 0077e84a  e821ffffff           call 0x77e770
// 0077e84f  8b5610               mov edx, dword ptr [esi + 0x10]
// 0077e852  8b4258               mov eax, dword ptr [edx + 0x58]
// 0077e855  56                   push esi
// 0077e856  ffd0                 call eax
// 0077e858  83c408               add esp, 8
// 0077e85b  6a01                 push 1
// 0077e85d  ff155409a400         call dword ptr [0xa40954]
// copied from an identical function in another client (function ?luaD_throw@@YAXPAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp