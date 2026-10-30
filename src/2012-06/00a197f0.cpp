// roc 2012-06 00a197f0  unit: CXTPShortcutManager  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a197f0
//
// 00a197f0  6aff                 push -1
// 00a197f2  68c83eae00           push 0xae3ec8
// 00a197f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a197fd  50                   push eax
// 00a197fe  83ec10               sub esp, 0x10
// 00a19801  56                   push esi
// 00a19802  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a19807  33c4                 xor eax, esp
// 00a19809  50                   push eax
// 00a1980a  8d442418             lea eax, [esp + 0x18]
// 00a1980e  64a300000000         mov dword ptr fs:[0], eax
// 00a19814  8bf1                 mov esi, ecx
// 00a19816  c7460800000000       mov dword ptr [esi + 8], 0
// 00a1981d  e8aa8ef6ff           call 0x9826cc
// 00a19822  8d4c2408             lea ecx, [esp + 8]
// 00a19826  e8bb95f6ff           call 0x982de6
// 00a1982b  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a1982f  6a00                 push 0
// 00a19831  6a00                 push 0
// 00a19833  50                   push eax
// 00a19834  8d4c2414             lea ecx, [esp + 0x14]
// 00a19838  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00a19840  e89b95f6ff           call 0x982de0
// 00a19845  8d4c2408             lea ecx, [esp + 8]
// 00a19849  85c0                 test eax, eax
// 00a1984b  7522                 jne 0xa1986f
// 00a1984d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a19855  e87a95f6ff           call 0x982dd4
// 00a1985a  33c0                 xor eax, eax
// 00a1985c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a19860  64890d00000000       mov dword ptr fs:[0], ecx
// 00a19867  59                   pop ecx
// 00a19868  5e                   pop esi
// 00a19869  83c41c               add esp, 0x1c
// 00a1986c  c20400               ret 4
// 00a1986f  51                   push ecx
// 00a19870  8bce                 mov ecx, esi
// 00a19872  e899feffff           call 0xa19710
// 00a19877  8d4c2408             lea ecx, [esp + 8]
// 00a1987b  8bf0                 mov esi, eax
// 00a1987d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a19885  e84a95f6ff           call 0x982dd4
// 00a1988a  8bc6                 mov eax, esi
// 00a1988c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a19890  64890d00000000       mov dword ptr fs:[0], ecx
// 00a19897  59                   pop ecx
// 00a19898  5e                   pop esi
// 00a19899  83c41c               add esp, 0x1c
// 00a1989c  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\GraphicLibrary\XTPGraphicBitmapPng.cpp