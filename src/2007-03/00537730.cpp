// roc 2007-03 00537730  unit: seg_00530000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00537730
//
// 00537730  a15c828a00           mov eax, dword ptr [0x8a825c]
// 00537735  56                   push esi
// 00537736  8b742408             mov esi, dword ptr [esp + 8]
// 0053773a  57                   push edi
// 0053773b  50                   push eax
// 0053773c  6a02                 push 2
// 0053773e  56                   push esi
// 0053773f  e86c2d0800           call 0x5ba4b0
// 00537744  8b0d5c828a00         mov ecx, dword ptr [0x8a825c]
// 0053774a  51                   push ecx
// 0053774b  6a01                 push 1
// 0053774d  56                   push esi
// 0053774e  8bf8                 mov edi, eax
// 00537750  e85b2d0800           call 0x5ba4b0
// 00537755  83c418               add esp, 0x18
// 00537758  57                   push edi
// 00537759  8bc8                 mov ecx, eax
// 0053775b  e840111f00           call 0x7288a0
// 00537760  0fb6d0               movzx edx, al
// 00537763  52                   push edx
// 00537764  56                   push esi
// 00537765  e8c61a0800           call 0x5b9230
// 0053776a  83c408               add esp, 8
// 0053776d  5f                   pop edi
// 0053776e  b801000000           mov eax, 1
// 00537773  5e                   pop esi
// 00537774  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
