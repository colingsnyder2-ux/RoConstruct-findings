// roc 2009-06 006d9bc0  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d9bc0
//
// 006d9bc0  53                   push ebx
// 006d9bc1  56                   push esi
// 006d9bc2  57                   push edi
// 006d9bc3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006d9bc7  8b4710               mov eax, dword ptr [edi + 0x10]
// 006d9bca  2b470c               sub eax, dword ptr [edi + 0xc]
// 006d9bcd  33f6                 xor esi, esi
// 006d9bcf  c1f802               sar eax, 2
// 006d9bd2  8bd9                 mov ebx, ecx
// 006d9bd4  85c0                 test eax, eax
// 006d9bd6  762d                 jbe 0x6d9c05
// 006d9bd8  55                   push ebp
// 006d9bd9  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006d9bdd  3bf0                 cmp esi, eax
// 006d9bdf  7206                 jb 0x6d9be7
// 006d9be1  ff15ace98900         call dword ptr [0x89e9ac]
// 006d9be7  8b470c               mov eax, dword ptr [edi + 0xc]
// 006d9bea  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006d9bed  55                   push ebp
// 006d9bee  51                   push ecx
// 006d9bef  8bcb                 mov ecx, ebx
// 006d9bf1  e80af7ffff           call 0x6d9300
// 006d9bf6  8b4710               mov eax, dword ptr [edi + 0x10]
// 006d9bf9  2b470c               sub eax, dword ptr [edi + 0xc]
// 006d9bfc  46                   inc esi
// 006d9bfd  c1f802               sar eax, 2
// 006d9c00  3bf0                 cmp esi, eax
// 006d9c02  72e3                 jb 0x6d9be7
// 006d9c04  5d                   pop ebp
// 006d9c05  5f                   pop edi
// 006d9c06  5e                   pop esi
// 006d9c07  5b                   pop ebx
// 006d9c08  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
