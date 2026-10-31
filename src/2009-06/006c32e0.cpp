// roc 2009-06 006c32e0  unit: lua_exception  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c32e0
//
// 006c32e0  83ec18               sub esp, 0x18
// 006c32e3  56                   push esi
// 006c32e4  8b742420             mov esi, dword ptr [esp + 0x20]
// 006c32e8  8b4670               mov eax, dword ptr [esi + 0x70]
// 006c32eb  85c0                 test eax, eax
// 006c32ed  743a                 je 0x6c3329
// 006c32ef  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c32f3  894808               mov dword ptr [eax + 8], ecx
// 006c32f6  57                   push edi
// 006c32f7  8b7e70               mov edi, dword ptr [esi + 0x70]
// 006c32fa  8d4c2408             lea ecx, [esp + 8]
// 006c32fe  ff15b8e98900         call dword ptr [0x89e9b8]
// 006c3304  6870dd9a00           push 0x9add70
// 006c3309  8d54240c             lea edx, [esp + 0xc]
// 006c330d  52                   push edx
// 006c330e  c7442410acb68e00     mov dword ptr [esp + 0x10], 0x8eb6ac
// 006c3316  8974241c             mov dword ptr [esp + 0x1c], esi
// 006c331a  897c2420             mov dword ptr [esp + 0x20], edi
// 006c331e  c644242400           mov byte ptr [esp + 0x24], 0
// 006c3323  e822670500           call 0x719a4a
// 006c3328  5f                   pop edi
// 006c3329  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c332d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c3330  884606               mov byte ptr [esi + 6], al
// 006c3333  83795800             cmp dword ptr [ecx + 0x58], 0
// 006c3337  7412                 je 0x6c334b
// 006c3339  50                   push eax
// 006c333a  e821ffffff           call 0x6c3260
// 006c333f  8b5610               mov edx, dword ptr [esi + 0x10]
// 006c3342  8b4258               mov eax, dword ptr [edx + 0x58]
// 006c3345  56                   push esi
// 006c3346  ffd0                 call eax
// 006c3348  83c408               add esp, 8
// 006c334b  6a01                 push 1
// 006c334d  ff15bce88900         call dword ptr [0x89e8bc]
// copied from an identical function in another client (function ?luaD_throw@@YAXPAUlua_State@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: lua-5.1.2-dll roc_unit_6878e048cc528e62.cpp