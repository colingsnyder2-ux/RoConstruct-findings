// roc 2008-06 005aa110  unit: RBX::VScriptContext::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa110
//
// 005aa110  64a100000000         mov eax, dword ptr fs:[0]
// 005aa116  6aff                 push -1
// 005aa118  6818047c00           push 0x7c0418
// 005aa11d  50                   push eax
// 005aa11e  64892500000000       mov dword ptr fs:[0], esp
// 005aa125  56                   push esi
// 005aa126  57                   push edi
// 005aa127  8b742418             mov esi, dword ptr [esp + 0x18]
// 005aa12b  6a08                 push 8
// 005aa12d  56                   push esi
// 005aa12e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005aa136  e8058b0600           call 0x612c40
// 005aa13b  8bf8                 mov edi, eax
// 005aa13d  83c408               add esp, 8
// 005aa140  85ff                 test edi, edi
// 005aa142  7421                 je 0x5aa165
// 005aa144  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aa148  8907                 mov dword ptr [edi], eax
// 005aa14a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005aa14e  894f04               mov dword ptr [edi + 4], ecx
// 005aa151  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa155  85c0                 test eax, eax
// 005aa157  740c                 je 0x5aa165
// 005aa159  83c004               add eax, 4
// 005aa15c  ba01000000           mov edx, 1
// 005aa161  f00fc110             lock xadd dword ptr [eax], edx
// 005aa165  a174af9500           mov eax, dword ptr [0x95af74]
// 005aa16a  50                   push eax
// 005aa16b  68f0d8ffff           push 0xffffd8f0
// 005aa170  56                   push esi
// 005aa171  e81a830600           call 0x612490
// 005aa176  6afe                 push -2
// 005aa178  56                   push esi
// 005aa179  e872860600           call 0x6127f0
// 005aa17e  8b742434             mov esi, dword ptr [esp + 0x34]
// 005aa182  83c414               add esp, 0x14
// 005aa185  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005aa18d  85f6                 test esi, esi
// 005aa18f  742a                 je 0x5aa1bb
// 005aa191  8d4e04               lea ecx, [esi + 4]
// 005aa194  83caff               or edx, 0xffffffff
// 005aa197  f00fc111             lock xadd dword ptr [ecx], edx
// 005aa19b  751e                 jne 0x5aa1bb
// 005aa19d  8b06                 mov eax, dword ptr [esi]
// 005aa19f  8b5004               mov edx, dword ptr [eax + 4]
// 005aa1a2  8bce                 mov ecx, esi
// 005aa1a4  ffd2                 call edx
// 005aa1a6  8d4608               lea eax, [esi + 8]
// 005aa1a9  83c9ff               or ecx, 0xffffffff
// 005aa1ac  f00fc108             lock xadd dword ptr [eax], ecx
// 005aa1b0  7509                 jne 0x5aa1bb
// 005aa1b2  8b16                 mov edx, dword ptr [esi]
// 005aa1b4  8b4208               mov eax, dword ptr [edx + 8]
// 005aa1b7  8bce                 mov ecx, esi
// 005aa1b9  ffd0                 call eax
// 005aa1bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aa1bf  8bc7                 mov eax, edi
// 005aa1c1  5f                   pop edi
// 005aa1c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005aa1c9  5e                   pop esi
// 005aa1ca  83c40c               add esp, 0xc
// 005aa1cd  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
