// roc 2011-06 00763fa0  unit: seg_00760000  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00763fa0
//
// 00763fa0  83ec64               sub esp, 0x64
// 00763fa3  56                   push esi
// 00763fa4  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00763fa8  8d442404             lea eax, [esp + 4]
// 00763fac  50                   push eax
// 00763fad  6a00                 push 0
// 00763faf  56                   push esi
// 00763fb0  e88b900100           call 0x77d040
// 00763fb5  83c40c               add esp, 0xc
// 00763fb8  85c0                 test eax, eax
// 00763fba  751d                 jne 0x763fd9
// 00763fbc  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00763fc0  8b542470             mov edx, dword ptr [esp + 0x70]
// 00763fc4  51                   push ecx
// 00763fc5  52                   push edx
// 00763fc6  689865ab00           push 0xab6598
// 00763fcb  56                   push esi
// 00763fcc  e83ff7ffff           call 0x763710
// 00763fd1  83c410               add esp, 0x10
// 00763fd4  5e                   pop esi
// 00763fd5  83c464               add esp, 0x64
// 00763fd8  c3                   ret 
// 00763fd9  8d442404             lea eax, [esp + 4]
// 00763fdd  50                   push eax
// 00763fde  68e4eaa500           push 0xa5eae4
// 00763fe3  56                   push esi
// 00763fe4  e8879d0100           call 0x77dd70
// 00763fe9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00763fed  83c40c               add esp, 0xc
// 00763ff0  b99065ab00           mov ecx, 0xab6590
// 00763ff5  8a10                 mov dl, byte ptr [eax]
// 00763ff7  3a11                 cmp dl, byte ptr [ecx]
// 00763ff9  751a                 jne 0x764015
// 00763ffb  84d2                 test dl, dl
// 00763ffd  7412                 je 0x764011
// 00763fff  8a5001               mov dl, byte ptr [eax + 1]
// 00764002  3a5101               cmp dl, byte ptr [ecx + 1]
// 00764005  750e                 jne 0x764015
// 00764007  83c002               add eax, 2
// 0076400a  83c102               add ecx, 2
// 0076400d  84d2                 test dl, dl
// 0076400f  75e4                 jne 0x763ff5
// 00764011  33c0                 xor eax, eax
// 00764013  eb05                 jmp 0x76401a
// 00764015  1bc0                 sbb eax, eax
// 00764017  83d8ff               sbb eax, -1
// 0076401a  85c0                 test eax, eax
// 0076401c  7524                 jne 0x764042
// 0076401e  836c247001           sub dword ptr [esp + 0x70], 1
// 00764023  751d                 jne 0x764042
// 00764025  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00764029  8b542408             mov edx, dword ptr [esp + 8]
// 0076402d  51                   push ecx
// 0076402e  52                   push edx
// 0076402f  687065ab00           push 0xab6570
// 00764034  56                   push esi
// 00764035  e8d6f6ffff           call 0x763710
// 0076403a  83c410               add esp, 0x10
// 0076403d  5e                   pop esi
// 0076403e  83c464               add esp, 0x64
// 00764041  c3                   ret 
// 00764042  8b442408             mov eax, dword ptr [esp + 8]
// 00764046  85c0                 test eax, eax
// 00764048  7509                 jne 0x764053
// 0076404a  b8d0bca700           mov eax, 0xa7bcd0
// 0076404f  89442408             mov dword ptr [esp + 8], eax
// 00764053  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00764057  8b542470             mov edx, dword ptr [esp + 0x70]
// 0076405b  51                   push ecx
// 0076405c  50                   push eax
// 0076405d  52                   push edx
// 0076405e  685065ab00           push 0xab6550
// 00764063  56                   push esi
// 00764064  e8a7f6ffff           call 0x763710
// 00764069  83c414               add esp, 0x14
// 0076406c  5e                   pop esi
// 0076406d  83c464               add esp, 0x64
// 00764070  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_argerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
