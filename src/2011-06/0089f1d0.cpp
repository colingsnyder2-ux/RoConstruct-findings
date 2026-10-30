// roc 2011-06 0089f1d0  unit: CXTPCommandBarAnimation::PAUCAnimateInfo::?$CArray  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0089f1d0
//
// 0089f1d0  53                   push ebx
// 0089f1d1  56                   push esi
// 0089f1d2  57                   push edi
// 0089f1d3  8bf9                 mov edi, ecx
// 0089f1d5  33f6                 xor esi, esi
// 0089f1d7  397724               cmp dword ptr [edi + 0x24], esi
// 0089f1da  7e2d                 jle 0x89f209
// 0089f1dc  8d642400             lea esp, [esp]
// 0089f1e0  85f6                 test esi, esi
// 0089f1e2  7c5d                 jl 0x89f241
// 0089f1e4  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0089f1e7  7d58                 jge 0x89f241
// 0089f1e9  8b4720               mov eax, dword ptr [edi + 0x20]
// 0089f1ec  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0089f1ef  85db                 test ebx, ebx
// 0089f1f1  7410                 je 0x89f203
// 0089f1f3  8bcb                 mov ecx, ebx
// 0089f1f5  e806f8ffff           call 0x89ea00
// 0089f1fa  53                   push ebx
// 0089f1fb  e858aef6ff           call 0x80a058
// 0089f200  83c404               add esp, 4
// 0089f203  46                   inc esi
// 0089f204  3b7724               cmp esi, dword ptr [edi + 0x24]
// 0089f207  7cd7                 jl 0x89f1e0
// 0089f209  6aff                 push -1
// 0089f20b  6a00                 push 0
// 0089f20d  8d4f1c               lea ecx, [edi + 0x1c]
// 0089f210  e82bf9f9ff           call 0x83eb40
// 0089f215  837f1000             cmp dword ptr [edi + 0x10], 0
// 0089f219  741b                 je 0x89f236
// 0089f21b  8b07                 mov eax, dword ptr [edi]
// 0089f21d  85c0                 test eax, eax
// 0089f21f  7415                 je 0x89f236
// 0089f221  83782000             cmp dword ptr [eax + 0x20], 0
// 0089f225  740f                 je 0x89f236
// 0089f227  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0089f22a  6843cd0a00           push 0xacd43
// 0089f22f  51                   push ecx
// 0089f230  ff15d019a400         call dword ptr [0xa419d0]
// 0089f236  c7471000000000       mov dword ptr [edi + 0x10], 0
// 0089f23d  5f                   pop edi
// 0089f23e  5e                   pop esi
// 0089f23f  5b                   pop ebx
// 0089f240  c3                   ret 
// 0089f241  e8c4b0f6ff           call 0x80a30a
// copied from an identical function in another client (function ?RemoveAnimations@CXTPCommandBarAnimation@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBarAnimation.cpp