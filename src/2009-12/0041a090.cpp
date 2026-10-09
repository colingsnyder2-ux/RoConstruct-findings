// roc 2009-12 0041a090  unit: CInsertObjectDialog  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041a090
//
// 0041a090  6aff                 push -1
// 0041a092  6873849200           push 0x928473
// 0041a097  64a100000000         mov eax, dword ptr fs:[0]
// 0041a09d  50                   push eax
// 0041a09e  64892500000000       mov dword ptr fs:[0], esp
// 0041a0a5  51                   push ecx
// 0041a0a6  56                   push esi
// 0041a0a7  57                   push edi
// 0041a0a8  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0041a0ac  8b07                 mov eax, dword ptr [edi]
// 0041a0ae  6a00                 push 0
// 0041a0b0  6840feaf00           push 0xaffe40
// 0041a0b5  68b4ffaf00           push 0xafffb4
// 0041a0ba  8bf1                 mov esi, ecx
// 0041a0bc  6a00                 push 0
// 0041a0be  50                   push eax
// 0041a0bf  8974241c             mov dword ptr [esp + 0x1c], esi
// 0041a0c3  e8e2a93d00           call 0x7f4aaa
// 0041a0c8  8906                 mov dword ptr [esi], eax
// 0041a0ca  8b4704               mov eax, dword ptr [edi + 4]
// 0041a0cd  83c414               add esp, 0x14
// 0041a0d0  8d4e04               lea ecx, [esi + 4]
// 0041a0d3  8901                 mov dword ptr [ecx], eax
// 0041a0d5  85c0                 test eax, eax
// 0041a0d7  740c                 je 0x41a0e5
// 0041a0d9  83c004               add eax, 4
// 0041a0dc  ba01000000           mov edx, 1
// 0041a0e1  f00fc110             lock xadd dword ptr [eax], edx
// 0041a0e5  833e00               cmp dword ptr [esi], 0
// 0041a0e8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041a0f0  7517                 jne 0x41a109
// 0041a0f2  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041a0fa  8d44241c             lea eax, [esp + 0x1c]
// 0041a0fe  50                   push eax
// 0041a0ff  c644241801           mov byte ptr [esp + 0x18], 1
// 0041a104  e8977ffeff           call 0x4020a0
// 0041a109  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041a10d  5f                   pop edi
// 0041a10e  8bc6                 mov eax, esi
// 0041a110  5e                   pop esi
// 0041a111  64890d00000000       mov dword ptr fs:[0], ecx
// 0041a118  83c410               add esp, 0x10
// 0041a11b  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VObject@RBX@@@?$shared_ptr@VInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VObject@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
