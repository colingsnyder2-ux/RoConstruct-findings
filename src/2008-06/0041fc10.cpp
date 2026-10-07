// roc 2008-06 0041fc10  unit: CListCtrl  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041fc10
//
// 0041fc10  6aff                 push -1
// 0041fc12  6853827d00           push 0x7d8253
// 0041fc17  64a100000000         mov eax, dword ptr fs:[0]
// 0041fc1d  50                   push eax
// 0041fc1e  64892500000000       mov dword ptr fs:[0], esp
// 0041fc25  51                   push ecx
// 0041fc26  56                   push esi
// 0041fc27  57                   push edi
// 0041fc28  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0041fc2c  8b07                 mov eax, dword ptr [edi]
// 0041fc2e  6a00                 push 0
// 0041fc30  687c909200           push 0x92907c
// 0041fc35  6874919200           push 0x929174
// 0041fc3a  8bf1                 mov esi, ecx
// 0041fc3c  6a00                 push 0
// 0041fc3e  50                   push eax
// 0041fc3f  8974241c             mov dword ptr [esp + 0x1c], esi
// 0041fc43  e87e1b2800           call 0x6a17c6
// 0041fc48  8906                 mov dword ptr [esi], eax
// 0041fc4a  8b4704               mov eax, dword ptr [edi + 4]
// 0041fc4d  83c414               add esp, 0x14
// 0041fc50  8d4e04               lea ecx, [esi + 4]
// 0041fc53  8901                 mov dword ptr [ecx], eax
// 0041fc55  85c0                 test eax, eax
// 0041fc57  740c                 je 0x41fc65
// 0041fc59  83c004               add eax, 4
// 0041fc5c  ba01000000           mov edx, 1
// 0041fc61  f00fc110             lock xadd dword ptr [eax], edx
// 0041fc65  833e00               cmp dword ptr [esi], 0
// 0041fc68  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0041fc70  7517                 jne 0x41fc89
// 0041fc72  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041fc7a  8d44241c             lea eax, [esp + 0x1c]
// 0041fc7e  50                   push eax
// 0041fc7f  c644241801           mov byte ptr [esp + 0x18], 1
// 0041fc84  e82729feff           call 0x4025b0
// 0041fc89  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041fc8d  5f                   pop edi
// 0041fc8e  8bc6                 mov eax, esi
// 0041fc90  5e                   pop esi
// 0041fc91  64890d00000000       mov dword ptr fs:[0], ecx
// 0041fc98  83c410               add esp, 0x10
// 0041fc9b  c20800               ret 8
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?0VObject@RBX@@@?$shared_ptr@VInstance@RBX@@@boost@@QAE@ABV?$shared_ptr@VObject@RBX@@@1@Udynamic_cast_tag@detail@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
