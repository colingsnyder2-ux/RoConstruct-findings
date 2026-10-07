// roc 2008-06 005aa1d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aa1d0
//
// 005aa1d0  64a100000000         mov eax, dword ptr fs:[0]
// 005aa1d6  6aff                 push -1
// 005aa1d8  6818047c00           push 0x7c0418
// 005aa1dd  50                   push eax
// 005aa1de  64892500000000       mov dword ptr fs:[0], esp
// 005aa1e5  56                   push esi
// 005aa1e6  57                   push edi
// 005aa1e7  8b742418             mov esi, dword ptr [esp + 0x18]
// 005aa1eb  6a08                 push 8
// 005aa1ed  56                   push esi
// 005aa1ee  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005aa1f6  e8458a0600           call 0x612c40
// 005aa1fb  8bf8                 mov edi, eax
// 005aa1fd  83c408               add esp, 8
// 005aa200  85ff                 test edi, edi
// 005aa202  7421                 je 0x5aa225
// 005aa204  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aa208  8907                 mov dword ptr [edi], eax
// 005aa20a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005aa20e  894f04               mov dword ptr [edi + 4], ecx
// 005aa211  8b442420             mov eax, dword ptr [esp + 0x20]
// 005aa215  85c0                 test eax, eax
// 005aa217  740c                 je 0x5aa225
// 005aa219  83c004               add eax, 4
// 005aa21c  ba01000000           mov edx, 1
// 005aa221  f00fc110             lock xadd dword ptr [eax], edx
// 005aa225  a1e4b19500           mov eax, dword ptr [0x95b1e4]
// 005aa22a  50                   push eax
// 005aa22b  68f0d8ffff           push 0xffffd8f0
// 005aa230  56                   push esi
// 005aa231  e85a820600           call 0x612490
// 005aa236  6afe                 push -2
// 005aa238  56                   push esi
// 005aa239  e8b2850600           call 0x6127f0
// 005aa23e  8b742434             mov esi, dword ptr [esp + 0x34]
// 005aa242  83c414               add esp, 0x14
// 005aa245  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005aa24d  85f6                 test esi, esi
// 005aa24f  742a                 je 0x5aa27b
// 005aa251  8d4e04               lea ecx, [esi + 4]
// 005aa254  83caff               or edx, 0xffffffff
// 005aa257  f00fc111             lock xadd dword ptr [ecx], edx
// 005aa25b  751e                 jne 0x5aa27b
// 005aa25d  8b06                 mov eax, dword ptr [esi]
// 005aa25f  8b5004               mov edx, dword ptr [eax + 4]
// 005aa262  8bce                 mov ecx, esi
// 005aa264  ffd2                 call edx
// 005aa266  8d4608               lea eax, [esi + 8]
// 005aa269  83c9ff               or ecx, 0xffffffff
// 005aa26c  f00fc108             lock xadd dword ptr [eax], ecx
// 005aa270  7509                 jne 0x5aa27b
// 005aa272  8b16                 mov edx, dword ptr [esi]
// 005aa274  8b4208               mov eax, dword ptr [edx + 8]
// 005aa277  8bce                 mov ecx, esi
// 005aa279  ffd0                 call eax
// 005aa27b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aa27f  8bc7                 mov eax, edi
// 005aa281  5f                   pop edi
// 005aa282  64890d00000000       mov dword ptr fs:[0], ecx
// 005aa289  5e                   pop esi
// 005aa28a  83c40c               add esp, 0xc
// 005aa28d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
