// from server: 100% by auto
// roc 2008-06 006a67d0  unit: CXTPEdit  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a67d0
//
// 006a67d0  83ec1c               sub esp, 0x1c
// 006a67d3  56                   push esi
// 006a67d4  8b742424             mov esi, dword ptr [esp + 0x24]
// 006a67d8  57                   push edi
// 006a67d9  8bf9                 mov edi, ecx
// 006a67db  83fe08               cmp esi, 8
// 006a67de  7435                 je 0x6a6815
// 006a67e0  83fe21               cmp esi, 0x21
// 006a67e3  7205                 jb 0x6a67ea
// 006a67e5  83fe2e               cmp esi, 0x2e
// 006a67e8  762b                 jbe 0x6a6815
// 006a67ea  83fe43               cmp esi, 0x43
// 006a67ed  740f                 je 0x6a67fe
// 006a67ef  83fe56               cmp esi, 0x56
// 006a67f2  740a                 je 0x6a67fe
// 006a67f4  83fe58               cmp esi, 0x58
// 006a67f7  7405                 je 0x6a67fe
// 006a67f9  83fe5a               cmp esi, 0x5a
// 006a67fc  750d                 jne 0x6a680b
// 006a67fe  6a11                 push 0x11
// 006a6800  ff15a42d8000         call dword ptr [0x802da4]
// 006a6806  6685c0               test ax, ax
// 006a6809  7c0a                 jl 0x6a6815
// 006a680b  5f                   pop edi
// 006a680c  33c0                 xor eax, eax
// 006a680e  5e                   pop esi
// 006a680f  83c41c               add esp, 0x1c
// 006a6812  c20800               ret 8
// 006a6815  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006a6819  8b4720               mov eax, dword ptr [edi + 0x20]
// 006a681c  8d542408             lea edx, [esp + 8]
// 006a6820  894c2414             mov dword ptr [esp + 0x14], ecx
// 006a6824  52                   push edx
// 006a6825  8bcf                 mov ecx, edi
// 006a6827  c744241000010000     mov dword ptr [esp + 0x10], 0x100
// 006a682f  8944240c             mov dword ptr [esp + 0xc], eax
// 006a6833  89742414             mov dword ptr [esp + 0x14], esi
// 006a6837  e8b6571100           call 0x7bbff2
// 006a683c  f7d8                 neg eax
// 006a683e  1bc0                 sbb eax, eax
// 006a6840  5f                   pop edi
// 006a6841  f7d8                 neg eax
// 006a6843  5e                   pop esi
// 006a6844  83c41c               add esp, 0x1c
// 006a6847  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?IsDialogCode@CXTPEdit@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
