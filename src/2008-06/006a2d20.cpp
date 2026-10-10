// roc 2008-06 006a2d20  unit: MyXTPCommandBars  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a2d20
//
// 006a2d20  53                   push ebx
// 006a2d21  57                   push edi
// 006a2d22  8bd9                 mov ebx, ecx
// 006a2d24  33ff                 xor edi, edi
// 006a2d26  e8752e0100           call 0x6b5ba0
// 006a2d2b  85c0                 test eax, eax
// 006a2d2d  7e50                 jle 0x6a2d7f
// 006a2d2f  55                   push ebp
// 006a2d30  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006a2d34  56                   push esi
// 006a2d35  57                   push edi
// 006a2d36  8bcb                 mov ecx, ebx
// 006a2d38  e8732e0100           call 0x6b5bb0
// 006a2d3d  83b8d000000002       cmp dword ptr [eax + 0xd0], 2
// 006a2d44  752b                 jne 0x6a2d71
// 006a2d46  8b8dfc000000         mov ecx, dword ptr [ebp + 0xfc]
// 006a2d4c  6a00                 push 0
// 006a2d4e  6aff                 push -1
// 006a2d50  50                   push eax
// 006a2d51  e83a0e0500           call 0x6f3b90
// 006a2d56  8bf0                 mov esi, eax
// 006a2d58  8b06                 mov eax, dword ptr [esi]
// 006a2d5a  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 006a2d60  6a00                 push 0
// 006a2d62  8bce                 mov ecx, esi
// 006a2d64  ffd2                 call edx
// 006a2d66  8b06                 mov eax, dword ptr [esi]
// 006a2d68  8b5064               mov edx, dword ptr [eax + 0x64]
// 006a2d6b  6a00                 push 0
// 006a2d6d  8bce                 mov ecx, esi
// 006a2d6f  ffd2                 call edx
// 006a2d71  8bcb                 mov ecx, ebx
// 006a2d73  47                   inc edi
// 006a2d74  e8272e0100           call 0x6b5ba0
// 006a2d79  3bf8                 cmp edi, eax
// 006a2d7b  7cb8                 jl 0x6a2d35
// 006a2d7d  5e                   pop esi
// 006a2d7e  5d                   pop ebp
// 006a2d7f  5f                   pop edi
// 006a2d80  5b                   pop ebx
// 006a2d81  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPCommandBars.cpp (function ?_GetHiddenControls@CXTPToolBar@@AAEXPAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp
