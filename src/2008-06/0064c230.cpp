// roc 2008-06 0064c230  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064c230
//
// 0064c230  53                   push ebx
// 0064c231  56                   push esi
// 0064c232  57                   push edi
// 0064c233  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064c237  8b4710               mov eax, dword ptr [edi + 0x10]
// 0064c23a  2b470c               sub eax, dword ptr [edi + 0xc]
// 0064c23d  33f6                 xor esi, esi
// 0064c23f  c1f802               sar eax, 2
// 0064c242  8bd9                 mov ebx, ecx
// 0064c244  85c0                 test eax, eax
// 0064c246  762d                 jbe 0x64c275
// 0064c248  55                   push ebp
// 0064c249  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0064c24d  3bf0                 cmp esi, eax
// 0064c24f  7206                 jb 0x64c257
// 0064c251  ff1590288000         call dword ptr [0x802890]
// 0064c257  8b470c               mov eax, dword ptr [edi + 0xc]
// 0064c25a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0064c25d  55                   push ebp
// 0064c25e  51                   push ecx
// 0064c25f  8bcb                 mov ecx, ebx
// 0064c261  e82afdffff           call 0x64bf90
// 0064c266  8b4710               mov eax, dword ptr [edi + 0x10]
// 0064c269  2b470c               sub eax, dword ptr [edi + 0xc]
// 0064c26c  46                   inc esi
// 0064c26d  c1f802               sar eax, 2
// 0064c270  3bf0                 cmp esi, eax
// 0064c272  72e3                 jb 0x64c257
// 0064c274  5d                   pop ebp
// 0064c275  5f                   pop edi
// 0064c276  5e                   pop esi
// 0064c277  5b                   pop ebx
// 0064c278  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
