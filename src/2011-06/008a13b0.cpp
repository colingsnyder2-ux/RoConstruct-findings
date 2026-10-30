// roc 2011-06 008a13b0  unit: CXTPShortcutManager  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a13b0
//
// 008a13b0  6aff                 push -1
// 008a13b2  6868a3a000           push 0xa0a368
// 008a13b7  64a100000000         mov eax, dword ptr fs:[0]
// 008a13bd  50                   push eax
// 008a13be  83ec10               sub esp, 0x10
// 008a13c1  56                   push esi
// 008a13c2  a12058c900           mov eax, dword ptr [0xc95820]
// 008a13c7  33c4                 xor eax, esp
// 008a13c9  50                   push eax
// 008a13ca  8d442418             lea eax, [esp + 0x18]
// 008a13ce  64a300000000         mov dword ptr fs:[0], eax
// 008a13d4  8bf1                 mov esi, ecx
// 008a13d6  c7460800000000       mov dword ptr [esi + 8], 0
// 008a13dd  e83a92f6ff           call 0x80a61c
// 008a13e2  8d4c2408             lea ecx, [esp + 8]
// 008a13e6  e80fb51200           call 0x9cc8fa
// 008a13eb  8b442428             mov eax, dword ptr [esp + 0x28]
// 008a13ef  6a00                 push 0
// 008a13f1  6a00                 push 0
// 008a13f3  50                   push eax
// 008a13f4  8d4c2414             lea ecx, [esp + 0x14]
// 008a13f8  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008a1400  e8e3b41200           call 0x9cc8e8
// 008a1405  8d4c2408             lea ecx, [esp + 8]
// 008a1409  85c0                 test eax, eax
// 008a140b  7522                 jne 0x8a142f
// 008a140d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008a1415  e8729af6ff           call 0x80ae8c
// 008a141a  33c0                 xor eax, eax
// 008a141c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a1420  64890d00000000       mov dword ptr fs:[0], ecx
// 008a1427  59                   pop ecx
// 008a1428  5e                   pop esi
// 008a1429  83c41c               add esp, 0x1c
// 008a142c  c20400               ret 4
// 008a142f  51                   push ecx
// 008a1430  8bce                 mov ecx, esi
// 008a1432  e899feffff           call 0x8a12d0
// 008a1437  8d4c2408             lea ecx, [esp + 8]
// 008a143b  8bf0                 mov esi, eax
// 008a143d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008a1445  e8429af6ff           call 0x80ae8c
// 008a144a  8bc6                 mov eax, esi
// 008a144c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a1450  64890d00000000       mov dword ptr fs:[0], ecx
// 008a1457  59                   pop ecx
// 008a1458  5e                   pop esi
// 008a1459  83c41c               add esp, 0x1c
// 008a145c  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp