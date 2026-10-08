// roc 2007-03 005d8960  unit: seg_005d0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d8960
//
// 005d8960  51                   push ecx
// 005d8961  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005d8964  85c0                 test eax, eax
// 005d8966  c7042400000000       mov dword ptr [esp], 0
// 005d896d  7407                 je 0x5d8976
// 005d896f  0530020000           add eax, 0x230
// 005d8974  eb02                 jmp 0x5d8978
// 005d8976  33c0                 xor eax, eax
// 005d8978  56                   push esi
// 005d8979  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005d897d  50                   push eax
// 005d897e  8b442414             mov eax, dword ptr [esp + 0x14]
// 005d8982  50                   push eax
// 005d8983  56                   push esi
// 005d8984  e857ffffff           call 0x5d88e0
// 005d8989  83c40c               add esp, 0xc
// 005d898c  8bc6                 mov eax, esi
// 005d898e  5e                   pop esi
// 005d898f  59                   pop ecx
// 005d8990  c20800               ret 8
// library rbxgs/v8datamodel\MouseCommand.cpp (function ?getUnitMouseRay@MouseCommand@RBX@@QBE?AVRay@G3D@@ABVUIEvent@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/MouseCommand.cpp
