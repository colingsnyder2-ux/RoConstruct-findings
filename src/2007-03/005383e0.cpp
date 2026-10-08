// roc 2007-03 005383e0  unit: seg_00530000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005383e0
//
// 005383e0  6aff                 push -1
// 005383e2  68a8d57400           push 0x74d5a8
// 005383e7  64a100000000         mov eax, dword ptr fs:[0]
// 005383ed  50                   push eax
// 005383ee  64892500000000       mov dword ptr fs:[0], esp
// 005383f5  51                   push ecx
// 005383f6  53                   push ebx
// 005383f7  56                   push esi
// 005383f8  57                   push edi
// 005383f9  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005383fd  85db                 test ebx, ebx
// 005383ff  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00538403  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0053840b  7512                 jne 0x53841f
// 0053840d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00538411  50                   push eax
// 00538412  e8090c0800           call 0x5b9020
// 00538417  83c404               add esp, 4
// 0053841a  e98c000000           jmp 0x5384ab
// 0053841f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00538423  56                   push esi
// 00538424  e827060800           call 0x5b8a50
// 00538429  68e0835300           push 0x5383e0
// 0053842e  56                   push esi
// 0053842f  e81c0e0800           call 0x5b9250
// 00538434  68f0d8ffff           push 0xffffd8f0
// 00538439  56                   push esi
// 0053843a  e8f10e0800           call 0x5b9330
// 0053843f  53                   push ebx
// 00538440  56                   push esi
// 00538441  e80a0e0800           call 0x5b9250
// 00538446  6afe                 push -2
// 00538448  56                   push esi
// 00538449  e8e20e0800           call 0x5b9330
// 0053844e  6aff                 push -1
// 00538450  56                   push esi
// 00538451  e8ea070800           call 0x5b8c40
// 00538456  83c42c               add esp, 0x2c
// 00538459  85c0                 test eax, eax
// 0053845b  7543                 jne 0x5384a0
// 0053845d  6afe                 push -2
// 0053845f  56                   push esi
// 00538460  e8fb050800           call 0x5b8a60
// 00538465  85ff                 test edi, edi
// 00538467  8bc4                 mov eax, esp
// 00538469  8918                 mov dword ptr [eax], ebx
// 0053846b  89642414             mov dword ptr [esp + 0x14], esp
// 0053846f  897804               mov dword ptr [eax + 4], edi
// 00538472  740c                 je 0x538480
// 00538474  8d4f04               lea ecx, [edi + 4]
// 00538477  ba01000000           mov edx, 1
// 0053847c  f00fc111             lock xadd dword ptr [ecx], edx
// 00538480  56                   push esi
// 00538481  e8caf7ffff           call 0x537c50
// 00538486  53                   push ebx
// 00538487  56                   push esi
// 00538488  e8c30d0800           call 0x5b9250
// 0053848d  6afe                 push -2
// 0053848f  56                   push esi
// 00538490  e87b070800           call 0x5b8c10
// 00538495  6afc                 push -4
// 00538497  56                   push esi
// 00538498  e8b3100800           call 0x5b9550
// 0053849d  83c424               add esp, 0x24
// 005384a0  6afe                 push -2
// 005384a2  56                   push esi
// 005384a3  e808060800           call 0x5b8ab0
// 005384a8  83c408               add esp, 8
// 005384ab  85ff                 test edi, edi
// 005384ad  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005384b5  742a                 je 0x5384e1
// 005384b7  8d4704               lea eax, [edi + 4]
// 005384ba  83c9ff               or ecx, 0xffffffff
// 005384bd  f00fc108             lock xadd dword ptr [eax], ecx
// 005384c1  751e                 jne 0x5384e1
// 005384c3  8b17                 mov edx, dword ptr [edi]
// 005384c5  8b4204               mov eax, dword ptr [edx + 4]
// 005384c8  8bcf                 mov ecx, edi
// 005384ca  ffd0                 call eax
// 005384cc  8d4f08               lea ecx, [edi + 8]
// 005384cf  83caff               or edx, 0xffffffff
// 005384d2  f00fc111             lock xadd dword ptr [ecx], edx
// 005384d6  7509                 jne 0x5384e1
// 005384d8  8b07                 mov eax, dword ptr [edi]
// 005384da  8b5008               mov edx, dword ptr [eax + 8]
// 005384dd  8bcf                 mov ecx, edi
// 005384df  ffd2                 call edx
// 005384e1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005384e5  5f                   pop edi
// 005384e6  5e                   pop esi
// 005384e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005384ee  5b                   pop ebx
// 005384ef  83c410               add esp, 0x10
// 005384f2  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
