// roc 2011-06 008a1460  unit: CXTPShortcutManager  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a1460
//
// 008a1460  6aff                 push -1
// 008a1462  6898a3a000           push 0xa0a398
// 008a1467  64a100000000         mov eax, dword ptr fs:[0]
// 008a146d  50                   push eax
// 008a146e  83ec28               sub esp, 0x28
// 008a1471  53                   push ebx
// 008a1472  55                   push ebp
// 008a1473  56                   push esi
// 008a1474  57                   push edi
// 008a1475  a12058c900           mov eax, dword ptr [0xc95820]
// 008a147a  33c4                 xor eax, esp
// 008a147c  50                   push eax
// 008a147d  8d44243c             lea eax, [esp + 0x3c]
// 008a1481  64a300000000         mov dword ptr fs:[0], eax
// 008a1487  8be9                 mov ebp, ecx
// 008a1489  c7450800000000       mov dword ptr [ebp + 8], 0
// 008a1490  e88791f6ff           call 0x80a61c
// 008a1495  8b742450             mov esi, dword ptr [esp + 0x50]
// 008a1499  85f6                 test esi, esi
// 008a149b  7462                 je 0x8a14ff
// 008a149d  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 008a14a1  56                   push esi
// 008a14a2  57                   push edi
// 008a14a3  ff154003a400         call dword ptr [0xa40340]
// 008a14a9  56                   push esi
// 008a14aa  57                   push edi
// 008a14ab  8bd8                 mov ebx, eax
// 008a14ad  ff153c03a400         call dword ptr [0xa4033c]
// 008a14b3  85c0                 test eax, eax
// 008a14b5  7448                 je 0x8a14ff
// 008a14b7  50                   push eax
// 008a14b8  ff15d001a400         call dword ptr [0xa401d0]
// 008a14be  85c0                 test eax, eax
// 008a14c0  743d                 je 0x8a14ff
// 008a14c2  83fb0a               cmp ebx, 0xa
// 008a14c5  7238                 jb 0x8a14ff
// 008a14c7  6a00                 push 0
// 008a14c9  53                   push ebx
// 008a14ca  50                   push eax
// 008a14cb  8d4c2420             lea ecx, [esp + 0x20]
// 008a14cf  e83c9af6ff           call 0x80af10
// 008a14d4  8d442414             lea eax, [esp + 0x14]
// 008a14d8  50                   push eax
// 008a14d9  8bcd                 mov ecx, ebp
// 008a14db  c744244800000000     mov dword ptr [esp + 0x48], 0
// 008a14e3  e8e8fdffff           call 0x8a12d0
// 008a14e8  8d4c2414             lea ecx, [esp + 0x14]
// 008a14ec  8bf0                 mov esi, eax
// 008a14ee  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 008a14f6  e8099af6ff           call 0x80af04
// 008a14fb  8bc6                 mov eax, esi
// 008a14fd  eb02                 jmp 0x8a1501
// 008a14ff  33c0                 xor eax, eax
// 008a1501  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008a1505  64890d00000000       mov dword ptr fs:[0], ecx
// 008a150c  59                   pop ecx
// 008a150d  5f                   pop edi
// 008a150e  5e                   pop esi
// 008a150f  5d                   pop ebp
// 008a1510  5b                   pop ebx
// 008a1511  83c434               add esp, 0x34
// 008a1514  c20800               ret 8
// copied from an identical function in another client (function ?LoadFromResource@CXTPGraphicBitmapPng@@QAEHPAUHINSTANCE__@@PAUHRSRC__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp