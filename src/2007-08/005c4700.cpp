// roc 2007-08 005c4700  unit: VWaitScriptSlot::?$TGenericSlotWrapper  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c4700
//
// 005c4700  6aff                 push -1
// 005c4702  6858987500           push 0x759858
// 005c4707  64a100000000         mov eax, dword ptr fs:[0]
// 005c470d  50                   push eax
// 005c470e  64892500000000       mov dword ptr fs:[0], esp
// 005c4715  83ec40               sub esp, 0x40
// 005c4718  a188be8a00           mov eax, dword ptr [0x8abe88]
// 005c471d  55                   push ebp
// 005c471e  56                   push esi
// 005c471f  57                   push edi
// 005c4720  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 005c4724  50                   push eax
// 005c4725  6a01                 push 1
// 005c4727  57                   push edi
// 005c4728  e813abffff           call 0x5bf240
// 005c472d  8b7004               mov esi, dword ptr [eax + 4]
// 005c4730  8b28                 mov ebp, dword ptr [eax]
// 005c4732  83c40c               add esp, 0xc
// 005c4735  85f6                 test esi, esi
// 005c4737  896c240c             mov dword ptr [esp + 0xc], ebp
// 005c473b  89742410             mov dword ptr [esp + 0x10], esi
// 005c473f  740c                 je 0x5c474d
// 005c4741  8d4e04               lea ecx, [esi + 4]
// 005c4744  ba01000000           mov edx, 1
// 005c4749  f00fc111             lock xadd dword ptr [ecx], edx
// 005c474d  57                   push edi
// 005c474e  8d4c2428             lea ecx, [esp + 0x28]
// 005c4752  c744245800000000     mov dword ptr [esp + 0x58], 0
// 005c475a  e821feffff           call 0x5c4580
// 005c475f  6a01                 push 1
// 005c4761  83ec28               sub esp, 0x28
// 005c4764  8d442450             lea eax, [esp + 0x50]
// 005c4768  8bcc                 mov ecx, esp
// 005c476a  89a42488000000       mov dword ptr [esp + 0x88], esp
// 005c4771  50                   push eax
// 005c4772  c684248400000001     mov byte ptr [esp + 0x84], 1
// 005c477a  e8a1f1ffff           call 0x5c3920
// 005c477f  8d4c2440             lea ecx, [esp + 0x40]
// 005c4783  51                   push ecx
// 005c4784  8bcd                 mov ecx, ebp
// 005c4786  e875feffff           call 0x5c4600
// 005c478b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005c478f  50                   push eax
// 005c4790  c644245802           mov byte ptr [esp + 0x58], 2
// 005c4795  e8563d1600           call 0x7284f0
// 005c479a  8d4c2414             lea ecx, [esp + 0x14]
// 005c479e  c644245401           mov byte ptr [esp + 0x54], 1
// 005c47a3  e8b83c1600           call 0x728460
// 005c47a8  85ff                 test edi, edi
// 005c47aa  7405                 je 0x5c47b1
// 005c47ac  8d47f4               lea eax, [edi - 0xc]
// 005c47af  eb02                 jmp 0x5c47b3
// 005c47b1  33c0                 xor eax, eax
// 005c47b3  8d4c2424             lea ecx, [esp + 0x24]
// 005c47b7  c6400801             mov byte ptr [eax + 8], 1
// 005c47bb  c644245400           mov byte ptr [esp + 0x54], 0
// 005c47c0  e89bf0ffff           call 0x5c3860
// 005c47c5  85f6                 test esi, esi
// 005c47c7  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 005c47cf  742a                 je 0x5c47fb
// 005c47d1  8d5604               lea edx, [esi + 4]
// 005c47d4  83c8ff               or eax, 0xffffffff
// 005c47d7  f00fc102             lock xadd dword ptr [edx], eax
// 005c47db  751e                 jne 0x5c47fb
// 005c47dd  8b16                 mov edx, dword ptr [esi]
// 005c47df  8b4204               mov eax, dword ptr [edx + 4]
// 005c47e2  8bce                 mov ecx, esi
// 005c47e4  ffd0                 call eax
// 005c47e6  8d4e08               lea ecx, [esi + 8]
// 005c47e9  83caff               or edx, 0xffffffff
// 005c47ec  f00fc111             lock xadd dword ptr [ecx], edx
// 005c47f0  7509                 jne 0x5c47fb
// 005c47f2  8b06                 mov eax, dword ptr [esi]
// 005c47f4  8b5008               mov edx, dword ptr [eax + 8]
// 005c47f7  8bce                 mov ecx, esi
// 005c47f9  ffd2                 call edx
// 005c47fb  6a00                 push 0
// 005c47fd  57                   push edi
// 005c47fe  e88d160000           call 0x5c5e90
// 005c4803  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005c4807  83c408               add esp, 8
// 005c480a  5f                   pop edi
// 005c480b  5e                   pop esi
// 005c480c  64890d00000000       mov dword ptr fs:[0], ecx
// 005c4813  5d                   pop ebp
// 005c4814  83c44c               add esp, 0x4c
// 005c4817  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?wait@SignalBridge@Lua@RBX@@SAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
