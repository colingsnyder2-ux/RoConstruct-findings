// roc 2009-12 007b7d50  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b7d50
//
// 007b7d50  53                   push ebx
// 007b7d51  56                   push esi
// 007b7d52  57                   push edi
// 007b7d53  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b7d57  8b4710               mov eax, dword ptr [edi + 0x10]
// 007b7d5a  2b470c               sub eax, dword ptr [edi + 0xc]
// 007b7d5d  33f6                 xor esi, esi
// 007b7d5f  c1f802               sar eax, 2
// 007b7d62  8bd9                 mov ebx, ecx
// 007b7d64  85c0                 test eax, eax
// 007b7d66  762d                 jbe 0x7b7d95
// 007b7d68  55                   push ebp
// 007b7d69  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007b7d6d  3bf0                 cmp esi, eax
// 007b7d6f  7206                 jb 0x7b7d77
// 007b7d71  ff1560b79800         call dword ptr [0x98b760]
// 007b7d77  8b470c               mov eax, dword ptr [edi + 0xc]
// 007b7d7a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007b7d7d  55                   push ebp
// 007b7d7e  51                   push ecx
// 007b7d7f  8bcb                 mov ecx, ebx
// 007b7d81  e84af6ffff           call 0x7b73d0
// 007b7d86  8b4710               mov eax, dword ptr [edi + 0x10]
// 007b7d89  2b470c               sub eax, dword ptr [edi + 0xc]
// 007b7d8c  46                   inc esi
// 007b7d8d  c1f802               sar eax, 2
// 007b7d90  3bf0                 cmp esi, eax
// 007b7d92  72e3                 jb 0x7b7d77
// 007b7d94  5d                   pop ebp
// 007b7d95  5f                   pop edi
// 007b7d96  5e                   pop esi
// 007b7d97  5b                   pop ebx
// 007b7d98  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
