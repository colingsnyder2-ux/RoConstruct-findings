// roc 2007-08 00439070  unit: CXTPPropertyGridItem  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00439070
//
// 00439070  56                   push esi
// 00439071  8bf1                 mov esi, ecx
// 00439073  8b4604               mov eax, dword ptr [esi + 4]
// 00439076  85c0                 test eax, eax
// 00439078  57                   push edi
// 00439079  7410                 je 0x43908b
// 0043907b  50                   push eax
// 0043907c  e8a56e1f00           call 0x62ff26
// 00439081  83c404               add esp, 4
// 00439084  c7460400000000       mov dword ptr [esi + 4], 0
// 0043908b  837c241000           cmp dword ptr [esp + 0x10], 0
// 00439090  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00439094  743a                 je 0x4390d0
// 00439096  33c9                 xor ecx, ecx
// 00439098  8bc7                 mov eax, edi
// 0043909a  ba04000000           mov edx, 4
// 0043909f  f7e2                 mul edx
// 004390a1  0f90c1               seto cl
// 004390a4  f7d9                 neg ecx
// 004390a6  0bc8                 or ecx, eax
// 004390a8  51                   push ecx
// 004390a9  e8846e1f00           call 0x62ff32
// 004390ae  83c404               add esp, 4
// 004390b1  85c0                 test eax, eax
// 004390b3  894604               mov dword ptr [esi + 4], eax
// 004390b6  7505                 jne 0x4390bd
// 004390b8  e8636e1f00           call 0x62ff20
// 004390bd  8d0cbd00000000       lea ecx, [edi*4]
// 004390c4  51                   push ecx
// 004390c5  6a00                 push 0
// 004390c7  50                   push eax
// 004390c8  e8bf7a1f00           call 0x630b8c
// 004390cd  83c40c               add esp, 0xc
// 004390d0  897e08               mov dword ptr [esi + 8], edi
// 004390d3  5f                   pop edi
// 004390d4  5e                   pop esi
// 004390d5  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ?InitHashTable@?$CMap@KKP8CXTPCalendarControl@@AEXKIJ@ZP81@AEXKIJ@Z@@QAEXIH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
