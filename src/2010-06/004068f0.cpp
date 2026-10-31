// roc 2010-06 004068f0  unit: VCApp::?$CComObject  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004068f0
//
// 004068f0  55                   push ebp
// 004068f1  8bec                 mov ebp, esp
// 004068f3  6aff                 push -1
// 004068f5  6880db9700           push 0x97db80
// 004068fa  64a100000000         mov eax, dword ptr fs:[0]
// 00406900  50                   push eax
// 00406901  64892500000000       mov dword ptr fs:[0], esp
// 00406908  83ec08               sub esp, 8
// 0040690b  53                   push ebx
// 0040690c  8b5d08               mov ebx, dword ptr [ebp + 8]
// 0040690f  56                   push esi
// 00406910  57                   push edi
// 00406911  8965f0               mov dword ptr [ebp - 0x10], esp
// 00406914  85db                 test ebx, ebx
// 00406916  7518                 jne 0x406930
// 00406918  b857000780           mov eax, 0x80070057
// 0040691d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00406920  64890d00000000       mov dword ptr fs:[0], ecx
// 00406927  5f                   pop edi
// 00406928  5e                   pop esi
// 00406929  5b                   pop ebx
// 0040692a  8be5                 mov esp, ebp
// 0040692c  5d                   pop ebp
// 0040692d  c20c00               ret 0xc
// 00406930  6a0c                 push 0xc
// 00406932  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00406939  e862103a00           call 0x7a79a0
// 0040693e  8bf0                 mov esi, eax
// 00406940  83c404               add esp, 4
// 00406943  85f6                 test esi, esi
// 00406945  7526                 jne 0x40696d
// 00406947  b80e000780           mov eax, 0x8007000e
// 0040694c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040694f  64890d00000000       mov dword ptr fs:[0], ecx
// 00406956  5f                   pop edi
// 00406957  5e                   pop esi
// 00406958  5b                   pop ebx
// 00406959  8be5                 mov esp, ebp
// 0040695b  5d                   pop ebp
// 0040695c  c20c00               ret 0xc
// 0040695f  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00406962  e815133a00           call 0x7a7c7c
// 00406967  b847694000           mov eax, 0x406947
// 0040696c  c3                   ret 
// 0040696d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00406970  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00406973  8d7b0c               lea edi, [ebx + 0xc]
// 00406976  57                   push edi
// 00406977  8906                 mov dword ptr [esi], eax
// 00406979  894e04               mov dword ptr [esi + 4], ecx
// 0040697c  ff1574a39e00         call dword ptr [0x9ea374]
// 00406982  8b5308               mov edx, dword ptr [ebx + 8]
// 00406985  895608               mov dword ptr [esi + 8], edx
// 00406988  57                   push edi
// 00406989  c7450800000000       mov dword ptr [ebp + 8], 0
// 00406990  897308               mov dword ptr [ebx + 8], esi
// 00406993  ff1570a39e00         call dword ptr [0x9ea370]
// 00406999  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040699c  8b4508               mov eax, dword ptr [ebp + 8]
// 0040699f  5f                   pop edi
// 004069a0  5e                   pop esi
// 004069a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004069a8  5b                   pop ebx
// 004069a9  8be5                 mov esp, ebp
// 004069ab  5d                   pop ebp
// 004069ac  c20c00               ret 0xc
// copied from an identical function in another client (function ?AtlModuleAddTermFunc@ATL@@YGJPAU_ATL_MODULE70@1@P6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp