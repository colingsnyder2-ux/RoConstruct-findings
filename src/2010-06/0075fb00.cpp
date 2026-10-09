// roc 2010-06 0075fb00  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075fb00
//
// 0075fb00  53                   push ebx
// 0075fb01  56                   push esi
// 0075fb02  57                   push edi
// 0075fb03  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075fb07  8b4710               mov eax, dword ptr [edi + 0x10]
// 0075fb0a  2b470c               sub eax, dword ptr [edi + 0xc]
// 0075fb0d  33f6                 xor esi, esi
// 0075fb0f  c1f802               sar eax, 2
// 0075fb12  8bd9                 mov ebx, ecx
// 0075fb14  85c0                 test eax, eax
// 0075fb16  762d                 jbe 0x75fb45
// 0075fb18  55                   push ebp
// 0075fb19  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0075fb1d  3bf0                 cmp esi, eax
// 0075fb1f  7206                 jb 0x75fb27
// 0075fb21  ff150ca99e00         call dword ptr [0x9ea90c]
// 0075fb27  8b470c               mov eax, dword ptr [edi + 0xc]
// 0075fb2a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0075fb2d  55                   push ebp
// 0075fb2e  51                   push ecx
// 0075fb2f  8bcb                 mov ecx, ebx
// 0075fb31  e89af6ffff           call 0x75f1d0
// 0075fb36  8b4710               mov eax, dword ptr [edi + 0x10]
// 0075fb39  2b470c               sub eax, dword ptr [edi + 0xc]
// 0075fb3c  46                   inc esi
// 0075fb3d  c1f802               sar eax, 2
// 0075fb40  3bf0                 cmp esi, eax
// 0075fb42  72e3                 jb 0x75fb27
// 0075fb44  5d                   pop ebp
// 0075fb45  5f                   pop edi
// 0075fb46  5e                   pop esi
// 0075fb47  5b                   pop ebx
// 0075fb48  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
