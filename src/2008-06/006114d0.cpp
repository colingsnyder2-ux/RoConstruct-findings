// roc 2008-06 006114d0  unit: RBX::BlockBlockContact  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006114d0
//
// 006114d0  83ec64               sub esp, 0x64
// 006114d3  56                   push esi
// 006114d4  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006114d8  8d442404             lea eax, [esp + 4]
// 006114dc  50                   push eax
// 006114dd  6a00                 push 0
// 006114df  56                   push esi
// 006114e0  e8fb170100           call 0x622ce0
// 006114e5  83c40c               add esp, 0xc
// 006114e8  85c0                 test eax, eax
// 006114ea  751d                 jne 0x611509
// 006114ec  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 006114f0  8b542470             mov edx, dword ptr [esp + 0x70]
// 006114f4  51                   push ecx
// 006114f5  52                   push edx
// 006114f6  6808388400           push 0x843808
// 006114fb  56                   push esi
// 006114fc  e85ff7ffff           call 0x610c60
// 00611501  83c410               add esp, 0x10
// 00611504  5e                   pop esi
// 00611505  83c464               add esp, 0x64
// 00611508  c3                   ret 
// 00611509  8d442404             lea eax, [esp + 4]
// 0061150d  50                   push eax
// 0061150e  6804388400           push 0x843804
// 00611513  56                   push esi
// 00611514  e837240100           call 0x623950
// 00611519  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061151d  83c40c               add esp, 0xc
// 00611520  b9fc378400           mov ecx, 0x8437fc
// 00611525  8a10                 mov dl, byte ptr [eax]
// 00611527  3a11                 cmp dl, byte ptr [ecx]
// 00611529  751a                 jne 0x611545
// 0061152b  84d2                 test dl, dl
// 0061152d  7412                 je 0x611541
// 0061152f  8a5001               mov dl, byte ptr [eax + 1]
// 00611532  3a5101               cmp dl, byte ptr [ecx + 1]
// 00611535  750e                 jne 0x611545
// 00611537  83c002               add eax, 2
// 0061153a  83c102               add ecx, 2
// 0061153d  84d2                 test dl, dl
// 0061153f  75e4                 jne 0x611525
// 00611541  33c0                 xor eax, eax
// 00611543  eb05                 jmp 0x61154a
// 00611545  1bc0                 sbb eax, eax
// 00611547  83d8ff               sbb eax, -1
// 0061154a  85c0                 test eax, eax
// 0061154c  7524                 jne 0x611572
// 0061154e  836c247001           sub dword ptr [esp + 0x70], 1
// 00611553  751d                 jne 0x611572
// 00611555  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00611559  8b542408             mov edx, dword ptr [esp + 8]
// 0061155d  51                   push ecx
// 0061155e  52                   push edx
// 0061155f  68dc378400           push 0x8437dc
// 00611564  56                   push esi
// 00611565  e8f6f6ffff           call 0x610c60
// 0061156a  83c410               add esp, 0x10
// 0061156d  5e                   pop esi
// 0061156e  83c464               add esp, 0x64
// 00611571  c3                   ret 
// 00611572  8b442408             mov eax, dword ptr [esp + 8]
// 00611576  85c0                 test eax, eax
// 00611578  7509                 jne 0x611583
// 0061157a  b8109e8100           mov eax, 0x819e10
// 0061157f  89442408             mov dword ptr [esp + 8], eax
// 00611583  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00611587  8b542470             mov edx, dword ptr [esp + 0x70]
// 0061158b  51                   push ecx
// 0061158c  50                   push eax
// 0061158d  52                   push edx
// 0061158e  68bc378400           push 0x8437bc
// 00611593  56                   push esi
// 00611594  e8c7f6ffff           call 0x610c60
// 00611599  83c414               add esp, 0x14
// 0061159c  5e                   pop esi
// 0061159d  83c464               add esp, 0x64
// 006115a0  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_argerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
