// roc 2012-06 00407790  unit: VCApp::?$CComObject  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407790
//
// 00407790  55                   push ebp
// 00407791  8bec                 mov ebp, esp
// 00407793  6aff                 push -1
// 00407795  68b0a2a900           push 0xa9a2b0
// 0040779a  64a100000000         mov eax, dword ptr fs:[0]
// 004077a0  50                   push eax
// 004077a1  64892500000000       mov dword ptr fs:[0], esp
// 004077a8  83ec08               sub esp, 8
// 004077ab  53                   push ebx
// 004077ac  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004077af  56                   push esi
// 004077b0  57                   push edi
// 004077b1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004077b4  85db                 test ebx, ebx
// 004077b6  7518                 jne 0x4077d0
// 004077b8  b857000780           mov eax, 0x80070057
// 004077bd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004077c0  64890d00000000       mov dword ptr fs:[0], ecx
// 004077c7  5f                   pop edi
// 004077c8  5e                   pop esi
// 004077c9  5b                   pop ebx
// 004077ca  8be5                 mov esp, ebp
// 004077cc  5d                   pop ebp
// 004077cd  c20c00               ret 0xc
// 004077d0  6a0c                 push 0xc
// 004077d2  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004077d9  e83ca95700           call 0x98211a
// 004077de  8bf0                 mov esi, eax
// 004077e0  83c404               add esp, 4
// 004077e3  85f6                 test esi, esi
// 004077e5  7526                 jne 0x40780d
// 004077e7  b80e000780           mov eax, 0x8007000e
// 004077ec  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004077ef  64890d00000000       mov dword ptr fs:[0], ecx
// 004077f6  5f                   pop edi
// 004077f7  5e                   pop esi
// 004077f8  5b                   pop ebx
// 004077f9  8be5                 mov esp, ebp
// 004077fb  5d                   pop ebp
// 004077fc  c20c00               ret 0xc
// 004077ff  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00407802  e8e3ab5700           call 0x9823ea
// 00407807  b8e7774000           mov eax, 0x4077e7
// 0040780c  c3                   ret 
// 0040780d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00407810  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00407813  8d7b0c               lea edi, [ebx + 0xc]
// 00407816  57                   push edi
// 00407817  8906                 mov dword ptr [esi], eax
// 00407819  894e04               mov dword ptr [esi + 4], ecx
// 0040781c  ff15b821b200         call dword ptr [0xb221b8]
// 00407822  8b5308               mov edx, dword ptr [ebx + 8]
// 00407825  895608               mov dword ptr [esi + 8], edx
// 00407828  57                   push edi
// 00407829  c7450800000000       mov dword ptr [ebp + 8], 0
// 00407830  897308               mov dword ptr [ebx + 8], esi
// 00407833  ff15b421b200         call dword ptr [0xb221b4]
// 00407839  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0040783c  8b4508               mov eax, dword ptr [ebp + 8]
// 0040783f  5f                   pop edi
// 00407840  5e                   pop esi
// 00407841  64890d00000000       mov dword ptr fs:[0], ecx
// 00407848  5b                   pop ebx
// 00407849  8be5                 mov esp, ebp
// 0040784b  5d                   pop ebp
// 0040784c  c20c00               ret 0xc
// copied from an identical function in another client (function ?AtlModuleAddTermFunc@ATL@@YGJPAU_ATL_MODULE70@1@P6GXK@ZK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_espclaude_13551b6034a59a28.cpp