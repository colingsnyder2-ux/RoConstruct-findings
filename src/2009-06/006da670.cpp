// roc 2009-06 006da670  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006da670
//
// 006da670  53                   push ebx
// 006da671  56                   push esi
// 006da672  57                   push edi
// 006da673  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006da677  8b4710               mov eax, dword ptr [edi + 0x10]
// 006da67a  2b470c               sub eax, dword ptr [edi + 0xc]
// 006da67d  33f6                 xor esi, esi
// 006da67f  c1f802               sar eax, 2
// 006da682  8bd9                 mov ebx, ecx
// 006da684  85c0                 test eax, eax
// 006da686  762d                 jbe 0x6da6b5
// 006da688  55                   push ebp
// 006da689  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006da68d  3bf0                 cmp esi, eax
// 006da68f  7206                 jb 0x6da697
// 006da691  ff15ace98900         call dword ptr [0x89e9ac]
// 006da697  8b470c               mov eax, dword ptr [edi + 0xc]
// 006da69a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006da69d  55                   push ebp
// 006da69e  51                   push ecx
// 006da69f  8bcb                 mov ecx, ebx
// 006da6a1  e81afdffff           call 0x6da3c0
// 006da6a6  8b4710               mov eax, dword ptr [edi + 0x10]
// 006da6a9  2b470c               sub eax, dword ptr [edi + 0xc]
// 006da6ac  46                   inc esi
// 006da6ad  c1f802               sar eax, 2
// 006da6b0  3bf0                 cmp esi, eax
// 006da6b2  72e3                 jb 0x6da697
// 006da6b4  5d                   pop ebp
// 006da6b5  5f                   pop edi
// 006da6b6  5e                   pop esi
// 006da6b7  5b                   pop ebx
// 006da6b8  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
