// roc 2008-06 00620470  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00620470
//
// 00620470  6aff                 push -1
// 00620472  6848967d00           push 0x7d9648
// 00620477  64a100000000         mov eax, dword ptr fs:[0]
// 0062047d  50                   push eax
// 0062047e  64892500000000       mov dword ptr fs:[0], esp
// 00620485  83ec40               sub esp, 0x40
// 00620488  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 0062048d  55                   push ebp
// 0062048e  56                   push esi
// 0062048f  57                   push edi
// 00620490  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00620494  50                   push eax
// 00620495  6a01                 push 1
// 00620497  57                   push edi
// 00620498  e81311ffff           call 0x6115b0
// 0062049d  8b7004               mov esi, dword ptr [eax + 4]
// 006204a0  8b28                 mov ebp, dword ptr [eax]
// 006204a2  83c40c               add esp, 0xc
// 006204a5  896c240c             mov dword ptr [esp + 0xc], ebp
// 006204a9  89742410             mov dword ptr [esp + 0x10], esi
// 006204ad  85f6                 test esi, esi
// 006204af  740c                 je 0x6204bd
// 006204b1  8d4e04               lea ecx, [esi + 4]
// 006204b4  ba01000000           mov edx, 1
// 006204b9  f00fc111             lock xadd dword ptr [ecx], edx
// 006204bd  57                   push edi
// 006204be  8d4c2428             lea ecx, [esp + 0x28]
// 006204c2  c744245800000000     mov dword ptr [esp + 0x58], 0
// 006204ca  e8c1fcffff           call 0x620190
// 006204cf  6a01                 push 1
// 006204d1  83ec28               sub esp, 0x28
// 006204d4  8d442450             lea eax, [esp + 0x50]
// 006204d8  8bcc                 mov ecx, esp
// 006204da  89a42488000000       mov dword ptr [esp + 0x88], esp
// 006204e1  50                   push eax
// 006204e2  c684248400000001     mov byte ptr [esp + 0x84], 1
// 006204ea  e821efffff           call 0x61f410
// 006204ef  8d4c2440             lea ecx, [esp + 0x40]
// 006204f3  51                   push ecx
// 006204f4  8bcd                 mov ecx, ebp
// 006204f6  e815fdffff           call 0x620210
// 006204fb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006204ff  50                   push eax
// 00620500  c644245802           mov byte ptr [esp + 0x58], 2
// 00620505  e8e64ef7ff           call 0x5953f0
// 0062050a  8d4c2414             lea ecx, [esp + 0x14]
// 0062050e  c644245401           mov byte ptr [esp + 0x54], 1
// 00620513  e8584ef7ff           call 0x595370
// 00620518  85ff                 test edi, edi
// 0062051a  7405                 je 0x620521
// 0062051c  8d47f4               lea eax, [edi - 0xc]
// 0062051f  eb02                 jmp 0x620523
// 00620521  33c0                 xor eax, eax
// 00620523  8d4c2424             lea ecx, [esp + 0x24]
// 00620527  c6400801             mov byte ptr [eax + 8], 1
// 0062052b  c644245400           mov byte ptr [esp + 0x54], 0
// 00620530  e81beeffff           call 0x61f350
// 00620535  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0062053d  85f6                 test esi, esi
// 0062053f  742a                 je 0x62056b
// 00620541  8d5604               lea edx, [esi + 4]
// 00620544  83c8ff               or eax, 0xffffffff
// 00620547  f00fc102             lock xadd dword ptr [edx], eax
// 0062054b  751e                 jne 0x62056b
// 0062054d  8b16                 mov edx, dword ptr [esi]
// 0062054f  8b4204               mov eax, dword ptr [edx + 4]
// 00620552  8bce                 mov ecx, esi
// 00620554  ffd0                 call eax
// 00620556  8d4e08               lea ecx, [esi + 8]
// 00620559  83caff               or edx, 0xffffffff
// 0062055c  f00fc111             lock xadd dword ptr [ecx], edx
// 00620560  7509                 jne 0x62056b
// 00620562  8b06                 mov eax, dword ptr [esi]
// 00620564  8b5008               mov edx, dword ptr [eax + 8]
// 00620567  8bce                 mov ecx, esi
// 00620569  ffd2                 call edx
// 0062056b  6a00                 push 0
// 0062056d  57                   push edi
// 0062056e  e84d190000           call 0x621ec0
// 00620573  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00620577  83c408               add esp, 8
// 0062057a  5f                   pop edi
// 0062057b  5e                   pop esi
// 0062057c  64890d00000000       mov dword ptr fs:[0], ecx
// 00620583  5d                   pop ebp
// 00620584  83c44c               add esp, 0x4c
// 00620587  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?wait@SignalBridge@Lua@RBX@@SAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
