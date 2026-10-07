// roc 2010-06 00737820  unit: seg_00730000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00737820
//
// 00737820  51                   push ecx
// 00737821  56                   push esi
// 00737822  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00737826  57                   push edi
// 00737827  8d442408             lea eax, [esp + 8]
// 0073782b  50                   push eax
// 0073782c  6a01                 push 1
// 0073782e  56                   push esi
// 0073782f  e8ecb6feff           call 0x722f20
// 00737834  6a00                 push 0
// 00737836  8bf8                 mov edi, eax
// 00737838  57                   push edi
// 00737839  6a02                 push 2
// 0073783b  56                   push esi
// 0073783c  e83fb7feff           call 0x722f80
// 00737841  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00737845  50                   push eax
// 00737846  51                   push ecx
// 00737847  57                   push edi
// 00737848  56                   push esi
// 00737849  e872b4feff           call 0x722cc0
// 0073784e  83c42c               add esp, 0x2c
// 00737851  85c0                 test eax, eax
// 00737853  7509                 jne 0x73785e
// 00737855  5f                   pop edi
// 00737856  b801000000           mov eax, 1
// 0073785b  5e                   pop esi
// 0073785c  59                   pop ecx
// 0073785d  c3                   ret 
// 0073785e  56                   push esi
// 0073785f  e88c9cfeff           call 0x7214f0
// 00737864  6afe                 push -2
// 00737866  56                   push esi
// 00737867  e89497feff           call 0x721000
// 0073786c  83c40c               add esp, 0xc
// 0073786f  5f                   pop edi
// 00737870  b802000000           mov eax, 2
// 00737875  5e                   pop esi
// 00737876  59                   pop ecx
// 00737877  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
