// roc 2008-06 0061f220  unit: RBX::Lua::LuaArguments  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f220
//
// 0061f220  64a100000000         mov eax, dword ptr fs:[0]
// 0061f226  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061f22a  6aff                 push -1
// 0061f22c  68d2947d00           push 0x7d94d2
// 0061f231  50                   push eax
// 0061f232  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061f236  64892500000000       mov dword ptr fs:[0], esp
// 0061f23d  8b00                 mov eax, dword ptr [eax]
// 0061f23f  81ec88000000         sub esp, 0x88
// 0061f245  51                   push ecx
// 0061f246  85c0                 test eax, eax
// 0061f248  7536                 jne 0x61f280
// 0061f24a  8d542470             lea edx, [esp + 0x70]
// 0061f24e  684c468400           push 0x84464c
// 0061f253  52                   push edx
// 0061f254  e8b7a8eeff           call 0x509b10
// 0061f259  83c40c               add esp, 0xc
// 0061f25c  50                   push eax
// 0061f25d  8d4c242c             lea ecx, [esp + 0x2c]
// 0061f261  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 0061f26c  e8dfaadeff           call 0x409d50
// 0061f271  68c81b8d00           push 0x8d1bc8
// 0061f276  8d44242c             lea eax, [esp + 0x2c]
// 0061f27a  50                   push eax
// 0061f27b  e80c230800           call 0x6a158c
// 0061f280  8d542454             lea edx, [esp + 0x54]
// 0061f284  6824228300           push 0x832224
// 0061f289  52                   push edx
// 0061f28a  e881a8eeff           call 0x509b10
// 0061f28f  83c40c               add esp, 0xc
// 0061f292  50                   push eax
// 0061f293  8d4c2404             lea ecx, [esp + 4]
// 0061f297  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 0061f2a2  e8a9aadeff           call 0x409d50
// 0061f2a7  68c81b8d00           push 0x8d1bc8
// 0061f2ac  8d442404             lea eax, [esp + 4]
// 0061f2b0  50                   push eax
// 0061f2b1  e8d6220800           call 0x6a158c
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ?on_newindex@?$Bridge@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAXAAV?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@PBDPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
