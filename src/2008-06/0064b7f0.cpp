// roc 2008-06 0064b7f0  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064b7f0
//
// 0064b7f0  53                   push ebx
// 0064b7f1  56                   push esi
// 0064b7f2  57                   push edi
// 0064b7f3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0064b7f7  8b4710               mov eax, dword ptr [edi + 0x10]
// 0064b7fa  2b470c               sub eax, dword ptr [edi + 0xc]
// 0064b7fd  33f6                 xor esi, esi
// 0064b7ff  c1f802               sar eax, 2
// 0064b802  8bd9                 mov ebx, ecx
// 0064b804  85c0                 test eax, eax
// 0064b806  762d                 jbe 0x64b835
// 0064b808  55                   push ebp
// 0064b809  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0064b80d  3bf0                 cmp esi, eax
// 0064b80f  7206                 jb 0x64b817
// 0064b811  ff1590288000         call dword ptr [0x802890]
// 0064b817  8b470c               mov eax, dword ptr [edi + 0xc]
// 0064b81a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0064b81d  55                   push ebp
// 0064b81e  51                   push ecx
// 0064b81f  8bcb                 mov ecx, ebx
// 0064b821  e8eaf5ffff           call 0x64ae10
// 0064b826  8b4710               mov eax, dword ptr [edi + 0x10]
// 0064b829  2b470c               sub eax, dword ptr [edi + 0xc]
// 0064b82c  46                   inc esi
// 0064b82d  c1f802               sar eax, 2
// 0064b830  3bf0                 cmp esi, eax
// 0064b832  72e3                 jb 0x64b817
// 0064b834  5d                   pop ebp
// 0064b835  5f                   pop edi
// 0064b836  5e                   pop esi
// 0064b837  5b                   pop ebx
// 0064b838  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
