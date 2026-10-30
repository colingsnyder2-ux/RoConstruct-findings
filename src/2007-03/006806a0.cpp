// roc 2007-03 006806a0  unit: seg_00680000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006806a0
//
// 006806a0  56                   push esi
// 006806a1  8bf1                 mov esi, ecx
// 006806a3  8b4604               mov eax, dword ptr [esi + 4]
// 006806a6  85c0                 test eax, eax
// 006806a8  57                   push edi
// 006806a9  7410                 je 0x6806bb
// 006806ab  50                   push eax
// 006806ac  e803ddf9ff           call 0x61e3b4
// 006806b1  83c404               add esp, 4
// 006806b4  c7460400000000       mov dword ptr [esi + 4], 0
// 006806bb  837c241000           cmp dword ptr [esp + 0x10], 0
// 006806c0  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006806c4  743a                 je 0x680700
// 006806c6  33c9                 xor ecx, ecx
// 006806c8  8bc7                 mov eax, edi
// 006806ca  ba04000000           mov edx, 4
// 006806cf  f7e2                 mul edx
// 006806d1  0f90c1               seto cl
// 006806d4  f7d9                 neg ecx
// 006806d6  0bc8                 or ecx, eax
// 006806d8  51                   push ecx
// 006806d9  e8e2dcf9ff           call 0x61e3c0
// 006806de  83c404               add esp, 4
// 006806e1  85c0                 test eax, eax
// 006806e3  894604               mov dword ptr [esi + 4], eax
// 006806e6  7505                 jne 0x6806ed
// 006806e8  e8c1dcf9ff           call 0x61e3ae
// 006806ed  8d0cbd00000000       lea ecx, [edi*4]
// 006806f4  51                   push ecx
// 006806f5  6a00                 push 0
// 006806f7  50                   push eax
// 006806f8  e81fe9f9ff           call 0x61f01c
// 006806fd  83c40c               add esp, 0xc
// 00680700  897e08               mov dword ptr [esi + 8], edi
// 00680703  5f                   pop edi
// 00680704  5e                   pop esi
// 00680705  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ?InitHashTable@?$CMap@KKP8CXTPCalendarControl@@AEXKIJ@ZP81@AEXKIJ@Z@@QAEXIH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
