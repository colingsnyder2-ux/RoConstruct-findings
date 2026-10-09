// roc 2009-12 00564c90  unit: CXTPRichRender::XTextHost  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00564c90
//
// 00564c90  83ec14               sub esp, 0x14
// 00564c93  8b542418             mov edx, dword ptr [esp + 0x18]
// 00564c97  8d0424               lea eax, [esp]
// 00564c9a  50                   push eax
// 00564c9b  8d4c2408             lea ecx, [esp + 8]
// 00564c9f  51                   push ecx
// 00564ca0  52                   push edx
// 00564ca1  c744240c10000000     mov dword ptr [esp + 0xc], 0x10
// 00564ca9  ff1544cd9800         call dword ptr [0x98cd44]
// 00564caf  85c0                 test eax, eax
// 00564cb1  7408                 je 0x564cbb
// 00564cb3  33c0                 xor eax, eax
// 00564cb5  83c414               add esp, 0x14
// 00564cb8  c20400               ret 4
// 00564cbb  8b442406             mov eax, dword ptr [esp + 6]
// 00564cbf  50                   push eax
// 00564cc0  ff155ccd9800         call dword ptr [0x98cd5c]
// 00564cc6  83c414               add esp, 0x14
// 00564cc9  c20400               ret 4
// library rbxgs-raknet/SocketLayer.cpp (function ?GetLocalPort@SocketLayer@@QAEGI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SocketLayer.cpp
