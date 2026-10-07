// roc 2011-06 00782830  unit: seg_00780000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00782830
//
// 00782830  51                   push ecx
// 00782831  56                   push esi
// 00782832  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00782836  57                   push edi
// 00782837  8d442408             lea eax, [esp + 8]
// 0078283b  50                   push eax
// 0078283c  6a01                 push 1
// 0078283e  56                   push esi
// 0078283f  e84c19feff           call 0x764190
// 00782844  6a00                 push 0
// 00782846  8bf8                 mov edi, eax
// 00782848  57                   push edi
// 00782849  6a02                 push 2
// 0078284b  56                   push esi
// 0078284c  e89f19feff           call 0x7641f0
// 00782851  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782855  50                   push eax
// 00782856  51                   push ecx
// 00782857  57                   push edi
// 00782858  56                   push esi
// 00782859  e8d216feff           call 0x763f30
// 0078285e  83c42c               add esp, 0x2c
// 00782861  85c0                 test eax, eax
// 00782863  7509                 jne 0x78286e
// 00782865  5f                   pop edi
// 00782866  b801000000           mov eax, 1
// 0078286b  5e                   pop esi
// 0078286c  59                   pop ecx
// 0078286d  c3                   ret 
// 0078286e  56                   push esi
// 0078286f  e88c00feff           call 0x762900
// 00782874  6afe                 push -2
// 00782876  56                   push esi
// 00782877  e894fbfdff           call 0x762410
// 0078287c  83c40c               add esp, 0xc
// 0078287f  5f                   pop edi
// 00782880  b802000000           mov eax, 2
// 00782885  5e                   pop esi
// 00782886  59                   pop ecx
// 00782887  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_loadstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
