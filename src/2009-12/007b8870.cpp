// roc 2009-12 007b8870  unit: RBX::SleepStage  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b8870
//
// 007b8870  53                   push ebx
// 007b8871  56                   push esi
// 007b8872  57                   push edi
// 007b8873  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b8877  8b4710               mov eax, dword ptr [edi + 0x10]
// 007b887a  2b470c               sub eax, dword ptr [edi + 0xc]
// 007b887d  33f6                 xor esi, esi
// 007b887f  c1f802               sar eax, 2
// 007b8882  8bd9                 mov ebx, ecx
// 007b8884  85c0                 test eax, eax
// 007b8886  762d                 jbe 0x7b88b5
// 007b8888  55                   push ebp
// 007b8889  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007b888d  3bf0                 cmp esi, eax
// 007b888f  7206                 jb 0x7b8897
// 007b8891  ff1560b79800         call dword ptr [0x98b760]
// 007b8897  8b470c               mov eax, dword ptr [edi + 0xc]
// 007b889a  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 007b889d  55                   push ebp
// 007b889e  51                   push ecx
// 007b889f  8bcb                 mov ecx, ebx
// 007b88a1  e81afdffff           call 0x7b85c0
// 007b88a6  8b4710               mov eax, dword ptr [edi + 0x10]
// 007b88a9  2b470c               sub eax, dword ptr [edi + 0xc]
// 007b88ac  46                   inc esi
// 007b88ad  c1f802               sar eax, 2
// 007b88b0  3bf0                 cmp esi, eax
// 007b88b2  72e3                 jb 0x7b8897
// 007b88b4  5d                   pop ebp
// 007b88b5  5f                   pop edi
// 007b88b6  5e                   pop esi
// 007b88b7  5b                   pop ebx
// 007b88b8  c20800               ret 8
// library openrbx-client/App\v8world\SleepStage2.cpp (function ?changeJointState@SleepStage@RBX@@AAEXABV?$vector@PAVJoint@RBX@@V?$allocator@PAVJoint@RBX@@@std@@@std@@W4EdgeState@Sim@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/SleepStage2.cpp
