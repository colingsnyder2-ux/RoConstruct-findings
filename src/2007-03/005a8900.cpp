// roc 2007-03 005a8900  unit: seg_005a0000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a8900
//
// 005a8900  83ec08               sub esp, 8
// 005a8903  56                   push esi
// 005a8904  8b742410             mov esi, dword ptr [esp + 0x10]
// 005a8908  57                   push edi
// 005a8909  8bf9                 mov edi, ecx
// 005a890b  837f1801             cmp dword ptr [edi + 0x18], 1
// 005a890f  760c                 jbe 0x5a891d
// 005a8911  56                   push esi
// 005a8912  8d4710               lea eax, [edi + 0x10]
// 005a8915  50                   push eax
// 005a8916  e8355fefff           call 0x49e850
// 005a891b  eb02                 jmp 0x5a891f
// 005a891d  33c0                 xor eax, eax
// 005a891f  50                   push eax
// 005a8920  56                   push esi
// 005a8921  e88afbffff           call 0x5a84b0
// 005a8926  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005a8929  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005a892c  83c408               add esp, 8
// 005a892f  51                   push ecx
// 005a8930  52                   push edx
// 005a8931  8d442410             lea eax, [esp + 0x10]
// 005a8935  50                   push eax
// 005a8936  8d4f10               lea ecx, [edi + 0x10]
// 005a8939  e842ec1700           call 0x727580
// 005a893e  8bce                 mov ecx, esi
// 005a8940  e80bffffff           call 0x5a8850
// 005a8945  56                   push esi
// 005a8946  e8a5570700           call 0x61e0f0
// 005a894b  83c404               add esp, 4
// 005a894e  5f                   pop edi
// 005a894f  5e                   pop esi
// 005a8950  83c408               add esp, 8
// 005a8953  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?destroyMechanism@SimJobStage@RBX@@AAEXPAVMechanism@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
