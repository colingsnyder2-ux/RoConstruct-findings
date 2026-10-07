// roc 2010-06 00722d30  unit: RBX::UniversalTool  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722d30
//
// 00722d30  83ec64               sub esp, 0x64
// 00722d33  56                   push esi
// 00722d34  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00722d38  8d442404             lea eax, [esp + 4]
// 00722d3c  50                   push eax
// 00722d3d  6a00                 push 0
// 00722d3f  56                   push esi
// 00722d40  e8bb020100           call 0x733000
// 00722d45  83c40c               add esp, 0xc
// 00722d48  85c0                 test eax, eax
// 00722d4a  751d                 jne 0x722d69
// 00722d4c  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00722d50  8b542470             mov edx, dword ptr [esp + 0x70]
// 00722d54  51                   push ecx
// 00722d55  52                   push edx
// 00722d56  687ccfa400           push 0xa4cf7c
// 00722d5b  56                   push esi
// 00722d5c  e83ff7ffff           call 0x7224a0
// 00722d61  83c410               add esp, 0x10
// 00722d64  5e                   pop esi
// 00722d65  83c464               add esp, 0x64
// 00722d68  c3                   ret 
// 00722d69  8d442404             lea eax, [esp + 4]
// 00722d6d  50                   push eax
// 00722d6e  686030a000           push 0xa03060
// 00722d73  56                   push esi
// 00722d74  e8a70f0100           call 0x733d20
// 00722d79  8b442418             mov eax, dword ptr [esp + 0x18]
// 00722d7d  83c40c               add esp, 0xc
// 00722d80  b974cfa400           mov ecx, 0xa4cf74
// 00722d85  8a10                 mov dl, byte ptr [eax]
// 00722d87  3a11                 cmp dl, byte ptr [ecx]
// 00722d89  751a                 jne 0x722da5
// 00722d8b  84d2                 test dl, dl
// 00722d8d  7412                 je 0x722da1
// 00722d8f  8a5001               mov dl, byte ptr [eax + 1]
// 00722d92  3a5101               cmp dl, byte ptr [ecx + 1]
// 00722d95  750e                 jne 0x722da5
// 00722d97  83c002               add eax, 2
// 00722d9a  83c102               add ecx, 2
// 00722d9d  84d2                 test dl, dl
// 00722d9f  75e4                 jne 0x722d85
// 00722da1  33c0                 xor eax, eax
// 00722da3  eb05                 jmp 0x722daa
// 00722da5  1bc0                 sbb eax, eax
// 00722da7  83d8ff               sbb eax, -1
// 00722daa  85c0                 test eax, eax
// 00722dac  7524                 jne 0x722dd2
// 00722dae  836c247001           sub dword ptr [esp + 0x70], 1
// 00722db3  751d                 jne 0x722dd2
// 00722db5  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00722db9  8b542408             mov edx, dword ptr [esp + 8]
// 00722dbd  51                   push ecx
// 00722dbe  52                   push edx
// 00722dbf  6854cfa400           push 0xa4cf54
// 00722dc4  56                   push esi
// 00722dc5  e8d6f6ffff           call 0x7224a0
// 00722dca  83c410               add esp, 0x10
// 00722dcd  5e                   pop esi
// 00722dce  83c464               add esp, 0x64
// 00722dd1  c3                   ret 
// 00722dd2  8b442408             mov eax, dword ptr [esp + 8]
// 00722dd6  85c0                 test eax, eax
// 00722dd8  7509                 jne 0x722de3
// 00722dda  b808b9a100           mov eax, 0xa1b908
// 00722ddf  89442408             mov dword ptr [esp + 8], eax
// 00722de3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00722de7  8b542470             mov edx, dword ptr [esp + 0x70]
// 00722deb  51                   push ecx
// 00722dec  50                   push eax
// 00722ded  52                   push edx
// 00722dee  6834cfa400           push 0xa4cf34
// 00722df3  56                   push esi
// 00722df4  e8a7f6ffff           call 0x7224a0
// 00722df9  83c414               add esp, 0x14
// 00722dfc  5e                   pop esi
// 00722dfd  83c464               add esp, 0x64
// 00722e00  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_argerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
