// roc 2007-03 005a8820  unit: seg_005a0000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8820
//
// 005a8820  56                   push esi
// 005a8821  57                   push edi
// 005a8822  8b7914               mov edi, dword ptr [ecx + 0x14]
// 005a8825  8bc7                 mov eax, edi
// 005a8827  8b30                 mov esi, dword ptr [eax]
// 005a8829  8da42400000000       lea esp, [esp]
// 005a8830  3bf7                 cmp esi, edi
// 005a8832  740c                 je 0x5a8840
// 005a8834  8b4e08               mov ecx, dword ptr [esi + 8]
// 005a8837  e8d4f8ffff           call 0x5a8110
// 005a883c  8b36                 mov esi, dword ptr [esi]
// 005a883e  ebf0                 jmp 0x5a8830
// 005a8840  5f                   pop edi
// 005a8841  5e                   pop esi
// 005a8842  c3                   ret 
// library rbxgs/v8world\SimJobStage.cpp (function ?notifyMovingPrimitives@SimJobStage@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
