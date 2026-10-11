// roc 2008-06 0061f480  unit: RBX::Lua::LuaArguments  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f480
//
// 0061f480  64a100000000         mov eax, dword ptr fs:[0]
// 0061f486  6aff                 push -1
// 0061f488  68b9fe7c00           push 0x7cfeb9
// 0061f48d  50                   push eax
// 0061f48e  64892500000000       mov dword ptr fs:[0], esp
// 0061f495  83ec44               sub esp, 0x44
// 0061f498  56                   push esi
// 0061f499  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0061f49d  b978468400           mov ecx, 0x844678
// 0061f4a2  8bc6                 mov eax, esi
// 0061f4a4  8a10                 mov dl, byte ptr [eax]
// 0061f4a6  3a11                 cmp dl, byte ptr [ecx]
// 0061f4a8  751a                 jne 0x61f4c4
// 0061f4aa  84d2                 test dl, dl
// 0061f4ac  7412                 je 0x61f4c0
// 0061f4ae  8a5001               mov dl, byte ptr [eax + 1]
// 0061f4b1  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061f4b4  750e                 jne 0x61f4c4
// 0061f4b6  83c002               add eax, 2
// 0061f4b9  83c102               add ecx, 2
// 0061f4bc  84d2                 test dl, dl
// 0061f4be  75e4                 jne 0x61f4a4
// 0061f4c0  33c0                 xor eax, eax
// 0061f4c2  eb05                 jmp 0x61f4c9
// 0061f4c4  1bc0                 sbb eax, eax
// 0061f4c6  83d8ff               sbb eax, -1
// 0061f4c9  85c0                 test eax, eax
// 0061f4cb  7528                 jne 0x61f4f5
// 0061f4cd  50                   push eax
// 0061f4ce  8b442464             mov eax, dword ptr [esp + 0x64]
// 0061f4d2  68d0f36100           push 0x61f3d0
// 0061f4d7  50                   push eax
// 0061f4d8  e8732effff           call 0x612350
// 0061f4dd  83c40c               add esp, 0xc
// 0061f4e0  b801000000           mov eax, 1
// 0061f4e5  5e                   pop esi
// 0061f4e6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0061f4ea  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f4f1  83c450               add esp, 0x50
// 0061f4f4  c3                   ret 
// 0061f4f5  b96c468400           mov ecx, 0x84466c
// 0061f4fa  8bc6                 mov eax, esi
// 0061f4fc  8d642400             lea esp, [esp]
// 0061f500  8a10                 mov dl, byte ptr [eax]
// 0061f502  3a11                 cmp dl, byte ptr [ecx]
// 0061f504  751a                 jne 0x61f520
// 0061f506  84d2                 test dl, dl
// 0061f508  7412                 je 0x61f51c
// 0061f50a  8a5001               mov dl, byte ptr [eax + 1]
// 0061f50d  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061f510  750e                 jne 0x61f520
// 0061f512  83c002               add eax, 2
// 0061f515  83c102               add ecx, 2
// 0061f518  84d2                 test dl, dl
// 0061f51a  75e4                 jne 0x61f500
// 0061f51c  33c0                 xor eax, eax
// 0061f51e  eb05                 jmp 0x61f525
// 0061f520  1bc0                 sbb eax, eax
// 0061f522  83d8ff               sbb eax, -1
// 0061f525  85c0                 test eax, eax
// 0061f527  7540                 jne 0x61f569
// 0061f529  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0061f52d  8b4104               mov eax, dword ptr [ecx + 4]
// 0061f530  85c0                 test eax, eax
// 0061f532  740d                 je 0x61f541
// 0061f534  83780800             cmp dword ptr [eax + 8], 0
// 0061f538  7407                 je 0x61f541
// 0061f53a  b801000000           mov eax, 1
// 0061f53f  eb02                 jmp 0x61f543
// 0061f541  33c0                 xor eax, eax
// 0061f543  0fb6d0               movzx edx, al
// 0061f546  8b442460             mov eax, dword ptr [esp + 0x60]
// 0061f54a  52                   push edx
// 0061f54b  50                   push eax
// 0061f54c  e89f2effff           call 0x6123f0
// 0061f551  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0061f555  83c408               add esp, 8
// 0061f558  b801000000           mov eax, 1
// 0061f55d  5e                   pop esi
// 0061f55e  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f565  83c450               add esp, 0x50
// 0061f568  c3                   ret 
// 0061f569  56                   push esi
// 0061f56a  8d4c2408             lea ecx, [esp + 8]
// 0061f56e  6808228300           push 0x832208
// 0061f573  51                   push ecx
// 0061f574  e897a5eeff           call 0x509b10
// 0061f579  83c40c               add esp, 0xc
// 0061f57c  50                   push eax
// 0061f57d  8d4c2424             lea ecx, [esp + 0x24]
// 0061f581  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0061f589  e8c2a7deff           call 0x409d50
// 0061f58e  68c81b8d00           push 0x8d1bc8
// 0061f593  8d542424             lea edx, [esp + 0x24]
// 0061f597  52                   push edx
// 0061f598  e8ef1f0800           call 0x6a158c
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?on_index@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHABVconnection@signals@boost@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
