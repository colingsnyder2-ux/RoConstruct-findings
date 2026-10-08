// roc 2007-08 00608d40  unit: RBX::SimJobStage  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00608d40
//
// 00608d40  83ec08               sub esp, 8
// 00608d43  56                   push esi
// 00608d44  8b742410             mov esi, dword ptr [esp + 0x10]
// 00608d48  57                   push edi
// 00608d49  8bf9                 mov edi, ecx
// 00608d4b  837f1801             cmp dword ptr [edi + 0x18], 1
// 00608d4f  760c                 jbe 0x608d5d
// 00608d51  56                   push esi
// 00608d52  8d4710               lea eax, [edi + 0x10]
// 00608d55  50                   push eax
// 00608d56  e8a504eaff           call 0x4a9200
// 00608d5b  eb02                 jmp 0x608d5f
// 00608d5d  33c0                 xor eax, eax
// 00608d5f  50                   push eax
// 00608d60  56                   push esi
// 00608d61  e8da3bfaff           call 0x5ac940
// 00608d66  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00608d69  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00608d6c  83c408               add esp, 8
// 00608d6f  51                   push ecx
// 00608d70  52                   push edx
// 00608d71  8d442410             lea eax, [esp + 0x10]
// 00608d75  50                   push eax
// 00608d76  8d4f10               lea ecx, [edi + 0x10]
// 00608d79  e8a2e01100           call 0x726e20
// 00608d7e  8bce                 mov ecx, esi
// 00608d80  e80bffffff           call 0x608c90
// 00608d85  56                   push esi
// 00608d86  e8d76e0200           call 0x62fc62
// 00608d8b  83c404               add esp, 4
// 00608d8e  5f                   pop edi
// 00608d8f  5e                   pop esi
// 00608d90  83c408               add esp, 8
// 00608d93  c20400               ret 4
// library openrbx-client/App\v8world\SimJobStage.cpp (function ?destroyMechanism@SimJobStage@RBX@@AAEXPAVMechanism@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SimJobStage.cpp
