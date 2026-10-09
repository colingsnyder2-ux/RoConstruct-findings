// roc 2007-03 005363e0  unit: seg_00530000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005363e0
//
// 005363e0  56                   push esi
// 005363e1  8b742408             mov esi, dword ptr [esp + 8]
// 005363e5  57                   push edi
// 005363e6  6a43                 push 0x43
// 005363e8  56                   push esi
// 005363e9  e8622e0800           call 0x5b9250
// 005363ee  68eed8ffff           push 0xffffd8ee
// 005363f3  56                   push esi
// 005363f4  e8a72e0800           call 0x5b92a0
// 005363f9  6aff                 push -1
// 005363fb  56                   push esi
// 005363fc  e85f2b0800           call 0x5b8f60
// 00536401  6afe                 push -2
// 00536403  56                   push esi
// 00536404  8bf8                 mov edi, eax
// 00536406  e855260800           call 0x5b8a60
// 0053640b  83c420               add esp, 0x20
// 0053640e  8bc7                 mov eax, edi
// 00536410  5f                   pop edi
// 00536411  5e                   pop esi
// 00536412  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ?getContext@ScriptContext@RBX@@SAAAV12@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
