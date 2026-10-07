// roc 2010-06 0060e7e0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060e7e0
//
// 0060e7e0  6aff                 push -1
// 0060e7e2  68e8679900           push 0x9967e8
// 0060e7e7  64a100000000         mov eax, dword ptr fs:[0]
// 0060e7ed  50                   push eax
// 0060e7ee  64892500000000       mov dword ptr fs:[0], esp
// 0060e7f5  51                   push ecx
// 0060e7f6  56                   push esi
// 0060e7f7  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0060e7fc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0060e804  7512                 jne 0x60e818
// 0060e806  8b442418             mov eax, dword ptr [esp + 0x18]
// 0060e80a  50                   push eax
// 0060e80b  e8e02c1100           call 0x7214f0
// 0060e810  83c404               add esp, 4
// 0060e813  e9a0000000           jmp 0x60e8b8
// 0060e818  8b742418             mov esi, dword ptr [esp + 0x18]
// 0060e81c  56                   push esi
// 0060e81d  e82e271100           call 0x720f50
// 0060e822  68e0e76000           push 0x60e7e0
// 0060e827  56                   push esi
// 0060e828  e8f32e1100           call 0x721720
// 0060e82d  68f0d8ffff           push 0xffffd8f0
// 0060e832  56                   push esi
// 0060e833  e8c82f1100           call 0x721800
// 0060e838  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060e83c  51                   push ecx
// 0060e83d  56                   push esi
// 0060e83e  e8dd2e1100           call 0x721720
// 0060e843  6afe                 push -2
// 0060e845  56                   push esi
// 0060e846  e8b52f1100           call 0x721800
// 0060e84b  6aff                 push -1
// 0060e84d  56                   push esi
// 0060e84e  e8ed281100           call 0x721140
// 0060e853  83c42c               add esp, 0x2c
// 0060e856  85c0                 test eax, eax
// 0060e858  7553                 jne 0x60e8ad
// 0060e85a  6afe                 push -2
// 0060e85c  56                   push esi
// 0060e85d  e8fe261100           call 0x720f60
// 0060e862  8b542424             mov edx, dword ptr [esp + 0x24]
// 0060e866  8bc4                 mov eax, esp
// 0060e868  8910                 mov dword ptr [eax], edx
// 0060e86a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060e86e  894804               mov dword ptr [eax + 4], ecx
// 0060e871  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060e875  8964240c             mov dword ptr [esp + 0xc], esp
// 0060e879  85c0                 test eax, eax
// 0060e87b  740c                 je 0x60e889
// 0060e87d  83c004               add eax, 4
// 0060e880  ba01000000           mov edx, 1
// 0060e885  f00fc110             lock xadd dword ptr [eax], edx
// 0060e889  56                   push esi
// 0060e88a  e821edffff           call 0x60d5b0
// 0060e88f  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060e893  50                   push eax
// 0060e894  56                   push esi
// 0060e895  e8862e1100           call 0x721720
// 0060e89a  6afe                 push -2
// 0060e89c  56                   push esi
// 0060e89d  e86e281100           call 0x721110
// 0060e8a2  6afc                 push -4
// 0060e8a4  56                   push esi
// 0060e8a5  e896311100           call 0x721a40
// 0060e8aa  83c424               add esp, 0x24
// 0060e8ad  6afe                 push -2
// 0060e8af  56                   push esi
// 0060e8b0  e8fb261100           call 0x720fb0
// 0060e8b5  83c408               add esp, 8
// 0060e8b8  8b742420             mov esi, dword ptr [esp + 0x20]
// 0060e8bc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0060e8c4  85f6                 test esi, esi
// 0060e8c6  742a                 je 0x60e8f2
// 0060e8c8  8d4e04               lea ecx, [esi + 4]
// 0060e8cb  83caff               or edx, 0xffffffff
// 0060e8ce  f00fc111             lock xadd dword ptr [ecx], edx
// 0060e8d2  751e                 jne 0x60e8f2
// 0060e8d4  8b06                 mov eax, dword ptr [esi]
// 0060e8d6  8b5004               mov edx, dword ptr [eax + 4]
// 0060e8d9  8bce                 mov ecx, esi
// 0060e8db  ffd2                 call edx
// 0060e8dd  8d4608               lea eax, [esi + 8]
// 0060e8e0  83c9ff               or ecx, 0xffffffff
// 0060e8e3  f00fc108             lock xadd dword ptr [eax], ecx
// 0060e8e7  7509                 jne 0x60e8f2
// 0060e8e9  8b16                 mov edx, dword ptr [esi]
// 0060e8eb  8b4208               mov eax, dword ptr [edx + 8]
// 0060e8ee  8bce                 mov ecx, esi
// 0060e8f0  ffd0                 call eax
// 0060e8f2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060e8f6  64890d00000000       mov dword ptr fs:[0], ecx
// 0060e8fd  5e                   pop esi
// 0060e8fe  83c410               add esp, 0x10
// 0060e901  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
