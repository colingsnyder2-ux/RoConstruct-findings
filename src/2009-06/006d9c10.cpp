// roc 2009-06 006d9c10  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d9c10
//
// 006d9c10  53                   push ebx
// 006d9c11  56                   push esi
// 006d9c12  57                   push edi
// 006d9c13  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006d9c17  8b4710               mov eax, dword ptr [edi + 0x10]
// 006d9c1a  2b470c               sub eax, dword ptr [edi + 0xc]
// 006d9c1d  33f6                 xor esi, esi
// 006d9c1f  c1f802               sar eax, 2
// 006d9c22  8bd9                 mov ebx, ecx
// 006d9c24  85c0                 test eax, eax
// 006d9c26  762d                 jbe 0x6d9c55
// 006d9c28  55                   push ebp
// 006d9c29  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006d9c2d  3bf0                 cmp esi, eax
// 006d9c2f  7206                 jb 0x6d9c37
// 006d9c31  ff15ace98900         call dword ptr [0x89e9ac]
// 006d9c37  8b470c               mov eax, dword ptr [edi + 0xc]
// 006d9c3a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006d9c3d  55                   push ebp
// 006d9c3e  51                   push ecx
// 006d9c3f  8bcb                 mov ecx, ebx
// 006d9c41  e83af7ffff           call 0x6d9380
// 006d9c46  8b4710               mov eax, dword ptr [edi + 0x10]
// 006d9c49  2b470c               sub eax, dword ptr [edi + 0xc]
// 006d9c4c  46                   inc esi
// 006d9c4d  c1f802               sar eax, 2
// 006d9c50  3bf0                 cmp esi, eax
// 006d9c52  72e3                 jb 0x6d9c37
// 006d9c54  5d                   pop ebp
// 006d9c55  5f                   pop edi
// 006d9c56  5e                   pop esi
// 006d9c57  5b                   pop ebx
// 006d9c58  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
