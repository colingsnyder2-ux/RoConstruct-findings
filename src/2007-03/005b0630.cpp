// roc 2007-03 005b0630  unit: seg_005b0000  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b0630
//
// 005b0630  6aff                 push -1
// 005b0632  683b9a7500           push 0x759a3b
// 005b0637  64a100000000         mov eax, dword ptr fs:[0]
// 005b063d  50                   push eax
// 005b063e  64892500000000       mov dword ptr fs:[0], esp
// 005b0645  51                   push ecx
// 005b0646  53                   push ebx
// 005b0647  56                   push esi
// 005b0648  8bf1                 mov esi, ecx
// 005b064a  57                   push edi
// 005b064b  8974240c             mov dword ptr [esp + 0xc], esi
// 005b064f  33db                 xor ebx, ebx
// 005b0651  395e08               cmp dword ptr [esi + 8], ebx
// 005b0654  895c2418             mov dword ptr [esp + 0x18], ebx
// 005b0658  7406                 je 0x5b0660
// 005b065a  53                   push ebx
// 005b065b  e8e0fdffff           call 0x5b0440
// 005b0660  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005b0663  3bfb                 cmp edi, ebx
// 005b0665  7410                 je 0x5b0677
// 005b0667  8bcf                 mov ecx, edi
// 005b0669  e852770e00           call 0x697dc0
// 005b066e  57                   push edi
// 005b066f  e87cda0600           call 0x61e0f0
// 005b0674  83c404               add esp, 4
// 005b0677  895e20               mov dword ptr [esi + 0x20], ebx
// 005b067a  8b4610               mov eax, dword ptr [esi + 0x10]
// 005b067d  50                   push eax
// 005b067e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005b0686  e8f52cf4ff           call 0x4f3380
// 005b068b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005b068f  83c404               add esp, 4
// 005b0692  895e10               mov dword ptr [esi + 0x10], ebx
// 005b0695  895e14               mov dword ptr [esi + 0x14], ebx
// 005b0698  895e18               mov dword ptr [esi + 0x18], ebx
// 005b069b  5f                   pop edi
// 005b069c  5e                   pop esi
// 005b069d  5b                   pop ebx
// 005b069e  64890d00000000       mov dword ptr fs:[0], ecx
// 005b06a5  83c410               add esp, 0x10
// 005b06a8  c3                   ret 
// library openrbx-client/App\v8kernel\Body.cpp (function ??1Body@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8kernel/Body.cpp
