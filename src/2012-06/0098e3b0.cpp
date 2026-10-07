// roc 2012-06 0098e3b0  unit: CXTPEdit  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e3b0
//
// 0098e3b0  83ec1c               sub esp, 0x1c
// 0098e3b3  56                   push esi
// 0098e3b4  8b742424             mov esi, dword ptr [esp + 0x24]
// 0098e3b8  57                   push edi
// 0098e3b9  8bf9                 mov edi, ecx
// 0098e3bb  83fe08               cmp esi, 8
// 0098e3be  7435                 je 0x98e3f5
// 0098e3c0  83fe21               cmp esi, 0x21
// 0098e3c3  7205                 jb 0x98e3ca
// 0098e3c5  83fe2e               cmp esi, 0x2e
// 0098e3c8  762b                 jbe 0x98e3f5
// 0098e3ca  83fe43               cmp esi, 0x43
// 0098e3cd  740f                 je 0x98e3de
// 0098e3cf  83fe56               cmp esi, 0x56
// 0098e3d2  740a                 je 0x98e3de
// 0098e3d4  83fe58               cmp esi, 0x58
// 0098e3d7  7405                 je 0x98e3de
// 0098e3d9  83fe5a               cmp esi, 0x5a
// 0098e3dc  750d                 jne 0x98e3eb
// 0098e3de  6a11                 push 0x11
// 0098e3e0  ff15843ab200         call dword ptr [0xb23a84]
// 0098e3e6  6685c0               test ax, ax
// 0098e3e9  7c0a                 jl 0x98e3f5
// 0098e3eb  5f                   pop edi
// 0098e3ec  33c0                 xor eax, eax
// 0098e3ee  5e                   pop esi
// 0098e3ef  83c41c               add esp, 0x1c
// 0098e3f2  c20800               ret 8
// 0098e3f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0098e3f9  8b4720               mov eax, dword ptr [edi + 0x20]
// 0098e3fc  8d542408             lea edx, [esp + 8]
// 0098e400  894c2414             mov dword ptr [esp + 0x14], ecx
// 0098e404  52                   push edx
// 0098e405  8bcf                 mov ecx, edi
// 0098e407  c744241000010000     mov dword ptr [esp + 0x10], 0x100
// 0098e40f  8944240c             mov dword ptr [esp + 0xc], eax
// 0098e413  89742414             mov dword ptr [esp + 0x14], esi
// 0098e417  e89eb11000           call 0xa995ba
// 0098e41c  f7d8                 neg eax
// 0098e41e  1bc0                 sbb eax, eax
// 0098e420  5f                   pop edi
// 0098e421  f7d8                 neg eax
// 0098e423  5e                   pop esi
// 0098e424  83c41c               add esp, 0x1c
// 0098e427  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlEdit.cpp (function ?IsDialogCode@CXTPCommandBarEditCtrl@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlEdit.cpp
