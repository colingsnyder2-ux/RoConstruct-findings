// roc 2007-08 0054b8e0  unit: UString_sink::?$stream_buffer  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b8e0
//
// 0054b8e0  53                   push ebx
// 0054b8e1  55                   push ebp
// 0054b8e2  56                   push esi
// 0054b8e3  8bd9                 mov ebx, ecx
// 0054b8e5  8b03                 mov eax, dword ptr [ebx]
// 0054b8e7  8b68f4               mov ebp, dword ptr [eax - 0xc]
// 0054b8ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054b8ee  57                   push edi
// 0054b8ef  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0054b8f3  2bf8                 sub edi, eax
// 0054b8f5  ba01000000           mov edx, 1
// 0054b8fa  2b50fc               sub edx, dword ptr [eax - 4]
// 0054b8fd  8b40f8               mov eax, dword ptr [eax - 8]
// 0054b900  8d3429               lea esi, [ecx + ebp]
// 0054b903  2bc6                 sub eax, esi
// 0054b905  0bd0                 or edx, eax
// 0054b907  7d0c                 jge 0x54b915
// 0054b909  56                   push esi
// 0054b90a  8bcb                 mov ecx, ebx
// 0054b90c  e82f78ecff           call 0x413140
// 0054b911  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0054b915  3bfd                 cmp edi, ebp
// 0054b917  8b03                 mov eax, dword ptr [ebx]
// 0054b919  7707                 ja 0x54b922
// 0054b91b  8d1438               lea edx, [eax + edi]
// 0054b91e  89542414             mov dword ptr [esp + 0x14], edx
// 0054b922  8b542414             mov edx, dword ptr [esp + 0x14]
// 0054b926  51                   push ecx
// 0054b927  52                   push edx
// 0054b928  51                   push ecx
// 0054b929  03c5                 add eax, ebp
// 0054b92b  50                   push eax
// 0054b92c  ff15d4e67700         call dword ptr [0x77e6d4]
// 0054b932  83c410               add esp, 0x10
// 0054b935  85f6                 test esi, esi
// 0054b937  7c17                 jl 0x54b950
// 0054b939  8b03                 mov eax, dword ptr [ebx]
// 0054b93b  3b70f8               cmp esi, dword ptr [eax - 8]
// 0054b93e  7f10                 jg 0x54b950
// 0054b940  8970f4               mov dword ptr [eax - 0xc], esi
// 0054b943  8b03                 mov eax, dword ptr [ebx]
// 0054b945  5f                   pop edi
// 0054b946  c6040600             mov byte ptr [esi + eax], 0
// 0054b94a  5e                   pop esi
// 0054b94b  5d                   pop ebp
// 0054b94c  5b                   pop ebx
// 0054b94d  c20800               ret 8
// 0054b950  6857000780           push 0x80070057
// 0054b955  e8a656ebff           call 0x401000
// copied from an identical function in another client (function ?Append@?$CSimpleStringT@D$0A@@ATL@@QAEXPBDH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp