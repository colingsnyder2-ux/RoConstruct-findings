// roc 2007-03 004ec530  unit: seg_004e0000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ec530
//
// 004ec530  51                   push ecx
// 004ec531  55                   push ebp
// 004ec532  57                   push edi
// 004ec533  8bf9                 mov edi, ecx
// 004ec535  33ed                 xor ebp, ebp
// 004ec537  396f04               cmp dword ptr [edi + 4], ebp
// 004ec53a  7e61                 jle 0x4ec59d
// 004ec53c  53                   push ebx
// 004ec53d  56                   push esi
// 004ec53e  33db                 xor ebx, ebx
// 004ec540  8b37                 mov esi, dword ptr [edi]
// 004ec542  03f3                 add esi, ebx
// 004ec544  837e3400             cmp dword ptr [esi + 0x34], 0
// 004ec548  89742410             mov dword ptr [esp + 0x10], esi
// 004ec54c  7442                 je 0x4ec590
// 004ec54e  8b4634               mov eax, dword ptr [esi + 0x34]
// 004ec551  d9ee                 fldz 
// 004ec553  d85824               fcomp dword ptr [eax + 0x24]
// 004ec556  dfe0                 fnstsw ax
// 004ec558  f6c405               test ah, 5
// 004ec55b  7a0a                 jp 0x4ec567
// 004ec55d  8d4c2410             lea ecx, [esp + 0x10]
// 004ec561  51                   push ecx
// 004ec562  8d4f24               lea ecx, [edi + 0x24]
// 004ec565  eb24                 jmp 0x4ec58b
// 004ec567  8d542410             lea edx, [esp + 0x10]
// 004ec56b  52                   push edx
// 004ec56c  8d4f0c               lea ecx, [edi + 0xc]
// 004ec56f  e84cfbffff           call 0x4ec0c0
// 004ec574  d9ee                 fldz 
// 004ec576  8b4634               mov eax, dword ptr [esi + 0x34]
// 004ec579  d85820               fcomp dword ptr [eax + 0x20]
// 004ec57c  dfe0                 fnstsw ax
// 004ec57e  f6c405               test ah, 5
// 004ec581  7a0d                 jp 0x4ec590
// 004ec583  8d4c2410             lea ecx, [esp + 0x10]
// 004ec587  51                   push ecx
// 004ec588  8d4f18               lea ecx, [edi + 0x18]
// 004ec58b  e830fbffff           call 0x4ec0c0
// 004ec590  83c501               add ebp, 1
// 004ec593  83c344               add ebx, 0x44
// 004ec596  3b6f04               cmp ebp, dword ptr [edi + 4]
// 004ec599  7ca5                 jl 0x4ec540
// 004ec59b  5e                   pop esi
// 004ec59c  5b                   pop ebx
// 004ec59d  5f                   pop edi
// 004ec59e  5d                   pop ebp
// 004ec59f  59                   pop ecx
// 004ec5a0  c3                   ret 
// library rbxgs-render/RenderScene.cpp (function ?classifyProxies@RenderScene@Render@RBX@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
