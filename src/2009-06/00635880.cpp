// roc 2009-06 00635880  unit: RBX::Lua::VFunctionRef::?$holder  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635880
//
// 00635880  6aff                 push -1
// 00635882  6808b08600           push 0x86b008
// 00635887  64a100000000         mov eax, dword ptr fs:[0]
// 0063588d  50                   push eax
// 0063588e  64892500000000       mov dword ptr fs:[0], esp
// 00635895  51                   push ecx
// 00635896  56                   push esi
// 00635897  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0063589c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006358a4  7512                 jne 0x6358b8
// 006358a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006358aa  50                   push eax
// 006358ab  e8703a0800           call 0x6b9320
// 006358b0  83c404               add esp, 4
// 006358b3  e9a0000000           jmp 0x635958
// 006358b8  8b742418             mov esi, dword ptr [esp + 0x18]
// 006358bc  56                   push esi
// 006358bd  e8be340800           call 0x6b8d80
// 006358c2  6880586300           push 0x635880
// 006358c7  56                   push esi
// 006358c8  e8833c0800           call 0x6b9550
// 006358cd  68f0d8ffff           push 0xffffd8f0
// 006358d2  56                   push esi
// 006358d3  e8583d0800           call 0x6b9630
// 006358d8  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006358dc  51                   push ecx
// 006358dd  56                   push esi
// 006358de  e86d3c0800           call 0x6b9550
// 006358e3  6afe                 push -2
// 006358e5  56                   push esi
// 006358e6  e8453d0800           call 0x6b9630
// 006358eb  6aff                 push -1
// 006358ed  56                   push esi
// 006358ee  e87d360800           call 0x6b8f70
// 006358f3  83c42c               add esp, 0x2c
// 006358f6  85c0                 test eax, eax
// 006358f8  7553                 jne 0x63594d
// 006358fa  6afe                 push -2
// 006358fc  56                   push esi
// 006358fd  e88e340800           call 0x6b8d90
// 00635902  8b542424             mov edx, dword ptr [esp + 0x24]
// 00635906  8bc4                 mov eax, esp
// 00635908  8910                 mov dword ptr [eax], edx
// 0063590a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0063590e  894804               mov dword ptr [eax + 4], ecx
// 00635911  8b442428             mov eax, dword ptr [esp + 0x28]
// 00635915  8964240c             mov dword ptr [esp + 0xc], esp
// 00635919  85c0                 test eax, eax
// 0063591b  740c                 je 0x635929
// 0063591d  83c004               add eax, 4
// 00635920  ba01000000           mov edx, 1
// 00635925  f00fc110             lock xadd dword ptr [eax], edx
// 00635929  56                   push esi
// 0063592a  e841f7ffff           call 0x635070
// 0063592f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00635933  50                   push eax
// 00635934  56                   push esi
// 00635935  e8163c0800           call 0x6b9550
// 0063593a  6afe                 push -2
// 0063593c  56                   push esi
// 0063593d  e8fe350800           call 0x6b8f40
// 00635942  6afc                 push -4
// 00635944  56                   push esi
// 00635945  e8263f0800           call 0x6b9870
// 0063594a  83c424               add esp, 0x24
// 0063594d  6afe                 push -2
// 0063594f  56                   push esi
// 00635950  e88b340800           call 0x6b8de0
// 00635955  83c408               add esp, 8
// 00635958  8b742420             mov esi, dword ptr [esp + 0x20]
// 0063595c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00635964  85f6                 test esi, esi
// 00635966  742a                 je 0x635992
// 00635968  8d4e04               lea ecx, [esi + 4]
// 0063596b  83caff               or edx, 0xffffffff
// 0063596e  f00fc111             lock xadd dword ptr [ecx], edx
// 00635972  751e                 jne 0x635992
// 00635974  8b06                 mov eax, dword ptr [esi]
// 00635976  8b5004               mov edx, dword ptr [eax + 4]
// 00635979  8bce                 mov ecx, esi
// 0063597b  ffd2                 call edx
// 0063597d  8d4608               lea eax, [esi + 8]
// 00635980  83c9ff               or ecx, 0xffffffff
// 00635983  f00fc108             lock xadd dword ptr [eax], ecx
// 00635987  7509                 jne 0x635992
// 00635989  8b16                 mov edx, dword ptr [esi]
// 0063598b  8b4208               mov eax, dword ptr [edx + 8]
// 0063598e  8bce                 mov ecx, esi
// 00635990  ffd0                 call eax
// 00635992  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00635996  64890d00000000       mov dword ptr fs:[0], ecx
// 0063599d  5e                   pop esi
// 0063599e  83c410               add esp, 0x10
// 006359a1  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
