// roc 2010-06 007ca980  unit: MyXTPCommandBars  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ca980
//
// 007ca980  6aff                 push -1
// 007ca982  68e8039b00           push 0x9b03e8
// 007ca987  64a100000000         mov eax, dword ptr fs:[0]
// 007ca98d  50                   push eax
// 007ca98e  83ec14               sub esp, 0x14
// 007ca991  53                   push ebx
// 007ca992  55                   push ebp
// 007ca993  56                   push esi
// 007ca994  57                   push edi
// 007ca995  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007ca99a  33c4                 xor eax, esp
// 007ca99c  50                   push eax
// 007ca99d  8d442428             lea eax, [esp + 0x28]
// 007ca9a1  64a300000000         mov dword ptr fs:[0], eax
// 007ca9a7  8bd9                 mov ebx, ecx
// 007ca9a9  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 007ca9ad  8bb580010000         mov esi, dword ptr [ebp + 0x180]
// 007ca9b3  85f6                 test esi, esi
// 007ca9b5  750d                 jne 0x7ca9c4
// 007ca9b7  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007ca9bb  57                   push edi
// 007ca9bc  55                   push ebp
// 007ca9bd  e83edcffff           call 0x7c8600
// 007ca9c2  eb7e                 jmp 0x7caa42
// 007ca9c4  6aff                 push -1
// 007ca9c6  55                   push ebp
// 007ca9c7  8bce                 mov ecx, esi
// 007ca9c9  e862ae0700           call 0x845830
// 007ca9ce  8bf8                 mov edi, eax
// 007ca9d0  83ffff               cmp edi, -1
// 007ca9d3  750f                 jne 0x7ca9e4
// 007ca9d5  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007ca9d9  57                   push edi
// 007ca9da  55                   push ebp
// 007ca9db  8bcb                 mov ecx, ebx
// 007ca9dd  e81edcffff           call 0x7c8600
// 007ca9e2  eb5e                 jmp 0x7caa42
// 007ca9e4  8d4c2414             lea ecx, [esp + 0x14]
// 007ca9e8  e803deffff           call 0x7c87f0
// 007ca9ed  8d442414             lea eax, [esp + 0x14]
// 007ca9f1  50                   push eax
// 007ca9f2  57                   push edi
// 007ca9f3  8bce                 mov ecx, esi
// 007ca9f5  c744243800000000     mov dword ptr [esp + 0x38], 0
// 007ca9fd  e83ebe0700           call 0x846840
// 007caa02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007caa06  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 007caa0a  33f6                 xor esi, esi
// 007caa0c  85c0                 test eax, eax
// 007caa0e  7e21                 jle 0x7caa31
// 007caa10  85f6                 test esi, esi
// 007caa12  7c6f                 jl 0x7caa83
// 007caa14  3bf0                 cmp esi, eax
// 007caa16  7d6b                 jge 0x7caa83
// 007caa18  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007caa1c  8b14b1               mov edx, dword ptr [ecx + esi*4]
// 007caa1f  57                   push edi
// 007caa20  52                   push edx
// 007caa21  8bcb                 mov ecx, ebx
// 007caa23  e8d8dbffff           call 0x7c8600
// 007caa28  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007caa2c  46                   inc esi
// 007caa2d  3bf0                 cmp esi, eax
// 007caa2f  7cdf                 jl 0x7caa10
// 007caa31  8d4c2414             lea ecx, [esp + 0x14]
// 007caa35  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 007caa3d  e8ceddffff           call 0x7c8810
// 007caa42  837b6000             cmp dword ptr [ebx + 0x60], 0
// 007caa46  7425                 je 0x7caa6d
// 007caa48  8bbffc000000         mov edi, dword ptr [edi + 0xfc]
// 007caa4e  6a00                 push 0
// 007caa50  6aff                 push -1
// 007caa52  6a00                 push 0
// 007caa54  68b9880000           push 0x88b9
// 007caa59  6a01                 push 1
// 007caa5b  8bcf                 mov ecx, edi
// 007caa5d  e8be170300           call 0x7fc220
// 007caa62  8b10                 mov edx, dword ptr [eax]
// 007caa64  8bc8                 mov ecx, eax
// 007caa66  8b4264               mov eax, dword ptr [edx + 0x64]
// 007caa69  6a01                 push 1
// 007caa6b  ffd0                 call eax
// 007caa6d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007caa71  64890d00000000       mov dword ptr fs:[0], ecx
// 007caa78  59                   pop ecx
// 007caa79  5f                   pop edi
// 007caa7a  5e                   pop esi
// 007caa7b  5d                   pop ebp
// 007caa7c  5b                   pop ebx
// 007caa7d  83c420               add esp, 0x20
// 007caa80  c20800               ret 8
// 007caa83  e8c4d1fdff           call 0x7a7c4c
// copied from an identical function in another client (function ?GetAddOrRemovePopup@CXTPCommandBars@@UAEXPAVCXTPToolBar@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp