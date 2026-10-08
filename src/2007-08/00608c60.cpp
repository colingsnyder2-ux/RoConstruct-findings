// roc 2007-08 00608c60  unit: RBX::SimJobStage  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608c60
//
// 00608c60  56                   push esi
// 00608c61  57                   push edi
// 00608c62  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00608c65  8bc7                 mov eax, edi
// 00608c67  8b30                 mov esi, dword ptr [eax]
// 00608c69  8da42400000000       lea esp, [esp]
// 00608c70  3bf7                 cmp esi, edi
// 00608c72  740c                 je 0x608c80
// 00608c74  8b4e08               mov ecx, dword ptr [esi + 8]
// 00608c77  e8b439faff           call 0x5ac630
// 00608c7c  8b36                 mov esi, dword ptr [esi]
// 00608c7e  ebf0                 jmp 0x608c70
// 00608c80  5f                   pop edi
// 00608c81  5e                   pop esi
// 00608c82  c3                   ret 
// library rbxgs/v8world\SimJobStage.cpp (function ?notifyMovingPrimitives@SimJobStage@RBX@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/SimJobStage.cpp
