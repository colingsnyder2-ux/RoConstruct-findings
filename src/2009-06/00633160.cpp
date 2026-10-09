// roc 2009-06 00633160  unit: std::strstream  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633160
//
// 00633160  56                   push esi
// 00633161  8b742408             mov esi, dword ptr [esp + 8]
// 00633165  57                   push edi
// 00633166  6a43                 push 0x43
// 00633168  56                   push esi
// 00633169  e8e2630800           call 0x6b9550
// 0063316e  68eed8ffff           push 0xffffd8ee
// 00633173  56                   push esi
// 00633174  e827640800           call 0x6b95a0
// 00633179  6aff                 push -1
// 0063317b  56                   push esi
// 0063317c  e8df600800           call 0x6b9260
// 00633181  6afe                 push -2
// 00633183  56                   push esi
// 00633184  8bf8                 mov edi, eax
// 00633186  e8055c0800           call 0x6b8d90
// 0063318b  83c420               add esp, 0x20
// 0063318e  8bc7                 mov eax, edi
// 00633190  5f                   pop edi
// 00633191  5e                   pop esi
// 00633192  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ?getContext@ScriptContext@RBX@@SAAAV12@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
