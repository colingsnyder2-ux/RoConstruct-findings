// roc 2007-03 004b9780  unit: seg_004b0000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b9780
//
// 004b9780  83ec14               sub esp, 0x14
// 004b9783  8b542418             mov edx, dword ptr [esp + 0x18]
// 004b9787  8d0424               lea eax, [esp]
// 004b978a  50                   push eax
// 004b978b  8d4c2408             lea ecx, [esp + 8]
// 004b978f  51                   push ecx
// 004b9790  52                   push edx
// 004b9791  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 004b9799  ff1570f07700         call dword ptr [0x77f070]
// 004b979f  85c0                 test eax, eax
// 004b97a1  7409                 je 0x4b97ac
// 004b97a3  6633c0               xor ax, ax
// 004b97a6  83c414               add esp, 0x14
// 004b97a9  c20400               ret 4
// 004b97ac  8b442406             mov eax, dword ptr [esp + 6]
// 004b97b0  50                   push eax
// 004b97b1  ff1560f07700         call dword ptr [0x77f060]
// 004b97b7  83c414               add esp, 0x14
// 004b97ba  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?GetLocalPort@SocketLayer@@QAEGI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
