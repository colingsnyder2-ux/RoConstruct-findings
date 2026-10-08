// roc 2012-06 00844dc0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844dc0
//
// 00844dc0  a15c9eda00           mov eax, dword ptr [0xda9e5c]
// 00844dc5  56                   push esi
// 00844dc6  8b742408             mov esi, dword ptr [esp + 8]
// 00844dca  57                   push edi
// 00844dcb  50                   push eax
// 00844dcc  6a02                 push 2
// 00844dce  56                   push esi
// 00844dcf  e83ceafeff           call 0x833810
// 00844dd4  8b0d5c9eda00         mov ecx, dword ptr [0xda9e5c]
// 00844dda  51                   push ecx
// 00844ddb  6a01                 push 1
// 00844ddd  56                   push esi
// 00844dde  8bf8                 mov edi, eax
// 00844de0  e82beafeff           call 0x833810
// 00844de5  8b10                 mov edx, dword ptr [eax]
// 00844de7  33c0                 xor eax, eax
// 00844de9  3b17                 cmp edx, dword ptr [edi]
// 00844deb  0f94c0               sete al
// 00844dee  50                   push eax
// 00844def  56                   push esi
// 00844df0  e8abd4feff           call 0x8322a0
// 00844df5  83c420               add esp, 0x20
// 00844df8  5f                   pop edi
// 00844df9  b801000000           mov eax, 1
// 00844dfe  5e                   pop esi
// 00844dff  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
