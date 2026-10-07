// roc 2010-06 0041a160  unit: CInsertObjectDialog  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041a160
//
// 0041a160  6aff                 push -1
// 0041a162  6853f19700           push 0x97f153
// 0041a167  64a100000000         mov eax, dword ptr fs:[0]
// 0041a16d  50                   push eax
// 0041a16e  64892500000000       mov dword ptr fs:[0], esp
// 0041a175  51                   push ecx
// 0041a176  56                   push esi
// 0041a177  57                   push edi
// 0041a178  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0041a17c  8b07                 mov eax, dword ptr [edi]
// 0041a17e  6a00                 push 0
// 0041a180  68408eb700           push 0xb78e40
// 0041a185  68b48fb700           push 0xb78fb4
// 0041a18a  8bf1                 mov esi, ecx
// 0041a18c  6a00                 push 0
// 0041a18e  50                   push eax
// 0041a18f  8974241c             mov dword ptr [esp + 0x1c], esi
// 0041a193  e852ea3800           call 0x7a8bea
// 0041a198  8906                 mov dword ptr [esi], eax
// 0041a19a  8b4704               mov eax, dword ptr [edi + 4]
// 0041a19d  83c414               add esp, 0x14
// 0041a1a0  8d4e04               lea ecx, [esi + 4]
// 0041a1a3  8901                 mov dword ptr [ecx], eax
// 0041a1a5  85c0                 test eax, eax
// 0041a1a7  740c                 je 0x41a1b5
// 0041a1a9  83c004               add eax, 4
// 0041a1ac  ba01000000           mov edx, 1
// 0041a1b1  f00fc110             lock xadd dword ptr [eax], edx
// 0041a1b5  833e00               cmp dword ptr [esi], 0
// 0041a1b8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041a1c0  7517                 jne 0x41a1d9
// 0041a1c2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041a1ca  8d44241c             lea eax, [esp + 0x1c]
// 0041a1ce  50                   push eax
// 0041a1cf  c644241801           mov byte ptr [esp + 0x18], 1
// 0041a1d4  e8b77efeff           call 0x402090
// 0041a1d9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041a1dd  5f                   pop edi
// 0041a1de  8bc6                 mov eax, esi
// 0041a1e0  5e                   pop esi
// 0041a1e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a1e8  83c410               add esp, 0x10
// 0041a1eb  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VObject@RBX@@@?$shared_ptr@VInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VObject@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
