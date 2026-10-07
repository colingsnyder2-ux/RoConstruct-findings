// roc 2009-06 006baad0  unit: RBX::UniversalTool  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006baad0
//
// 006baad0  83ec64               sub esp, 0x64
// 006baad3  56                   push esi
// 006baad4  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 006baad8  8d442404             lea eax, [esp + 4]
// 006baadc  50                   push eax
// 006baadd  6a00                 push 0
// 006baadf  56                   push esi
// 006baae0  e8bbd10000           call 0x6c7ca0
// 006baae5  83c40c               add esp, 0xc
// 006baae8  85c0                 test eax, eax
// 006baaea  751d                 jne 0x6bab09
// 006baaec  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 006baaf0  8b542470             mov edx, dword ptr [esp + 0x70]
// 006baaf4  51                   push ecx
// 006baaf5  52                   push edx
// 006baaf6  6894af8e00           push 0x8eaf94
// 006baafb  56                   push esi
// 006baafc  e83ff7ffff           call 0x6ba240
// 006bab01  83c410               add esp, 0x10
// 006bab04  5e                   pop esi
// 006bab05  83c464               add esp, 0x64
// 006bab08  c3                   ret 
// 006bab09  8d442404             lea eax, [esp + 4]
// 006bab0d  50                   push eax
// 006bab0e  6890af8e00           push 0x8eaf90
// 006bab13  56                   push esi
// 006bab14  e8a7de0000           call 0x6c89c0
// 006bab19  8b442418             mov eax, dword ptr [esp + 0x18]
// 006bab1d  83c40c               add esp, 0xc
// 006bab20  b988af8e00           mov ecx, 0x8eaf88
// 006bab25  8a10                 mov dl, byte ptr [eax]
// 006bab27  3a11                 cmp dl, byte ptr [ecx]
// 006bab29  751a                 jne 0x6bab45
// 006bab2b  84d2                 test dl, dl
// 006bab2d  7412                 je 0x6bab41
// 006bab2f  8a5001               mov dl, byte ptr [eax + 1]
// 006bab32  3a5101               cmp dl, byte ptr [ecx + 1]
// 006bab35  750e                 jne 0x6bab45
// 006bab37  83c002               add eax, 2
// 006bab3a  83c102               add ecx, 2
// 006bab3d  84d2                 test dl, dl
// 006bab3f  75e4                 jne 0x6bab25
// 006bab41  33c0                 xor eax, eax
// 006bab43  eb05                 jmp 0x6bab4a
// 006bab45  1bc0                 sbb eax, eax
// 006bab47  83d8ff               sbb eax, -1
// 006bab4a  85c0                 test eax, eax
// 006bab4c  7524                 jne 0x6bab72
// 006bab4e  836c247001           sub dword ptr [esp + 0x70], 1
// 006bab53  751d                 jne 0x6bab72
// 006bab55  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 006bab59  8b542408             mov edx, dword ptr [esp + 8]
// 006bab5d  51                   push ecx
// 006bab5e  52                   push edx
// 006bab5f  6868af8e00           push 0x8eaf68
// 006bab64  56                   push esi
// 006bab65  e8d6f6ffff           call 0x6ba240
// 006bab6a  83c410               add esp, 0x10
// 006bab6d  5e                   pop esi
// 006bab6e  83c464               add esp, 0x64
// 006bab71  c3                   ret 
// 006bab72  8b442408             mov eax, dword ptr [esp + 8]
// 006bab76  85c0                 test eax, eax
// 006bab78  7509                 jne 0x6bab83
// 006bab7a  b800758c00           mov eax, 0x8c7500
// 006bab7f  89442408             mov dword ptr [esp + 8], eax
// 006bab83  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 006bab87  8b542470             mov edx, dword ptr [esp + 0x70]
// 006bab8b  51                   push ecx
// 006bab8c  50                   push eax
// 006bab8d  52                   push edx
// 006bab8e  6848af8e00           push 0x8eaf48
// 006bab93  56                   push esi
// 006bab94  e8a7f6ffff           call 0x6ba240
// 006bab99  83c414               add esp, 0x14
// 006bab9c  5e                   pop esi
// 006bab9d  83c464               add esp, 0x64
// 006baba0  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_argerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
