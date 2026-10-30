// roc 2009-12 008347e0  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008347e0
//
// 008347e0  83ec48               sub esp, 0x48
// 008347e3  a10052b600           mov eax, dword ptr [0xb65200]
// 008347e8  33c4                 xor eax, esp
// 008347ea  89442444             mov dword ptr [esp + 0x44], eax
// 008347ee  53                   push ebx
// 008347ef  56                   push esi
// 008347f0  8b742454             mov esi, dword ptr [esp + 0x54]
// 008347f4  57                   push edi
// 008347f5  6a3c                 push 0x3c
// 008347f7  8d442410             lea eax, [esp + 0x10]
// 008347fb  6a00                 push 0
// 008347fd  50                   push eax
// 008347fe  8bd9                 mov ebx, ecx
// 00834800  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00834808  e89702fcff           call 0x7f4aa4
// 0083480d  83c40c               add esp, 0xc
// 00834810  8d4c240c             lea ecx, [esp + 0xc]
// 00834814  51                   push ecx
// 00834815  8d7b18               lea edi, [ebx + 0x18]
// 00834818  56                   push esi
// 00834819  8bcf                 mov ecx, edi
// 0083481b  e840f4ffff           call 0x833c60
// 00834820  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00834824  56                   push esi
// 00834825  8bcf                 mov ecx, edi
// 00834827  89542450             mov dword ptr [esp + 0x50], edx
// 0083482b  e820feffff           call 0x834650
// 00834830  8bf8                 mov edi, eax
// 00834832  b911000000           mov ecx, 0x11
// 00834837  8d74240c             lea esi, [esp + 0xc]
// 0083483b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0083483d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00834840  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00834843  6a01                 push 1
// 00834845  6a00                 push 0
// 00834847  51                   push ecx
// 00834848  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0083484e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00834852  5f                   pop edi
// 00834853  5e                   pop esi
// 00834854  5b                   pop ebx
// 00834855  33cc                 xor ecx, esp
// 00834857  e83e0bfcff           call 0x7f539a
// 0083485c  83c448               add esp, 0x48
// 0083485f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemBackColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp