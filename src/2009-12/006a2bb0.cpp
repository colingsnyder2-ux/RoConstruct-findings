// roc 2009-12 006a2bb0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a2bb0
//
// 006a2bb0  6aff                 push -1
// 006a2bb2  6828799400           push 0x947928
// 006a2bb7  64a100000000         mov eax, dword ptr fs:[0]
// 006a2bbd  50                   push eax
// 006a2bbe  64892500000000       mov dword ptr fs:[0], esp
// 006a2bc5  51                   push ecx
// 006a2bc6  56                   push esi
// 006a2bc7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 006a2bcc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006a2bd4  7512                 jne 0x6a2be8
// 006a2bd6  8b442418             mov eax, dword ptr [esp + 0x18]
// 006a2bda  50                   push eax
// 006a2bdb  e860610e00           call 0x788d40
// 006a2be0  83c404               add esp, 4
// 006a2be3  e9a0000000           jmp 0x6a2c88
// 006a2be8  8b742418             mov esi, dword ptr [esp + 0x18]
// 006a2bec  56                   push esi
// 006a2bed  e8ae5b0e00           call 0x7887a0
// 006a2bf2  68b02b6a00           push 0x6a2bb0
// 006a2bf7  56                   push esi
// 006a2bf8  e873630e00           call 0x788f70
// 006a2bfd  68f0d8ffff           push 0xffffd8f0
// 006a2c02  56                   push esi
// 006a2c03  e848640e00           call 0x789050
// 006a2c08  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006a2c0c  51                   push ecx
// 006a2c0d  56                   push esi
// 006a2c0e  e85d630e00           call 0x788f70
// 006a2c13  6afe                 push -2
// 006a2c15  56                   push esi
// 006a2c16  e835640e00           call 0x789050
// 006a2c1b  6aff                 push -1
// 006a2c1d  56                   push esi
// 006a2c1e  e86d5d0e00           call 0x788990
// 006a2c23  83c42c               add esp, 0x2c
// 006a2c26  85c0                 test eax, eax
// 006a2c28  7553                 jne 0x6a2c7d
// 006a2c2a  6afe                 push -2
// 006a2c2c  56                   push esi
// 006a2c2d  e87e5b0e00           call 0x7887b0
// 006a2c32  8b542424             mov edx, dword ptr [esp + 0x24]
// 006a2c36  8bc4                 mov eax, esp
// 006a2c38  8910                 mov dword ptr [eax], edx
// 006a2c3a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006a2c3e  894804               mov dword ptr [eax + 4], ecx
// 006a2c41  8b442428             mov eax, dword ptr [esp + 0x28]
// 006a2c45  8964240c             mov dword ptr [esp + 0xc], esp
// 006a2c49  85c0                 test eax, eax
// 006a2c4b  740c                 je 0x6a2c59
// 006a2c4d  83c004               add eax, 4
// 006a2c50  ba01000000           mov edx, 1
// 006a2c55  f00fc110             lock xadd dword ptr [eax], edx
// 006a2c59  56                   push esi
// 006a2c5a  e8f1ecffff           call 0x6a1950
// 006a2c5f  8b442428             mov eax, dword ptr [esp + 0x28]
// 006a2c63  50                   push eax
// 006a2c64  56                   push esi
// 006a2c65  e806630e00           call 0x788f70
// 006a2c6a  6afe                 push -2
// 006a2c6c  56                   push esi
// 006a2c6d  e8ee5c0e00           call 0x788960
// 006a2c72  6afc                 push -4
// 006a2c74  56                   push esi
// 006a2c75  e816660e00           call 0x789290
// 006a2c7a  83c424               add esp, 0x24
// 006a2c7d  6afe                 push -2
// 006a2c7f  56                   push esi
// 006a2c80  e87b5b0e00           call 0x788800
// 006a2c85  83c408               add esp, 8
// 006a2c88  8b742420             mov esi, dword ptr [esp + 0x20]
// 006a2c8c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a2c94  85f6                 test esi, esi
// 006a2c96  742a                 je 0x6a2cc2
// 006a2c98  8d4e04               lea ecx, [esi + 4]
// 006a2c9b  83caff               or edx, 0xffffffff
// 006a2c9e  f00fc111             lock xadd dword ptr [ecx], edx
// 006a2ca2  751e                 jne 0x6a2cc2
// 006a2ca4  8b06                 mov eax, dword ptr [esi]
// 006a2ca6  8b5004               mov edx, dword ptr [eax + 4]
// 006a2ca9  8bce                 mov ecx, esi
// 006a2cab  ffd2                 call edx
// 006a2cad  8d4608               lea eax, [esi + 8]
// 006a2cb0  83c9ff               or ecx, 0xffffffff
// 006a2cb3  f00fc108             lock xadd dword ptr [eax], ecx
// 006a2cb7  7509                 jne 0x6a2cc2
// 006a2cb9  8b16                 mov edx, dword ptr [esi]
// 006a2cbb  8b4208               mov eax, dword ptr [edx + 8]
// 006a2cbe  8bce                 mov ecx, esi
// 006a2cc0  ffd0                 call eax
// 006a2cc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a2cc6  64890d00000000       mov dword ptr fs:[0], ecx
// 006a2ccd  5e                   pop esi
// 006a2cce  83c410               add esp, 0x10
// 006a2cd1  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
