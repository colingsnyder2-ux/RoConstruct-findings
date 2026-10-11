// roc 2007-03 005bf830  unit: seg_005b0000  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bf830
//
// 005bf830  64a100000000         mov eax, dword ptr fs:[0]
// 005bf836  6aff                 push -1
// 005bf838  687ba57500           push 0x75a57b
// 005bf83d  50                   push eax
// 005bf83e  8b442410             mov eax, dword ptr [esp + 0x10]
// 005bf842  64892500000000       mov dword ptr fs:[0], esp
// 005bf849  8b00                 mov eax, dword ptr [eax]
// 005bf84b  81ec88000000         sub esp, 0x88
// 005bf851  85c0                 test eax, eax
// 005bf853  753e                 jne 0x5bf893
// 005bf855  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 005bf85c  51                   push ecx
// 005bf85d  8d54242c             lea edx, [esp + 0x2c]
// 005bf861  682c967b00           push 0x7b962c
// 005bf866  52                   push edx
// 005bf867  e8c45af3ff           call 0x4f5330
// 005bf86c  83c40c               add esp, 0xc
// 005bf86f  50                   push eax
// 005bf870  8d4c2404             lea ecx, [esp + 4]
// 005bf874  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 005bf87f  e89c44e5ff           call 0x413d20
// 005bf884  68e0138400           push 0x8413e0
// 005bf889  8d442404             lea eax, [esp + 4]
// 005bf88d  50                   push eax
// 005bf88e  e89bf70500           call 0x61f02e
// 005bf893  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 005bf89a  56                   push esi
// 005bf89b  57                   push edi
// 005bf89c  bf74b47900           mov edi, 0x79b474
// 005bf8a1  8bf0                 mov esi, eax
// 005bf8a3  b908000000           mov ecx, 8
// 005bf8a8  33d2                 xor edx, edx
// 005bf8aa  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bf8ac  7508                 jne 0x5bf8b6
// 005bf8ae  52                   push edx
// 005bf8af  6810f75b00           push 0x5bf710
// 005bf8b4  eb18                 jmp 0x5bf8ce
// 005bf8b6  bf7c5d7a00           mov edi, 0x7a5d7c
// 005bf8bb  8bf0                 mov esi, eax
// 005bf8bd  b905000000           mov ecx, 5
// 005bf8c2  33d2                 xor edx, edx
// 005bf8c4  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bf8c6  7532                 jne 0x5bf8fa
// 005bf8c8  52                   push edx
// 005bf8c9  6870f55b00           push 0x5bf570
// 005bf8ce  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 005bf8d5  50                   push eax
// 005bf8d6  e8b598ffff           call 0x5b9190
// 005bf8db  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 005bf8e2  83c40c               add esp, 0xc
// 005bf8e5  5f                   pop edi
// 005bf8e6  b801000000           mov eax, 1
// 005bf8eb  5e                   pop esi
// 005bf8ec  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf8f3  81c494000000         add esp, 0x94
// 005bf8f9  c3                   ret 
// 005bf8fa  bf9cb47900           mov edi, 0x79b49c
// 005bf8ff  8bf0                 mov esi, eax
// 005bf901  b90b000000           mov ecx, 0xb
// 005bf906  33d2                 xor edx, edx
// 005bf908  f3a6                 repe cmpsb byte ptr [esi], byte ptr es:[edi]
// 005bf90a  7536                 jne 0x5bf942
// 005bf90c  8d442430             lea eax, [esp + 0x30]
// 005bf910  6888967b00           push 0x7b9688
// 005bf915  50                   push eax
// 005bf916  e8155af3ff           call 0x4f5330
// 005bf91b  83c408               add esp, 8
// 005bf91e  50                   push eax
// 005bf91f  8d4c240c             lea ecx, [esp + 0xc]
// 005bf923  c784249c00000001000000 mov dword ptr [esp + 0x9c], 1
// 005bf92e  e8ed43e5ff           call 0x413d20
// 005bf933  68e0138400           push 0x8413e0
// 005bf938  8d4c240c             lea ecx, [esp + 0xc]
// 005bf93c  51                   push ecx
// 005bf93d  e8ecf60500           call 0x61f02e
// 005bf942  50                   push eax
// 005bf943  8d542478             lea edx, [esp + 0x78]
// 005bf947  6808b67a00           push 0x7ab608
// 005bf94c  52                   push edx
// 005bf94d  e8de59f3ff           call 0x4f5330
// 005bf952  83c40c               add esp, 0xc
// 005bf955  50                   push eax
// 005bf956  8d4c2450             lea ecx, [esp + 0x50]
// 005bf95a  c784249c00000002000000 mov dword ptr [esp + 0x9c], 2
// 005bf965  e8b643e5ff           call 0x413d20
// 005bf96a  68e0138400           push 0x8413e0
// 005bf96f  8d442450             lea eax, [esp + 0x50]
// 005bf973  50                   push eax
// 005bf974  e8b5f60500           call 0x61f02e
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHABV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
