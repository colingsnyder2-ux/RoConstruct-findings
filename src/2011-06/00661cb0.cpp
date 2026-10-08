// roc 2011-06 00661cb0  unit: RBX::VExplosion::?$EventDesc  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661cb0
//
// 00661cb0  a164d5c400           mov eax, dword ptr [0xc4d564]
// 00661cb5  56                   push esi
// 00661cb6  8b742408             mov esi, dword ptr [esp + 8]
// 00661cba  57                   push edi
// 00661cbb  50                   push eax
// 00661cbc  6a02                 push 2
// 00661cbe  56                   push esi
// 00661cbf  e8bc231000           call 0x764080
// 00661cc4  8b0d64d5c400         mov ecx, dword ptr [0xc4d564]
// 00661cca  51                   push ecx
// 00661ccb  6a01                 push 1
// 00661ccd  56                   push esi
// 00661cce  8bf8                 mov edi, eax
// 00661cd0  e8ab231000           call 0x764080
// 00661cd5  8b10                 mov edx, dword ptr [eax]
// 00661cd7  33c0                 xor eax, eax
// 00661cd9  3b17                 cmp edx, dword ptr [edi]
// 00661cdb  0f94c0               sete al
// 00661cde  50                   push eax
// 00661cdf  56                   push esi
// 00661ce0  e82b0e1000           call 0x762b10
// 00661ce5  83c420               add esp, 0x20
// 00661ce8  5f                   pop edi
// 00661ce9  b801000000           mov eax, 1
// 00661cee  5e                   pop esi
// 00661cef  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
