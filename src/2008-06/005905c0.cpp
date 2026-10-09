// roc 2008-06 005905c0  unit: RBX::RootInstance  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005905c0
//
// 005905c0  6aff                 push -1
// 005905c2  68e8727d00           push 0x7d72e8
// 005905c7  64a100000000         mov eax, dword ptr fs:[0]
// 005905cd  50                   push eax
// 005905ce  64892500000000       mov dword ptr fs:[0], esp
// 005905d5  51                   push ecx
// 005905d6  56                   push esi
// 005905d7  57                   push edi
// 005905d8  8bf9                 mov edi, ecx
// 005905da  6a04                 push 4
// 005905dc  8d7704               lea esi, [edi + 4]
// 005905df  e83c031100           call 0x6a0920
// 005905e4  33c9                 xor ecx, ecx
// 005905e6  83c404               add esp, 4
// 005905e9  3bc1                 cmp eax, ecx
// 005905eb  7404                 je 0x5905f1
// 005905ed  8930                 mov dword ptr [eax], esi
// 005905ef  eb02                 jmp 0x5905f3
// 005905f1  33c0                 xor eax, eax
// 005905f3  8906                 mov dword ptr [esi], eax
// 005905f5  894e0c               mov dword ptr [esi + 0xc], ecx
// 005905f8  894e10               mov dword ptr [esi + 0x10], ecx
// 005905fb  894e14               mov dword ptr [esi + 0x14], ecx
// 005905fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00590602  8bc7                 mov eax, edi
// 00590604  5f                   pop edi
// 00590605  5e                   pop esi
// 00590606  64890d00000000       mov dword ptr fs:[0], ecx
// 0059060d  83c410               add esp, 0x10
// 00590610  c3                   ret 
// library openrbx-client/App\v8datamodel\RootInstance.cpp (function ??0ICameraOwner@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/RootInstance.cpp
