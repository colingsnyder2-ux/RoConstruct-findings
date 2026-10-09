// roc 2008-06 00620620  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 307 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620620
//
// 00620620  6aff                 push -1
// 00620622  68a8967d00           push 0x7d96a8
// 00620627  64a100000000         mov eax, dword ptr fs:[0]
// 0062062d  50                   push eax
// 0062062e  64892500000000       mov dword ptr fs:[0], esp
// 00620635  83ec70               sub esp, 0x70
// 00620638  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 0062063d  55                   push ebp
// 0062063e  56                   push esi
// 0062063f  57                   push edi
// 00620640  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 00620647  50                   push eax
// 00620648  6a01                 push 1
// 0062064a  57                   push edi
// 0062064b  e8600fffff           call 0x6115b0
// 00620650  8b7004               mov esi, dword ptr [eax + 4]
// 00620653  8b28                 mov ebp, dword ptr [eax]
// 00620655  83c40c               add esp, 0xc
// 00620658  896c2410             mov dword ptr [esp + 0x10], ebp
// 0062065c  89742414             mov dword ptr [esp + 0x14], esi
// 00620660  85f6                 test esi, esi
// 00620662  740c                 je 0x620670
// 00620664  8d4e04               lea ecx, [esi + 4]
// 00620667  ba01000000           mov edx, 1
// 0062066c  f00fc111             lock xadd dword ptr [ecx], edx
// 00620670  6a02                 push 2
// 00620672  57                   push edi
// 00620673  8d4c2430             lea ecx, [esp + 0x30]
// 00620677  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 00620682  e819f8ffff           call 0x61fea0
// 00620687  6a01                 push 1
// 00620689  83ec54               sub esp, 0x54
// 0062068c  8d842480000000       lea eax, [esp + 0x80]
// 00620693  8bcc                 mov ecx, esp
// 00620695  89642464             mov dword ptr [esp + 0x64], esp
// 00620699  50                   push eax
// 0062069a  c68424e000000001     mov byte ptr [esp + 0xe0], 1
// 006206a2  e8b9f2ffff           call 0x61f960
// 006206a7  8d4c2470             lea ecx, [esp + 0x70]
// 006206ab  51                   push ecx
// 006206ac  8bcd                 mov ecx, ebp
// 006206ae  e8ddfeffff           call 0x620590
// 006206b3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006206b7  50                   push eax
// 006206b8  c684248800000002     mov byte ptr [esp + 0x88], 2
// 006206c0  e82b4df7ff           call 0x5953f0
// 006206c5  8d4c2418             lea ecx, [esp + 0x18]
// 006206c9  c684248400000001     mov byte ptr [esp + 0x84], 1
// 006206d1  e89a4cf7ff           call 0x595370
// 006206d6  8b542428             mov edx, dword ptr [esp + 0x28]
// 006206da  83ec10               sub esp, 0x10
// 006206dd  8bcc                 mov ecx, esp
// 006206df  8964241c             mov dword ptr [esp + 0x1c], esp
// 006206e3  52                   push edx
// 006206e4  e8074af7ff           call 0x5950f0
// 006206e9  57                   push edi
// 006206ea  e891eaffff           call 0x61f180
// 006206ef  83c414               add esp, 0x14
// 006206f2  8d4c2428             lea ecx, [esp + 0x28]
// 006206f6  c684248400000000     mov byte ptr [esp + 0x84], 0
// 006206fe  e8bdebffff           call 0x61f2c0
// 00620703  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 0062070e  85f6                 test esi, esi
// 00620710  742a                 je 0x62073c
// 00620712  8d4604               lea eax, [esi + 4]
// 00620715  83c9ff               or ecx, 0xffffffff
// 00620718  f00fc108             lock xadd dword ptr [eax], ecx
// 0062071c  751e                 jne 0x62073c
// 0062071e  8b16                 mov edx, dword ptr [esi]
// 00620720  8b4204               mov eax, dword ptr [edx + 4]
// 00620723  8bce                 mov ecx, esi
// 00620725  ffd0                 call eax
// 00620727  8d4e08               lea ecx, [esi + 8]
// 0062072a  83caff               or edx, 0xffffffff
// 0062072d  f00fc111             lock xadd dword ptr [ecx], edx
// 00620731  7509                 jne 0x62073c
// 00620733  8b06                 mov eax, dword ptr [esi]
// 00620735  8b5008               mov edx, dword ptr [eax + 8]
// 00620738  8bce                 mov ecx, esi
// 0062073a  ffd2                 call edx
// 0062073c  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00620740  5f                   pop edi
// 00620741  5e                   pop esi
// 00620742  b801000000           mov eax, 1
// 00620747  64890d00000000       mov dword ptr fs:[0], ecx
// 0062074e  5d                   pop ebp
// 0062074f  83c47c               add esp, 0x7c
// 00620752  c3                   ret 
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?connect@SignalBridge@Lua@RBX@@SAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
