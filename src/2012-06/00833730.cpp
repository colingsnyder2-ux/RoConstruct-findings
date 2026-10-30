// from server: 100% by auto
// roc 2012-06 00833730  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833730
//
// 00833730  83ec64               sub esp, 0x64
// 00833733  56                   push esi
// 00833734  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00833738  8d442404             lea eax, [esp + 4]
// 0083373c  50                   push eax
// 0083373d  6a00                 push 0
// 0083373f  56                   push esi
// 00833740  e81bcc0100           call 0x850360
// 00833745  83c40c               add esp, 0xc
// 00833748  85c0                 test eax, eax
// 0083374a  751d                 jne 0x833769
// 0083374c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00833750  8b542470             mov edx, dword ptr [esp + 0x70]
// 00833754  51                   push ecx
// 00833755  52                   push edx
// 00833756  68bc0abd00           push 0xbd0abc
// 0083375b  56                   push esi
// 0083375c  e83ff7ffff           call 0x832ea0
// 00833761  83c410               add esp, 0x10
// 00833764  5e                   pop esi
// 00833765  83c464               add esp, 0x64
// 00833768  c3                   ret 
// 00833769  8d442404             lea eax, [esp + 4]
// 0083376d  50                   push eax
// 0083376e  688871b400           push 0xb47188
// 00833773  56                   push esi
// 00833774  e817d90100           call 0x851090
// 00833779  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083377d  83c40c               add esp, 0xc
// 00833780  b9b40abd00           mov ecx, 0xbd0ab4
// 00833785  8a10                 mov dl, byte ptr [eax]
// 00833787  3a11                 cmp dl, byte ptr [ecx]
// 00833789  751a                 jne 0x8337a5
// 0083378b  84d2                 test dl, dl
// 0083378d  7412                 je 0x8337a1
// 0083378f  8a5001               mov dl, byte ptr [eax + 1]
// 00833792  3a5101               cmp dl, byte ptr [ecx + 1]
// 00833795  750e                 jne 0x8337a5
// 00833797  83c002               add eax, 2
// 0083379a  83c102               add ecx, 2
// 0083379d  84d2                 test dl, dl
// 0083379f  75e4                 jne 0x833785
// 008337a1  33c0                 xor eax, eax
// 008337a3  eb05                 jmp 0x8337aa
// 008337a5  1bc0                 sbb eax, eax
// 008337a7  83d8ff               sbb eax, -1
// 008337aa  85c0                 test eax, eax
// 008337ac  7524                 jne 0x8337d2
// 008337ae  836c247001           sub dword ptr [esp + 0x70], 1
// 008337b3  751d                 jne 0x8337d2
// 008337b5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008337b9  8b542408             mov edx, dword ptr [esp + 8]
// 008337bd  51                   push ecx
// 008337be  52                   push edx
// 008337bf  68940abd00           push 0xbd0a94
// 008337c4  56                   push esi
// 008337c5  e8d6f6ffff           call 0x832ea0
// 008337ca  83c410               add esp, 0x10
// 008337cd  5e                   pop esi
// 008337ce  83c464               add esp, 0x64
// 008337d1  c3                   ret 
// 008337d2  8b442408             mov eax, dword ptr [esp + 8]
// 008337d6  85c0                 test eax, eax
// 008337d8  7509                 jne 0x8337e3
// 008337da  b82870b700           mov eax, 0xb77028
// 008337df  89442408             mov dword ptr [esp + 8], eax
// 008337e3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008337e7  8b542470             mov edx, dword ptr [esp + 0x70]
// 008337eb  51                   push ecx
// 008337ec  50                   push eax
// 008337ed  52                   push edx
// 008337ee  68740abd00           push 0xbd0a74
// 008337f3  56                   push esi
// 008337f4  e8a7f6ffff           call 0x832ea0
// 008337f9  83c414               add esp, 0x14
// 008337fc  5e                   pop esi
// 008337fd  83c464               add esp, 0x64
// 00833800  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_argerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
