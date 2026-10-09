// roc 2009-12 007b7da0  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b7da0
//
// 007b7da0  53                   push ebx
// 007b7da1  56                   push esi
// 007b7da2  57                   push edi
// 007b7da3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b7da7  8b4710               mov eax, dword ptr [edi + 0x10]
// 007b7daa  2b470c               sub eax, dword ptr [edi + 0xc]
// 007b7dad  33f6                 xor esi, esi
// 007b7daf  c1f802               sar eax, 2
// 007b7db2  8bd9                 mov ebx, ecx
// 007b7db4  85c0                 test eax, eax
// 007b7db6  762d                 jbe 0x7b7de5
// 007b7db8  55                   push ebp
// 007b7db9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007b7dbd  3bf0                 cmp esi, eax
// 007b7dbf  7206                 jb 0x7b7dc7
// 007b7dc1  ff1560b79800         call dword ptr [0x98b760]
// 007b7dc7  8b470c               mov eax, dword ptr [edi + 0xc]
// 007b7dca  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007b7dcd  55                   push ebp
// 007b7dce  51                   push ecx
// 007b7dcf  8bcb                 mov ecx, ebx
// 007b7dd1  e87af6ffff           call 0x7b7450
// 007b7dd6  8b4710               mov eax, dword ptr [edi + 0x10]
// 007b7dd9  2b470c               sub eax, dword ptr [edi + 0xc]
// 007b7ddc  46                   inc esi
// 007b7ddd  c1f802               sar eax, 2
// 007b7de0  3bf0                 cmp esi, eax
// 007b7de2  72e3                 jb 0x7b7dc7
// 007b7de4  5d                   pop ebp
// 007b7de5  5f                   pop edi
// 007b7de6  5e                   pop esi
// 007b7de7  5b                   pop ebx
// 007b7de8  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
