// roc 2009-12 00797850  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00797850
//
// 00797850  83ec18               sub esp, 0x18
// 00797853  56                   push esi
// 00797854  8b742420             mov esi, dword ptr [esp + 0x20]
// 00797858  8b4670               mov eax, dword ptr [esi + 0x70]
// 0079785b  85c0                 test eax, eax
// 0079785d  743a                 je 0x797899
// 0079785f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00797863  894808               mov dword ptr [eax + 8], ecx
// 00797866  57                   push edi
// 00797867  8b7e70               mov edi, dword ptr [esi + 0x70]
// 0079786a  8d4c2408             lea ecx, [esp + 8]
// 0079786e  ff1554b79800         call dword ptr [0x98b754]
// 00797874  684009ad00           push 0xad0940
// 00797879  8d54240c             lea edx, [esp + 0xc]
// 0079787d  52                   push edx
// 0079787e  c744241090a99e00     mov dword ptr [esp + 0x10], 0x9ea990
// 00797886  8974241c             mov dword ptr [esp + 0x1c], esi
// 0079788a  897c2420             mov dword ptr [esp + 0x20], edi
// 0079788e  c644242400           mov byte ptr [esp + 0x24], 0
// 00797893  e8e0cf0500           call 0x7f4878
// 00797898  5f                   pop edi
// 00797899  8b442424             mov eax, dword ptr [esp + 0x24]
// 0079789d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007978a0  884606               mov byte ptr [esi + 6], al
// 007978a3  83795800             cmp dword ptr [ecx + 0x58], 0
// 007978a7  7412                 je 0x7978bb
// 007978a9  50                   push eax
// 007978aa  e821ffffff           call 0x7977d0
// 007978af  8b5610               mov edx, dword ptr [esi + 0x10]
// 007978b2  8b4258               mov eax, dword ptr [edx + 0x58]
// 007978b5  56                   push esi
// 007978b6  ffd0                 call eax
// 007978b8  83c408               add esp, 8
// 007978bb  6a01                 push 1
// 007978bd  ff1560b89800         call dword ptr [0x98b860]
// copied from an identical function in another client (function ?luaD_throw@@YAXPAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp