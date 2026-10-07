// roc 2008-06 005aa730  unit: RBX::VScriptContext::?$FactoryProduct  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa730
//
// 005aa730  6aff                 push -1
// 005aa732  6818047c00           push 0x7c0418
// 005aa737  64a100000000         mov eax, dword ptr fs:[0]
// 005aa73d  50                   push eax
// 005aa73e  64892500000000       mov dword ptr fs:[0], esp
// 005aa745  51                   push ecx
// 005aa746  56                   push esi
// 005aa747  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 005aa74c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005aa754  7512                 jne 0x5aa768
// 005aa756  8b442418             mov eax, dword ptr [esp + 0x18]
// 005aa75a  50                   push eax
// 005aa75b  e8807a0600           call 0x6121e0
// 005aa760  83c404               add esp, 4
// 005aa763  e9a0000000           jmp 0x5aa808
// 005aa768  8b742418             mov esi, dword ptr [esp + 0x18]
// 005aa76c  56                   push esi
// 005aa76d  e89e740600           call 0x611c10
// 005aa772  6830a75a00           push 0x5aa730
// 005aa777  56                   push esi
// 005aa778  e8937c0600           call 0x612410
// 005aa77d  68f0d8ffff           push 0xffffd8f0
// 005aa782  56                   push esi
// 005aa783  e8687d0600           call 0x6124f0
// 005aa788  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005aa78c  51                   push ecx
// 005aa78d  56                   push esi
// 005aa78e  e87d7c0600           call 0x612410
// 005aa793  6afe                 push -2
// 005aa795  56                   push esi
// 005aa796  e8557d0600           call 0x6124f0
// 005aa79b  6aff                 push -1
// 005aa79d  56                   push esi
// 005aa79e  e85d760600           call 0x611e00
// 005aa7a3  83c42c               add esp, 0x2c
// 005aa7a6  85c0                 test eax, eax
// 005aa7a8  7553                 jne 0x5aa7fd
// 005aa7aa  6afe                 push -2
// 005aa7ac  56                   push esi
// 005aa7ad  e86e740600           call 0x611c20
// 005aa7b2  8b542424             mov edx, dword ptr [esp + 0x24]
// 005aa7b6  8bc4                 mov eax, esp
// 005aa7b8  8910                 mov dword ptr [eax], edx
// 005aa7ba  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005aa7be  894804               mov dword ptr [eax + 4], ecx
// 005aa7c1  8b442428             mov eax, dword ptr [esp + 0x28]
// 005aa7c5  8964240c             mov dword ptr [esp + 0xc], esp
// 005aa7c9  85c0                 test eax, eax
// 005aa7cb  740c                 je 0x5aa7d9
// 005aa7cd  83c004               add eax, 4
// 005aa7d0  ba01000000           mov edx, 1
// 005aa7d5  f00fc110             lock xadd dword ptr [eax], edx
// 005aa7d9  56                   push esi
// 005aa7da  e831f9ffff           call 0x5aa110
// 005aa7df  8b442428             mov eax, dword ptr [esp + 0x28]
// 005aa7e3  50                   push eax
// 005aa7e4  56                   push esi
// 005aa7e5  e8267c0600           call 0x612410
// 005aa7ea  6afe                 push -2
// 005aa7ec  56                   push esi
// 005aa7ed  e8de750600           call 0x611dd0
// 005aa7f2  6afc                 push -4
// 005aa7f4  56                   push esi
// 005aa7f5  e8167f0600           call 0x612710
// 005aa7fa  83c424               add esp, 0x24
// 005aa7fd  6afe                 push -2
// 005aa7ff  56                   push esi
// 005aa800  e86b740600           call 0x611c70
// 005aa805  83c408               add esp, 8
// 005aa808  8b742420             mov esi, dword ptr [esp + 0x20]
// 005aa80c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005aa814  85f6                 test esi, esi
// 005aa816  742a                 je 0x5aa842
// 005aa818  8d4e04               lea ecx, [esi + 4]
// 005aa81b  83caff               or edx, 0xffffffff
// 005aa81e  f00fc111             lock xadd dword ptr [ecx], edx
// 005aa822  751e                 jne 0x5aa842
// 005aa824  8b06                 mov eax, dword ptr [esi]
// 005aa826  8b5004               mov edx, dword ptr [eax + 4]
// 005aa829  8bce                 mov ecx, esi
// 005aa82b  ffd2                 call edx
// 005aa82d  8d4608               lea eax, [esi + 8]
// 005aa830  83c9ff               or ecx, 0xffffffff
// 005aa833  f00fc108             lock xadd dword ptr [eax], ecx
// 005aa837  7509                 jne 0x5aa842
// 005aa839  8b16                 mov edx, dword ptr [esi]
// 005aa83b  8b4208               mov eax, dword ptr [edx + 8]
// 005aa83e  8bce                 mov ecx, esi
// 005aa840  ffd0                 call eax
// 005aa842  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aa846  64890d00000000       mov dword ptr fs:[0], ecx
// 005aa84d  5e                   pop esi
// 005aa84e  83c410               add esp, 0x10
// 005aa851  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
