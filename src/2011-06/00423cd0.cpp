// roc 2011-06 00423cd0  unit: CInsertObjectDialog  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00423cd0
//
// 00423cd0  6aff                 push -1
// 00423cd2  6823e59e00           push 0x9ee523
// 00423cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00423cdd  50                   push eax
// 00423cde  64892500000000       mov dword ptr fs:[0], esp
// 00423ce5  51                   push ecx
// 00423ce6  56                   push esi
// 00423ce7  57                   push edi
// 00423ce8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00423cec  8b07                 mov eax, dword ptr [edi]
// 00423cee  6a00                 push 0
// 00423cf0  68f871c000           push 0xc071f8
// 00423cf5  686c73c000           push 0xc0736c
// 00423cfa  8bf1                 mov esi, ecx
// 00423cfc  6a00                 push 0
// 00423cfe  50                   push eax
// 00423cff  8974241c             mov dword ptr [esp + 0x1c], esi
// 00423d03  e8e2753e00           call 0x80b2ea
// 00423d08  8906                 mov dword ptr [esi], eax
// 00423d0a  8b4704               mov eax, dword ptr [edi + 4]
// 00423d0d  83c414               add esp, 0x14
// 00423d10  8d4e04               lea ecx, [esi + 4]
// 00423d13  8901                 mov dword ptr [ecx], eax
// 00423d15  85c0                 test eax, eax
// 00423d17  740c                 je 0x423d25
// 00423d19  83c004               add eax, 4
// 00423d1c  ba01000000           mov edx, 1
// 00423d21  f00fc110             lock xadd dword ptr [eax], edx
// 00423d25  833e00               cmp dword ptr [esi], 0
// 00423d28  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00423d30  7517                 jne 0x423d49
// 00423d32  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00423d3a  8d44241c             lea eax, [esp + 0x1c]
// 00423d3e  50                   push eax
// 00423d3f  c644241801           mov byte ptr [esp + 0x18], 1
// 00423d44  e817e8fdff           call 0x402560
// 00423d49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00423d4d  5f                   pop edi
// 00423d4e  8bc6                 mov eax, esi
// 00423d50  5e                   pop esi
// 00423d51  64890d00000000       mov dword ptr fs:[0], ecx
// 00423d58  83c410               add esp, 0x10
// 00423d5b  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VObject@RBX@@@?$shared_ptr@VInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VObject@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
