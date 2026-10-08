// roc 2007-08 00533ff0  unit: RBX::Selection  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533ff0
//
// 00533ff0  56                   push esi
// 00533ff1  8b742408             mov esi, dword ptr [esp + 8]
// 00533ff5  57                   push edi
// 00533ff6  6a43                 push 0x43
// 00533ff8  56                   push esi
// 00533ff9  e8829d0800           call 0x5bdd80
// 00533ffe  68eed8ffff           push 0xffffd8ee
// 00534003  56                   push esi
// 00534004  e8c79d0800           call 0x5bddd0
// 00534009  6aff                 push -1
// 0053400b  56                   push esi
// 0053400c  e87f9a0800           call 0x5bda90
// 00534011  6afe                 push -2
// 00534013  56                   push esi
// 00534014  8bf8                 mov edi, eax
// 00534016  e875950800           call 0x5bd590
// 0053401b  83c420               add esp, 0x20
// 0053401e  8bc7                 mov eax, edi
// 00534020  5f                   pop edi
// 00534021  5e                   pop esi
// 00534022  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ?getContext@ScriptContext@RBX@@SAAAV12@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
