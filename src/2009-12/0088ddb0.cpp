// roc 2009-12 0088ddb0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ddb0
//
// 0088ddb0  53                   push ebx
// 0088ddb1  56                   push esi
// 0088ddb2  57                   push edi
// 0088ddb3  8bf9                 mov edi, ecx
// 0088ddb5  33f6                 xor esi, esi
// 0088ddb7  397724               cmp dword ptr [edi + 0x24], esi
// 0088ddba  7e2d                 jle 0x88dde9
// 0088ddbc  8d642400             lea esp, [esp]
// 0088ddc0  85f6                 test esi, esi
// 0088ddc2  7c5d                 jl 0x88de21
// 0088ddc4  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0088ddc7  7d58                 jge 0x88de21
// 0088ddc9  8b4720               mov eax, dword ptr [edi + 0x20]
// 0088ddcc  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0088ddcf  85db                 test ebx, ebx
// 0088ddd1  7410                 je 0x88dde3
// 0088ddd3  8bcb                 mov ecx, ebx
// 0088ddd5  e806f8ffff           call 0x88d5e0
// 0088ddda  53                   push ebx
// 0088dddb  e87a5af6ff           call 0x7f385a
// 0088dde0  83c404               add esp, 4
// 0088dde3  46                   inc esi
// 0088dde4  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0088dde7  7cd7                 jl 0x88ddc0
// 0088dde9  6aff                 push -1
// 0088ddeb  6a00                 push 0
// 0088dded  8d4f1c               lea ecx, [edi + 0x1c]
// 0088ddf0  e8ab75fcff           call 0x8553a0
// 0088ddf5  837f1000             cmp dword ptr [edi + 0x10], 0
// 0088ddf9  741b                 je 0x88de16
// 0088ddfb  8b07                 mov eax, dword ptr [edi]
// 0088ddfd  85c0                 test eax, eax
// 0088ddff  7415                 je 0x88de16
// 0088de01  83782000             cmp dword ptr [eax + 0x20], 0
// 0088de05  740f                 je 0x88de16
// 0088de07  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0088de0a  6843cd0a00           push 0xacd43
// 0088de0f  51                   push ecx
// 0088de10  ff15d0cb9800         call dword ptr [0x98cbd0]
// 0088de16  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0088de1d  5f                   pop edi
// 0088de1e  5e                   pop esi
// 0088de1f  5b                   pop ebx
// 0088de20  c3                   ret 
// 0088de21  e8e65cf6ff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAnimations@CXTPCommandBarAnimation@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp