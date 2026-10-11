// roc 2008-06 0061c8c0  unit: RBX::Lua::LuaArguments  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061c8c0
//
// 0061c8c0  64a100000000         mov eax, dword ptr fs:[0]
// 0061c8c6  6aff                 push -1
// 0061c8c8  68b9fe7c00           push 0x7cfeb9
// 0061c8cd  50                   push eax
// 0061c8ce  64892500000000       mov dword ptr fs:[0], esp
// 0061c8d5  83ec44               sub esp, 0x44
// 0061c8d8  56                   push esi
// 0061c8d9  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0061c8dd  b904728200           mov ecx, 0x827204
// 0061c8e2  8bc6                 mov eax, esi
// 0061c8e4  8a10                 mov dl, byte ptr [eax]
// 0061c8e6  3a11                 cmp dl, byte ptr [ecx]
// 0061c8e8  751a                 jne 0x61c904
// 0061c8ea  84d2                 test dl, dl
// 0061c8ec  7412                 je 0x61c900
// 0061c8ee  8a5001               mov dl, byte ptr [eax + 1]
// 0061c8f1  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061c8f4  750e                 jne 0x61c904
// 0061c8f6  83c002               add eax, 2
// 0061c8f9  83c102               add ecx, 2
// 0061c8fc  84d2                 test dl, dl
// 0061c8fe  75e4                 jne 0x61c8e4
// 0061c900  33c0                 xor eax, eax
// 0061c902  eb05                 jmp 0x61c909
// 0061c904  1bc0                 sbb eax, eax
// 0061c906  83d8ff               sbb eax, -1
// 0061c909  85c0                 test eax, eax
// 0061c90b  752e                 jne 0x61c93b
// 0061c90d  8b442458             mov eax, dword ptr [esp + 0x58]
// 0061c911  d900                 fld dword ptr [eax]
// 0061c913  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0061c917  83ec08               sub esp, 8
// 0061c91a  dd1c24               fstp qword ptr [esp]
// 0061c91d  51                   push ecx
// 0061c91e  e8dd58ffff           call 0x612200
// 0061c923  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0061c927  83c40c               add esp, 0xc
// 0061c92a  b801000000           mov eax, 1
// 0061c92f  5e                   pop esi
// 0061c930  64890d00000000       mov dword ptr fs:[0], ecx
// 0061c937  83c450               add esp, 0x50
// 0061c93a  c3                   ret 
// 0061c93b  b994448400           mov ecx, 0x844494
// 0061c940  8bc6                 mov eax, esi
// 0061c942  8a10                 mov dl, byte ptr [eax]
// 0061c944  3a11                 cmp dl, byte ptr [ecx]
// 0061c946  751a                 jne 0x61c962
// 0061c948  84d2                 test dl, dl
// 0061c94a  7412                 je 0x61c95e
// 0061c94c  8a5001               mov dl, byte ptr [eax + 1]
// 0061c94f  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061c952  750e                 jne 0x61c962
// 0061c954  83c002               add eax, 2
// 0061c957  83c102               add ecx, 2
// 0061c95a  84d2                 test dl, dl
// 0061c95c  75e4                 jne 0x61c942
// 0061c95e  33c0                 xor eax, eax
// 0061c960  eb05                 jmp 0x61c967
// 0061c962  1bc0                 sbb eax, eax
// 0061c964  83d8ff               sbb eax, -1
// 0061c967  85c0                 test eax, eax
// 0061c969  7514                 jne 0x61c97f
// 0061c96b  8b542458             mov edx, dword ptr [esp + 0x58]
// 0061c96f  d94204               fld dword ptr [edx + 4]
// 0061c972  8b442460             mov eax, dword ptr [esp + 0x60]
// 0061c976  83ec08               sub esp, 8
// 0061c979  dd1c24               fstp qword ptr [esp]
// 0061c97c  50                   push eax
// 0061c97d  eb9f                 jmp 0x61c91e
// 0061c97f  b990448400           mov ecx, 0x844490
// 0061c984  8bc6                 mov eax, esi
// 0061c986  8a10                 mov dl, byte ptr [eax]
// 0061c988  3a11                 cmp dl, byte ptr [ecx]
// 0061c98a  751a                 jne 0x61c9a6
// 0061c98c  84d2                 test dl, dl
// 0061c98e  7412                 je 0x61c9a2
// 0061c990  8a5001               mov dl, byte ptr [eax + 1]
// 0061c993  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061c996  750e                 jne 0x61c9a6
// 0061c998  83c002               add eax, 2
// 0061c99b  83c102               add ecx, 2
// 0061c99e  84d2                 test dl, dl
// 0061c9a0  75e4                 jne 0x61c986
// 0061c9a2  33c0                 xor eax, eax
// 0061c9a4  eb05                 jmp 0x61c9ab
// 0061c9a6  1bc0                 sbb eax, eax
// 0061c9a8  83d8ff               sbb eax, -1
// 0061c9ab  85c0                 test eax, eax
// 0061c9ad  7517                 jne 0x61c9c6
// 0061c9af  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061c9b3  d94108               fld dword ptr [ecx + 8]
// 0061c9b6  8b542460             mov edx, dword ptr [esp + 0x60]
// 0061c9ba  83ec08               sub esp, 8
// 0061c9bd  dd1c24               fstp qword ptr [esp]
// 0061c9c0  52                   push edx
// 0061c9c1  e958ffffff           jmp 0x61c91e
// 0061c9c6  56                   push esi
// 0061c9c7  8d442408             lea eax, [esp + 8]
// 0061c9cb  6808228300           push 0x832208
// 0061c9d0  50                   push eax
// 0061c9d1  e83ad1eeff           call 0x509b10
// 0061c9d6  83c40c               add esp, 0xc
// 0061c9d9  50                   push eax
// 0061c9da  8d4c2424             lea ecx, [esp + 0x24]
// 0061c9de  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0061c9e6  e865d3deff           call 0x409d50
// 0061c9eb  68c81b8d00           push 0x8d1bc8
// 0061c9f0  8d4c2424             lea ecx, [esp + 0x24]
// 0061c9f4  51                   push ecx
// 0061c9f5  e8924b0800           call 0x6a158c
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_index@?$Bridge@VColor3@G3D@@$00@Lua@RBX@@KAHABVColor3@G3D@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
