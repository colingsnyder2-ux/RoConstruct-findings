// roc 2011-06 004075b0  unit: VCApp::?$CComObject  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004075b0
//
// 004075b0  55                   push ebp
// 004075b1  8bec                 mov ebp, esp
// 004075b3  6aff                 push -1
// 004075b5  6810d39c00           push 0x9cd310
// 004075ba  64a100000000         mov eax, dword ptr fs:[0]
// 004075c0  50                   push eax
// 004075c1  64892500000000       mov dword ptr fs:[0], esp
// 004075c8  83ec08               sub esp, 8
// 004075cb  53                   push ebx
// 004075cc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004075cf  56                   push esi
// 004075d0  57                   push edi
// 004075d1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004075d4  85db                 test ebx, ebx
// 004075d6  7518                 jne 0x4075f0
// 004075d8  b857000780           mov eax, 0x80070057
// 004075dd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004075e0  64890d00000000       mov dword ptr fs:[0], ecx
// 004075e7  5f                   pop edi
// 004075e8  5e                   pop esi
// 004075e9  5b                   pop ebx
// 004075ea  8be5                 mov esp, ebp
// 004075ec  5d                   pop ebp
// 004075ed  c20c00               ret 0xc
// 004075f0  6a0c                 push 0xc
// 004075f2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004075f9  e8602a4000           call 0x80a05e
// 004075fe  8bf0                 mov esi, eax
// 00407600  83c404               add esp, 4
// 00407603  85f6                 test esi, esi
// 00407605  7526                 jne 0x40762d
// 00407607  b80e000780           mov eax, 0x8007000e
// 0040760c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040760f  64890d00000000       mov dword ptr fs:[0], ecx
// 00407616  5f                   pop edi
// 00407617  5e                   pop esi
// 00407618  5b                   pop ebx
// 00407619  8be5                 mov esp, ebp
// 0040761b  5d                   pop ebp
// 0040761c  c20c00               ret 0xc
// 0040761f  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00407622  e8132d4000           call 0x80a33a
// 00407627  b807764000           mov eax, 0x407607
// 0040762c  c3                   ret 
// 0040762d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00407630  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00407633  8d7b0c               lea edi, [ebx + 0xc]
// 00407636  57                   push edi
// 00407637  8906                 mov dword ptr [esi], eax
// 00407639  894e04               mov dword ptr [esi + 4], ecx
// 0040763c  ff158403a400         call dword ptr [0xa40384]
// 00407642  8b5308               mov edx, dword ptr [ebx + 8]
// 00407645  895608               mov dword ptr [esi + 8], edx
// 00407648  57                   push edi
// 00407649  c7450800000000       mov dword ptr [ebp + 8], 0
// 00407650  897308               mov dword ptr [ebx + 8], esi
// 00407653  ff158003a400         call dword ptr [0xa40380]
// 00407659  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040765c  8b4508               mov eax, dword ptr [ebp + 8]
// 0040765f  5f                   pop edi
// 00407660  5e                   pop esi
// 00407661  64890d00000000       mov dword ptr fs:[0], ecx
// 00407668  5b                   pop ebx
// 00407669  8be5                 mov esp, ebp
// 0040766b  5d                   pop ebp
// 0040766c  c20c00               ret 0xc
// copied from an identical function in another client (function ?AtlModuleAddTermFunc@ATL@@YGJPAU_ATL_MODULE70@1@P6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp