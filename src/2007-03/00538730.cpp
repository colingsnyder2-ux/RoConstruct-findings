// roc 2007-03 00538730  unit: seg_00530000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00538730
//
// 00538730  6aff                 push -1
// 00538732  68a8d57400           push 0x74d5a8
// 00538737  64a100000000         mov eax, dword ptr fs:[0]
// 0053873d  50                   push eax
// 0053873e  64892500000000       mov dword ptr fs:[0], esp
// 00538745  51                   push ecx
// 00538746  53                   push ebx
// 00538747  56                   push esi
// 00538748  57                   push edi
// 00538749  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053874d  85db                 test ebx, ebx
// 0053874f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00538753  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0053875b  7512                 jne 0x53876f
// 0053875d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00538761  50                   push eax
// 00538762  e8b9080800           call 0x5b9020
// 00538767  83c404               add esp, 4
// 0053876a  e98c000000           jmp 0x5387fb
// 0053876f  8b742420             mov esi, dword ptr [esp + 0x20]
// 00538773  56                   push esi
// 00538774  e8d7020800           call 0x5b8a50
// 00538779  6830875300           push 0x538730
// 0053877e  56                   push esi
// 0053877f  e8cc0a0800           call 0x5b9250
// 00538784  68f0d8ffff           push 0xffffd8f0
// 00538789  56                   push esi
// 0053878a  e8a10b0800           call 0x5b9330
// 0053878f  53                   push ebx
// 00538790  56                   push esi
// 00538791  e8ba0a0800           call 0x5b9250
// 00538796  6afe                 push -2
// 00538798  56                   push esi
// 00538799  e8920b0800           call 0x5b9330
// 0053879e  6aff                 push -1
// 005387a0  56                   push esi
// 005387a1  e89a040800           call 0x5b8c40
// 005387a6  83c42c               add esp, 0x2c
// 005387a9  85c0                 test eax, eax
// 005387ab  7543                 jne 0x5387f0
// 005387ad  6afe                 push -2
// 005387af  56                   push esi
// 005387b0  e8ab020800           call 0x5b8a60
// 005387b5  85ff                 test edi, edi
// 005387b7  8bc4                 mov eax, esp
// 005387b9  8918                 mov dword ptr [eax], ebx
// 005387bb  89642414             mov dword ptr [esp + 0x14], esp
// 005387bf  897804               mov dword ptr [eax + 4], edi
// 005387c2  740c                 je 0x5387d0
// 005387c4  8d4f04               lea ecx, [edi + 4]
// 005387c7  ba01000000           mov edx, 1
// 005387cc  f00fc111             lock xadd dword ptr [ecx], edx
// 005387d0  56                   push esi
// 005387d1  e83af5ffff           call 0x537d10
// 005387d6  53                   push ebx
// 005387d7  56                   push esi
// 005387d8  e8730a0800           call 0x5b9250
// 005387dd  6afe                 push -2
// 005387df  56                   push esi
// 005387e0  e82b040800           call 0x5b8c10
// 005387e5  6afc                 push -4
// 005387e7  56                   push esi
// 005387e8  e8630d0800           call 0x5b9550
// 005387ed  83c424               add esp, 0x24
// 005387f0  6afe                 push -2
// 005387f2  56                   push esi
// 005387f3  e8b8020800           call 0x5b8ab0
// 005387f8  83c408               add esp, 8
// 005387fb  85ff                 test edi, edi
// 005387fd  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00538805  742a                 je 0x538831
// 00538807  8d4704               lea eax, [edi + 4]
// 0053880a  83c9ff               or ecx, 0xffffffff
// 0053880d  f00fc108             lock xadd dword ptr [eax], ecx
// 00538811  751e                 jne 0x538831
// 00538813  8b17                 mov edx, dword ptr [edi]
// 00538815  8b4204               mov eax, dword ptr [edx + 4]
// 00538818  8bcf                 mov ecx, edi
// 0053881a  ffd0                 call eax
// 0053881c  8d4f08               lea ecx, [edi + 8]
// 0053881f  83caff               or edx, 0xffffffff
// 00538822  f00fc111             lock xadd dword ptr [ecx], edx
// 00538826  7509                 jne 0x538831
// 00538828  8b07                 mov eax, dword ptr [edi]
// 0053882a  8b5008               mov edx, dword ptr [eax + 8]
// 0053882d  8bcf                 mov ecx, edi
// 0053882f  ffd2                 call edx
// 00538831  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00538835  5f                   pop edi
// 00538836  5e                   pop esi
// 00538837  64890d00000000       mov dword ptr fs:[0], ecx
// 0053883e  5b                   pop ebx
// 0053883f  83c410               add esp, 0x10
// 00538842  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?push@?$SharedPtrBridge@VDescribedBase@Reflection@RBX@@@Lua@RBX@@SAXPAUlua_State@@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
