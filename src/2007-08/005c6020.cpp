// roc 2007-08 005c6020  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6020
//
// 005c6020  83ec18               sub esp, 0x18
// 005c6023  56                   push esi
// 005c6024  8b742420             mov esi, dword ptr [esp + 0x20]
// 005c6028  8b4670               mov eax, dword ptr [esi + 0x70]
// 005c602b  85c0                 test eax, eax
// 005c602d  743a                 je 0x5c6069
// 005c602f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005c6033  894808               mov dword ptr [eax + 8], ecx
// 005c6036  57                   push edi
// 005c6037  8b7e70               mov edi, dword ptr [esi + 0x70]
// 005c603a  8d4c2408             lea ecx, [esp + 8]
// 005c603e  ff15f8e67700         call dword ptr [0x77e6f8]
// 005c6044  6878438600           push 0x864378
// 005c6049  8d54240c             lea edx, [esp + 0xc]
// 005c604d  52                   push edx
// 005c604e  c74424107c967b00     mov dword ptr [esp + 0x10], 0x7b967c
// 005c6056  8974241c             mov dword ptr [esp + 0x1c], esi
// 005c605a  897c2420             mov dword ptr [esp + 0x20], edi
// 005c605e  c644242400           mov byte ptr [esp + 0x24], 0
// 005c6063  e836ab0600           call 0x630b9e
// 005c6068  5f                   pop edi
// 005c6069  8b442424             mov eax, dword ptr [esp + 0x24]
// 005c606d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005c6070  884606               mov byte ptr [esi + 6], al
// 005c6073  83795800             cmp dword ptr [ecx + 0x58], 0
// 005c6077  7412                 je 0x5c608b
// 005c6079  50                   push eax
// 005c607a  e831ffffff           call 0x5c5fb0
// 005c607f  8b5610               mov edx, dword ptr [esi + 0x10]
// 005c6082  8b4258               mov eax, dword ptr [edx + 0x58]
// 005c6085  56                   push esi
// 005c6086  ffd0                 call eax
// 005c6088  83c408               add esp, 8
// 005c608b  6a01                 push 1
// 005c608d  ff1538e97700         call dword ptr [0x77e938]
// copied from an identical function in another client (function ?luaD_throw@@YAXPAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp