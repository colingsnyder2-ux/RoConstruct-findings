// roc 2008-06 0064b840  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064b840
//
// 0064b840  53                   push ebx
// 0064b841  56                   push esi
// 0064b842  57                   push edi
// 0064b843  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064b847  8b4710               mov eax, dword ptr [edi + 0x10]
// 0064b84a  2b470c               sub eax, dword ptr [edi + 0xc]
// 0064b84d  33f6                 xor esi, esi
// 0064b84f  c1f802               sar eax, 2
// 0064b852  8bd9                 mov ebx, ecx
// 0064b854  85c0                 test eax, eax
// 0064b856  762d                 jbe 0x64b885
// 0064b858  55                   push ebp
// 0064b859  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0064b85d  3bf0                 cmp esi, eax
// 0064b85f  7206                 jb 0x64b867
// 0064b861  ff1590288000         call dword ptr [0x802890]
// 0064b867  8b470c               mov eax, dword ptr [edi + 0xc]
// 0064b86a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0064b86d  55                   push ebp
// 0064b86e  51                   push ecx
// 0064b86f  8bcb                 mov ecx, ebx
// 0064b871  e81af6ffff           call 0x64ae90
// 0064b876  8b4710               mov eax, dword ptr [edi + 0x10]
// 0064b879  2b470c               sub eax, dword ptr [edi + 0xc]
// 0064b87c  46                   inc esi
// 0064b87d  c1f802               sar eax, 2
// 0064b880  3bf0                 cmp esi, eax
// 0064b882  72e3                 jb 0x64b867
// 0064b884  5d                   pop ebp
// 0064b885  5f                   pop edi
// 0064b886  5e                   pop esi
// 0064b887  5b                   pop ebx
// 0064b888  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
