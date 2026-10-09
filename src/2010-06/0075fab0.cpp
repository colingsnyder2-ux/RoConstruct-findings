// roc 2010-06 0075fab0  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0075fab0
//
// 0075fab0  53                   push ebx
// 0075fab1  56                   push esi
// 0075fab2  57                   push edi
// 0075fab3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0075fab7  8b4710               mov eax, dword ptr [edi + 0x10]
// 0075faba  2b470c               sub eax, dword ptr [edi + 0xc]
// 0075fabd  33f6                 xor esi, esi
// 0075fabf  c1f802               sar eax, 2
// 0075fac2  8bd9                 mov ebx, ecx
// 0075fac4  85c0                 test eax, eax
// 0075fac6  762d                 jbe 0x75faf5
// 0075fac8  55                   push ebp
// 0075fac9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0075facd  3bf0                 cmp esi, eax
// 0075facf  7206                 jb 0x75fad7
// 0075fad1  ff150ca99e00         call dword ptr [0x9ea90c]
// 0075fad7  8b470c               mov eax, dword ptr [edi + 0xc]
// 0075fada  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0075fadd  55                   push ebp
// 0075fade  51                   push ecx
// 0075fadf  8bcb                 mov ecx, ebx
// 0075fae1  e86af6ffff           call 0x75f150
// 0075fae6  8b4710               mov eax, dword ptr [edi + 0x10]
// 0075fae9  2b470c               sub eax, dword ptr [edi + 0xc]
// 0075faec  46                   inc esi
// 0075faed  c1f802               sar eax, 2
// 0075faf0  3bf0                 cmp esi, eax
// 0075faf2  72e3                 jb 0x75fad7
// 0075faf4  5d                   pop ebp
// 0075faf5  5f                   pop edi
// 0075faf6  5e                   pop esi
// 0075faf7  5b                   pop ebx
// 0075faf8  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
