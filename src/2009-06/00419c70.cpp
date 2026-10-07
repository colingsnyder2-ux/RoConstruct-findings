// roc 2009-06 00419c70  unit: CInsertObjectDialog  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00419c70
//
// 00419c70  6aff                 push -1
// 00419c72  68c3d58500           push 0x85d5c3
// 00419c77  64a100000000         mov eax, dword ptr fs:[0]
// 00419c7d  50                   push eax
// 00419c7e  64892500000000       mov dword ptr fs:[0], esp
// 00419c85  51                   push ecx
// 00419c86  56                   push esi
// 00419c87  57                   push edi
// 00419c88  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00419c8c  8b07                 mov eax, dword ptr [edi]
// 00419c8e  6a00                 push 0
// 00419c90  6840be9d00           push 0x9dbe40
// 00419c95  6838bf9d00           push 0x9dbf38
// 00419c9a  8bf1                 mov esi, ecx
// 00419c9c  6a00                 push 0
// 00419c9e  50                   push eax
// 00419c9f  8974241c             mov dword ptr [esp + 0x1c], esi
// 00419ca3  e8d2ff2f00           call 0x719c7a
// 00419ca8  8906                 mov dword ptr [esi], eax
// 00419caa  8b4704               mov eax, dword ptr [edi + 4]
// 00419cad  83c414               add esp, 0x14
// 00419cb0  8d4e04               lea ecx, [esi + 4]
// 00419cb3  8901                 mov dword ptr [ecx], eax
// 00419cb5  85c0                 test eax, eax
// 00419cb7  740c                 je 0x419cc5
// 00419cb9  83c004               add eax, 4
// 00419cbc  ba01000000           mov edx, 1
// 00419cc1  f00fc110             lock xadd dword ptr [eax], edx
// 00419cc5  833e00               cmp dword ptr [esi], 0
// 00419cc8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00419cd0  7517                 jne 0x419ce9
// 00419cd2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00419cda  8d44241c             lea eax, [esp + 0x1c]
// 00419cde  50                   push eax
// 00419cdf  c644241801           mov byte ptr [esp + 0x18], 1
// 00419ce4  e81788feff           call 0x402500
// 00419ce9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00419ced  5f                   pop edi
// 00419cee  8bc6                 mov eax, esi
// 00419cf0  5e                   pop esi
// 00419cf1  64890d00000000       mov dword ptr fs:[0], ecx
// 00419cf8  83c410               add esp, 0x10
// 00419cfb  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VObject@RBX@@@?$shared_ptr@VInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VObject@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
