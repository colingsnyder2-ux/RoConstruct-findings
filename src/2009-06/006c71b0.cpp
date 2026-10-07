// roc 2009-06 006c71b0  unit: seg_006c0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c71b0
//
// 006c71b0  51                   push ecx
// 006c71b1  56                   push esi
// 006c71b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006c71b6  57                   push edi
// 006c71b7  8d442408             lea eax, [esp + 8]
// 006c71bb  50                   push eax
// 006c71bc  6a01                 push 1
// 006c71be  56                   push esi
// 006c71bf  e8fc3affff           call 0x6bacc0
// 006c71c4  6a00                 push 0
// 006c71c6  8bf8                 mov edi, eax
// 006c71c8  57                   push edi
// 006c71c9  6a02                 push 2
// 006c71cb  56                   push esi
// 006c71cc  e84f3bffff           call 0x6bad20
// 006c71d1  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006c71d5  50                   push eax
// 006c71d6  51                   push ecx
// 006c71d7  57                   push edi
// 006c71d8  56                   push esi
// 006c71d9  e88238ffff           call 0x6baa60
// 006c71de  83c42c               add esp, 0x2c
// 006c71e1  85c0                 test eax, eax
// 006c71e3  7509                 jne 0x6c71ee
// 006c71e5  5f                   pop edi
// 006c71e6  b801000000           mov eax, 1
// 006c71eb  5e                   pop esi
// 006c71ec  59                   pop ecx
// 006c71ed  c3                   ret 
// 006c71ee  56                   push esi
// 006c71ef  e82c21ffff           call 0x6b9320
// 006c71f4  6afe                 push -2
// 006c71f6  56                   push esi
// 006c71f7  e8341cffff           call 0x6b8e30
// 006c71fc  83c40c               add esp, 0xc
// 006c71ff  5f                   pop edi
// 006c7200  b802000000           mov eax, 2
// 006c7205  5e                   pop esi
// 006c7206  59                   pop ecx
// 006c7207  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
