// roc 2008-06 005aaac0  unit: RBX::VScriptContext::?$FactoryProduct  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aaac0
//
// 005aaac0  6aff                 push -1
// 005aaac2  6818047c00           push 0x7c0418
// 005aaac7  64a100000000         mov eax, dword ptr fs:[0]
// 005aaacd  50                   push eax
// 005aaace  64892500000000       mov dword ptr fs:[0], esp
// 005aaad5  51                   push ecx
// 005aaad6  56                   push esi
// 005aaad7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 005aaadc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005aaae4  7512                 jne 0x5aaaf8
// 005aaae6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005aaaea  50                   push eax
// 005aaaeb  e8f0760600           call 0x6121e0
// 005aaaf0  83c404               add esp, 4
// 005aaaf3  e9a0000000           jmp 0x5aab98
// 005aaaf8  8b742418             mov esi, dword ptr [esp + 0x18]
// 005aaafc  56                   push esi
// 005aaafd  e80e710600           call 0x611c10
// 005aab02  68c0aa5a00           push 0x5aaac0
// 005aab07  56                   push esi
// 005aab08  e803790600           call 0x612410
// 005aab0d  68f0d8ffff           push 0xffffd8f0
// 005aab12  56                   push esi
// 005aab13  e8d8790600           call 0x6124f0
// 005aab18  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005aab1c  51                   push ecx
// 005aab1d  56                   push esi
// 005aab1e  e8ed780600           call 0x612410
// 005aab23  6afe                 push -2
// 005aab25  56                   push esi
// 005aab26  e8c5790600           call 0x6124f0
// 005aab2b  6aff                 push -1
// 005aab2d  56                   push esi
// 005aab2e  e8cd720600           call 0x611e00
// 005aab33  83c42c               add esp, 0x2c
// 005aab36  85c0                 test eax, eax
// 005aab38  7553                 jne 0x5aab8d
// 005aab3a  6afe                 push -2
// 005aab3c  56                   push esi
// 005aab3d  e8de700600           call 0x611c20
// 005aab42  8b542424             mov edx, dword ptr [esp + 0x24]
// 005aab46  8bc4                 mov eax, esp
// 005aab48  8910                 mov dword ptr [eax], edx
// 005aab4a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005aab4e  894804               mov dword ptr [eax + 4], ecx
// 005aab51  8b442428             mov eax, dword ptr [esp + 0x28]
// 005aab55  8964240c             mov dword ptr [esp + 0xc], esp
// 005aab59  85c0                 test eax, eax
// 005aab5b  740c                 je 0x5aab69
// 005aab5d  83c004               add eax, 4
// 005aab60  ba01000000           mov edx, 1
// 005aab65  f00fc110             lock xadd dword ptr [eax], edx
// 005aab69  56                   push esi
// 005aab6a  e861f6ffff           call 0x5aa1d0
// 005aab6f  8b442428             mov eax, dword ptr [esp + 0x28]
// 005aab73  50                   push eax
// 005aab74  56                   push esi
// 005aab75  e896780600           call 0x612410
// 005aab7a  6afe                 push -2
// 005aab7c  56                   push esi
// 005aab7d  e84e720600           call 0x611dd0
// 005aab82  6afc                 push -4
// 005aab84  56                   push esi
// 005aab85  e8867b0600           call 0x612710
// 005aab8a  83c424               add esp, 0x24
// 005aab8d  6afe                 push -2
// 005aab8f  56                   push esi
// 005aab90  e8db700600           call 0x611c70
// 005aab95  83c408               add esp, 8
// 005aab98  8b742420             mov esi, dword ptr [esp + 0x20]
// 005aab9c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005aaba4  85f6                 test esi, esi
// 005aaba6  742a                 je 0x5aabd2
// 005aaba8  8d4e04               lea ecx, [esi + 4]
// 005aabab  83caff               or edx, 0xffffffff
// 005aabae  f00fc111             lock xadd dword ptr [ecx], edx
// 005aabb2  751e                 jne 0x5aabd2
// 005aabb4  8b06                 mov eax, dword ptr [esi]
// 005aabb6  8b5004               mov edx, dword ptr [eax + 4]
// 005aabb9  8bce                 mov ecx, esi
// 005aabbb  ffd2                 call edx
// 005aabbd  8d4608               lea eax, [esi + 8]
// 005aabc0  83c9ff               or ecx, 0xffffffff
// 005aabc3  f00fc108             lock xadd dword ptr [eax], ecx
// 005aabc7  7509                 jne 0x5aabd2
// 005aabc9  8b16                 mov edx, dword ptr [esi]
// 005aabcb  8b4208               mov eax, dword ptr [edx + 8]
// 005aabce  8bce                 mov ecx, esi
// 005aabd0  ffd0                 call eax
// 005aabd2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aabd6  64890d00000000       mov dword ptr fs:[0], ecx
// 005aabdd  5e                   pop esi
// 005aabde  83c410               add esp, 0x10
// 005aabe1  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
