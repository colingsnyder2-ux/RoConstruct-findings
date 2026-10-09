// roc 2008-06 005a86e0  unit: RBX::Log  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a86e0
//
// 005a86e0  56                   push esi
// 005a86e1  8b742408             mov esi, dword ptr [esp + 8]
// 005a86e5  57                   push edi
// 005a86e6  6a43                 push 0x43
// 005a86e8  56                   push esi
// 005a86e9  e8229d0600           call 0x612410
// 005a86ee  68eed8ffff           push 0xffffd8ee
// 005a86f3  56                   push esi
// 005a86f4  e8679d0600           call 0x612460
// 005a86f9  6aff                 push -1
// 005a86fb  56                   push esi
// 005a86fc  e81f9a0600           call 0x612120
// 005a8701  6afe                 push -2
// 005a8703  56                   push esi
// 005a8704  8bf8                 mov edi, eax
// 005a8706  e815950600           call 0x611c20
// 005a870b  83c420               add esp, 0x20
// 005a870e  8bc7                 mov eax, edi
// 005a8710  5f                   pop edi
// 005a8711  5e                   pop esi
// 005a8712  c3                   ret 
// library openrbx-client/App\script\ScriptContext.cpp (function ?getContext@ScriptContext@RBX@@SAAAV12@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/ScriptContext.cpp
