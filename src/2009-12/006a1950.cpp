// roc 2009-12 006a1950  unit: RBX::VScriptContext::?$FactoryProduct  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1950
//
// 006a1950  64a100000000         mov eax, dword ptr fs:[0]
// 006a1956  6aff                 push -1
// 006a1958  6828799400           push 0x947928
// 006a195d  50                   push eax
// 006a195e  64892500000000       mov dword ptr fs:[0], esp
// 006a1965  56                   push esi
// 006a1966  57                   push edi
// 006a1967  8b742418             mov esi, dword ptr [esp + 0x18]
// 006a196b  6a08                 push 8
// 006a196d  56                   push esi
// 006a196e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006a1976  e8757e0e00           call 0x7897f0
// 006a197b  8bf8                 mov edi, eax
// 006a197d  83c408               add esp, 8
// 006a1980  85ff                 test edi, edi
// 006a1982  7421                 je 0x6a19a5
// 006a1984  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a1988  8907                 mov dword ptr [edi], eax
// 006a198a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a198e  894f04               mov dword ptr [edi + 4], ecx
// 006a1991  8b442420             mov eax, dword ptr [esp + 0x20]
// 006a1995  85c0                 test eax, eax
// 006a1997  740c                 je 0x6a19a5
// 006a1999  83c004               add eax, 4
// 006a199c  ba01000000           mov edx, 1
// 006a19a1  f00fc110             lock xadd dword ptr [eax], edx
// 006a19a5  a1cc24b600           mov eax, dword ptr [0xb624cc]
// 006a19aa  50                   push eax
// 006a19ab  68f0d8ffff           push 0xffffd8f0
// 006a19b0  56                   push esi
// 006a19b1  e83a760e00           call 0x788ff0
// 006a19b6  6afe                 push -2
// 006a19b8  56                   push esi
// 006a19b9  e8c2790e00           call 0x789380
// 006a19be  8b742434             mov esi, dword ptr [esp + 0x34]
// 006a19c2  83c414               add esp, 0x14
// 006a19c5  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a19cd  85f6                 test esi, esi
// 006a19cf  742a                 je 0x6a19fb
// 006a19d1  8d4e04               lea ecx, [esi + 4]
// 006a19d4  83caff               or edx, 0xffffffff
// 006a19d7  f00fc111             lock xadd dword ptr [ecx], edx
// 006a19db  751e                 jne 0x6a19fb
// 006a19dd  8b06                 mov eax, dword ptr [esi]
// 006a19df  8b5004               mov edx, dword ptr [eax + 4]
// 006a19e2  8bce                 mov ecx, esi
// 006a19e4  ffd2                 call edx
// 006a19e6  8d4608               lea eax, [esi + 8]
// 006a19e9  83c9ff               or ecx, 0xffffffff
// 006a19ec  f00fc108             lock xadd dword ptr [eax], ecx
// 006a19f0  7509                 jne 0x6a19fb
// 006a19f2  8b16                 mov edx, dword ptr [esi]
// 006a19f4  8b4208               mov eax, dword ptr [edx + 8]
// 006a19f7  8bce                 mov ecx, esi
// 006a19f9  ffd0                 call eax
// 006a19fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a19ff  8bc7                 mov eax, edi
// 006a1a01  5f                   pop edi
// 006a1a02  64890d00000000       mov dword ptr fs:[0], ecx
// 006a1a09  5e                   pop esi
// 006a1a0a  83c40c               add esp, 0xc
// 006a1a0d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$pushNewObject@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@SAPAV?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@PAUlua_State@@V34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
