// roc 2009-12 008c4970  unit: CXTPCustomizeToolbarsPage  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4970
//
// 008c4970  6aff                 push -1
// 008c4972  6823439600           push 0x964323
// 008c4977  64a100000000         mov eax, dword ptr fs:[0]
// 008c497d  50                   push eax
// 008c497e  83ec0c               sub esp, 0xc
// 008c4981  56                   push esi
// 008c4982  57                   push edi
// 008c4983  a10052b600           mov eax, dword ptr [0xb65200]
// 008c4988  33c4                 xor eax, esp
// 008c498a  50                   push eax
// 008c498b  8d442418             lea eax, [esp + 0x18]
// 008c498f  64a300000000         mov dword ptr fs:[0], eax
// 008c4995  8bf1                 mov esi, ecx
// 008c4997  8974240c             mov dword ptr [esp + 0xc], esi
// 008c499b  e8a8f7f2ff           call 0x7f4148
// 008c49a0  c7465400000000       mov dword ptr [esi + 0x54], 0
// 008c49a7  c7465800000000       mov dword ptr [esi + 0x58], 0
// 008c49ae  c6462401             mov byte ptr [esi + 0x24], 1
// 008c49b2  8d7e5c               lea edi, [esi + 0x5c]
// 008c49b5  6a01                 push 1
// 008c49b7  8bcf                 mov ecx, edi
// 008c49b9  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008c49c1  c706bc94a000         mov dword ptr [esi], 0xa094bc
// 008c49c7  e8746dfaff           call 0x86b740
// 008c49cc  6820299f00           push 0x9f2920
// 008c49d1  6a00                 push 0
// 008c49d3  8bcf                 mov ecx, edi
// 008c49d5  c644242801           mov byte ptr [esp + 0x28], 1
// 008c49da  e82173faff           call 0x86bd00
// 008c49df  8bcf                 mov ecx, edi
// 008c49e1  e8ca73faff           call 0x86bdb0
// 008c49e6  85c0                 test eax, eax
// 008c49e8  743c                 je 0x8c4a26
// 008c49ea  8d442410             lea eax, [esp + 0x10]
// 008c49ee  50                   push eax
// 008c49ef  6a01                 push 1
// 008c49f1  6a00                 push 0
// 008c49f3  6a00                 push 0
// 008c49f5  6a03                 push 3
// 008c49f7  6a00                 push 0
// 008c49f9  8bcf                 mov ecx, edi
// 008c49fb  e87070faff           call 0x86ba70
// 008c4a00  85c0                 test eax, eax
// 008c4a02  7c22                 jl 0x8c4a26
// 008c4a04  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c4a08  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c4a0c  894e68               mov dword ptr [esi + 0x68], ecx
// 008c4a0f  89566c               mov dword ptr [esi + 0x6c], edx
// 008c4a12  8bc6                 mov eax, esi
// 008c4a14  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c4a18  64890d00000000       mov dword ptr fs:[0], ecx
// 008c4a1f  59                   pop ecx
// 008c4a20  5f                   pop edi
// 008c4a21  5e                   pop esi
// 008c4a22  83c418               add esp, 0x18
// 008c4a25  c3                   ret 
// 008c4a26  b80d000000           mov eax, 0xd
// 008c4a2b  8bc8                 mov ecx, eax
// 008c4a2d  894e6c               mov dword ptr [esi + 0x6c], ecx
// 008c4a30  8bcf                 mov ecx, edi
// 008c4a32  894668               mov dword ptr [esi + 0x68], eax
// 008c4a35  e8666dfaff           call 0x86b7a0
// 008c4a3a  8bc6                 mov eax, esi
// 008c4a3c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c4a40  64890d00000000       mov dword ptr fs:[0], ecx
// 008c4a47  59                   pop ecx
// 008c4a48  5f                   pop edi
// 008c4a49  5e                   pop esi
// 008c4a4a  83c418               add esp, 0x18
// 008c4a4d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPCustomizeToolbarsPageCheckListBox@@QAE@XZ)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCustomizeToolbarsPage.cpp