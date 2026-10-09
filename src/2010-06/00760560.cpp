// roc 2010-06 00760560  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00760560
//
// 00760560  53                   push ebx
// 00760561  56                   push esi
// 00760562  57                   push edi
// 00760563  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00760567  8b4710               mov eax, dword ptr [edi + 0x10]
// 0076056a  2b470c               sub eax, dword ptr [edi + 0xc]
// 0076056d  33f6                 xor esi, esi
// 0076056f  c1f802               sar eax, 2
// 00760572  8bd9                 mov ebx, ecx
// 00760574  85c0                 test eax, eax
// 00760576  762d                 jbe 0x7605a5
// 00760578  55                   push ebp
// 00760579  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0076057d  3bf0                 cmp esi, eax
// 0076057f  7206                 jb 0x760587
// 00760581  ff150ca99e00         call dword ptr [0x9ea90c]
// 00760587  8b470c               mov eax, dword ptr [edi + 0xc]
// 0076058a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0076058d  55                   push ebp
// 0076058e  51                   push ecx
// 0076058f  8bcb                 mov ecx, ebx
// 00760591  e81afdffff           call 0x7602b0
// 00760596  8b4710               mov eax, dword ptr [edi + 0x10]
// 00760599  2b470c               sub eax, dword ptr [edi + 0xc]
// 0076059c  46                   inc esi
// 0076059d  c1f802               sar eax, 2
// 007605a0  3bf0                 cmp esi, eax
// 007605a2  72e3                 jb 0x760587
// 007605a4  5d                   pop ebp
// 007605a5  5f                   pop edi
// 007605a6  5e                   pop esi
// 007605a7  5b                   pop ebx
// 007605a8  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
