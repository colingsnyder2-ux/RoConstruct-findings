// roc 2008-06 00489810  unit: G3D::GWindow  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489810
//
// 00489810  64a100000000         mov eax, dword ptr fs:[0]
// 00489816  6aff                 push -1
// 00489818  68d2947d00           push 0x7d94d2
// 0048981d  50                   push eax
// 0048981e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00489822  64892500000000       mov dword ptr fs:[0], esp
// 00489829  8b09                 mov ecx, dword ptr [ecx]
// 0048982b  81ec88000000         sub esp, 0x88
// 00489831  50                   push eax
// 00489832  51                   push ecx
// 00489833  e838581400           call 0x5cf070
// 00489838  83c408               add esp, 8
// 0048983b  84c0                 test al, al
// 0048983d  7578                 jne 0x4898b7
// 0048983f  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 00489846  85c0                 test eax, eax
// 00489848  7437                 je 0x489881
// 0048984a  50                   push eax
// 0048984b  8d542470             lea edx, [esp + 0x70]
// 0048984f  689c148200           push 0x82149c
// 00489854  52                   push edx
// 00489855  e8b6020800           call 0x509b10
// 0048985a  83c40c               add esp, 0xc
// 0048985d  50                   push eax
// 0048985e  8d4c242c             lea ecx, [esp + 0x2c]
// 00489862  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0048986d  e8de04f8ff           call 0x409d50
// 00489872  68c81b8d00           push 0x8d1bc8
// 00489877  8d44242c             lea eax, [esp + 0x2c]
// 0048987b  50                   push eax
// 0048987c  e80b7d2100           call 0x6a158c
// 00489881  8d4c2450             lea ecx, [esp + 0x50]
// 00489885  6858148200           push 0x821458
// 0048988a  51                   push ecx
// 0048988b  e880020800           call 0x509b10
// 00489890  83c408               add esp, 8
// 00489893  50                   push eax
// 00489894  8d4c2404             lea ecx, [esp + 4]
// 00489898  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 004898a3  e8a804f8ff           call 0x409d50
// 004898a8  68c81b8d00           push 0x8d1bc8
// 004898ad  8d542404             lea edx, [esp + 4]
// 004898b1  52                   push edx
// 004898b2  e8d57c2100           call 0x6a158c
// 004898b7  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 004898be  64890d00000000       mov dword ptr fs:[0], ecx
// 004898c5  81c494000000         add esp, 0x94
// 004898cb  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ?requirePermission@Context@Security@RBX@@QBEXW4Permissions@23@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
