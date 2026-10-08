// roc 2007-08 005c5540  unit: RBX::Lua::VThreadRef::?$sp_counted_impl_p  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5540
//
// 005c5540  64a100000000         mov eax, dword ptr fs:[0]
// 005c5546  6aff                 push -1
// 005c5548  68b87f7500           push 0x757fb8
// 005c554d  50                   push eax
// 005c554e  64892500000000       mov dword ptr fs:[0], esp
// 005c5555  83ec10               sub esp, 0x10
// 005c5558  56                   push esi
// 005c5559  8bf1                 mov esi, ecx
// 005c555b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005c555f  85c9                 test ecx, ecx
// 005c5561  7405                 je 0x5c5568
// 005c5563  8d41f4               lea eax, [ecx - 0xc]
// 005c5566  eb02                 jmp 0x5c556a
// 005c5568  33c0                 xor eax, eax
// 005c556a  d9442428             fld dword ptr [esp + 0x28]
// 005c556e  51                   push ecx
// 005c556f  d91c24               fstp dword ptr [esp]
// 005c5572  51                   push ecx
// 005c5573  8d4c240c             lea ecx, [esp + 0xc]
// 005c5577  c6400801             mov byte ptr [eax + 8], 1
// 005c557b  e870f8ffff           call 0x5c4df0
// 005c5580  50                   push eax
// 005c5581  8d4e04               lea ecx, [esi + 4]
// 005c5584  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005c558c  e81fffffff           call 0x5c54b0
// 005c5591  8b442408             mov eax, dword ptr [esp + 8]
// 005c5595  85c0                 test eax, eax
// 005c5597  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005c559f  742c                 je 0x5c55cd
// 005c55a1  8bf0                 mov esi, eax
// 005c55a3  83c004               add eax, 4
// 005c55a6  83c9ff               or ecx, 0xffffffff
// 005c55a9  f00fc108             lock xadd dword ptr [eax], ecx
// 005c55ad  751e                 jne 0x5c55cd
// 005c55af  8b16                 mov edx, dword ptr [esi]
// 005c55b1  8b4204               mov eax, dword ptr [edx + 4]
// 005c55b4  8bce                 mov ecx, esi
// 005c55b6  ffd0                 call eax
// 005c55b8  8d4e08               lea ecx, [esi + 8]
// 005c55bb  83caff               or edx, 0xffffffff
// 005c55be  f00fc111             lock xadd dword ptr [ecx], edx
// 005c55c2  7509                 jne 0x5c55cd
// 005c55c4  8b06                 mov eax, dword ptr [esi]
// 005c55c6  8b5008               mov edx, dword ptr [eax + 8]
// 005c55c9  8bce                 mov ecx, esi
// 005c55cb  ffd2                 call edx
// 005c55cd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005c55d1  5e                   pop esi
// 005c55d2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c55d9  83c41c               add esp, 0x1c
// 005c55dc  c20800               ret 8
// library rbxgs/script\ScriptEvent.cpp (function ?queueWaiter@YieldingThreads@Lua@RBX@@QAEXPAUlua_State@@M@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
