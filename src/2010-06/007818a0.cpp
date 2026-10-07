// roc 2010-06 007818a0  unit: seg_00780000  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007818a0
//
// 007818a0  81ec84020000         sub esp, 0x284
// 007818a6  8b842490020000       mov eax, dword ptr [esp + 0x290]
// 007818ad  8b942494020000       mov edx, dword ptr [esp + 0x294]
// 007818b4  53                   push ebx
// 007818b5  89442440             mov dword ptr [esp + 0x40], eax
// 007818b9  8bc2                 mov eax, edx
// 007818bb  56                   push esi
// 007818bc  8d7001               lea esi, [eax + 1]
// 007818bf  90                   nop 
// 007818c0  8a08                 mov cl, byte ptr [eax]
// 007818c2  40                   inc eax
// 007818c3  84c9                 test cl, cl
// 007818c5  75f9                 jne 0x7818c0
// 007818c7  2bc6                 sub eax, esi
// 007818c9  8bb42490020000       mov esi, dword ptr [esp + 0x290]
// 007818d0  50                   push eax
// 007818d1  52                   push edx
// 007818d2  56                   push esi
// 007818d3  e808c5ffff           call 0x77dde0
// 007818d8  8b8c24a0020000       mov ecx, dword ptr [esp + 0x2a0]
// 007818df  50                   push eax
// 007818e0  51                   push ecx
// 007818e1  8d54241c             lea edx, [esp + 0x1c]
// 007818e5  52                   push edx
// 007818e6  56                   push esi
// 007818e7  e8a40d0000           call 0x782690
// 007818ec  8d44246c             lea eax, [esp + 0x6c]
// 007818f0  8d5c2424             lea ebx, [esp + 0x24]
// 007818f4  e887d8ffff           call 0x77f180
// 007818f9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007818fd  8bcb                 mov ecx, ebx
// 007818ff  51                   push ecx
// 00781900  c6404a02             mov byte ptr [eax + 0x4a], 2
// 00781904  e877200000           call 0x783980
// 00781909  8bd3                 mov edx, ebx
// 0078190b  52                   push edx
// 0078190c  e8dffeffff           call 0x7817f0
// 00781911  83c424               add esp, 0x24
// 00781914  817c24181f010000     cmp dword ptr [esp + 0x18], 0x11f
// 0078191c  5e                   pop esi
// 0078191d  5b                   pop ebx
// 0078191e  742c                 je 0x78194c
// 00781920  8d0424               lea eax, [esp]
// 00781923  681f010000           push 0x11f
// 00781928  50                   push eax
// 00781929  e8620b0000           call 0x782490
// 0078192e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00781932  50                   push eax
// 00781933  683830a500           push 0xa53038
// 00781938  51                   push ecx
// 00781939  e8a214fbff           call 0x732de0
// 0078193e  50                   push eax
// 0078193f  8d542418             lea edx, [esp + 0x18]
// 00781943  52                   push edx
// 00781944  e8470c0000           call 0x782590
// 00781949  83c41c               add esp, 0x1c
// 0078194c  8d0424               lea eax, [esp]
// 0078194f  50                   push eax
// 00781950  e8dbd8ffff           call 0x77f230
// 00781955  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00781959  81c488020000         add esp, 0x288
// 0078195f  c3                   ret 
// library lua-5.1.4/lparser.c (function _luaY_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
